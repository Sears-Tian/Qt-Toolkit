#include "dialog.h"
#include "ui_dialog.h"

#include <QFileDialog>
#include <QBuffer>
#include <QDataStream>
#include <QImage>
#include <QPixmap>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),sharedMemory("MySharedMemory")   //必须得为共享内存段设置key
{
    ui->setupUi(this);

    QObject::connect(ui->loadFromFileButton, SIGNAL(clicked()), this, SLOT(loadFromFile()));
    QObject::connect(ui->loadFromSharedMemoryButton, SIGNAL(clicked()),this, SLOT(loadFromMemory()));
    this->setWindowTitle(tr("SharedMemory Example"));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::loadFromFile()
{
    // 共享内存存在与否判断
    if (sharedMemory.isAttached())
        if (!sharedMemory.detach())
            ui->label->setText(tr("Unable to detach from shared memory."));


    // 打开文件对话框
     QString fileName = QFileDialog::getOpenFileName(this, QString(), QString(),
                                         tr("Images (*.png *.xpm *.jpg)"));
     // 加载图片到QImage对象中
     QImage image;
     if (!image.load(fileName)) {
         ui->label->setText(tr("Selected file is not an image, please select another!"));
         return;
     }
//     // 将图片显示在界面上
//     ui->label->setPixmap(QPixmap::fromImage(image).scaled(ui->label->size()));

     // load into shared memory
     // QBuffer是一个文件读写，文件在内存中
      QBuffer buffer;
      bool ok = buffer.open(QBuffer::ReadWrite);
      if(ok)
      {
          // 将图片数据读入到数据流中
          QDataStream out(&buffer);
          out << image;
      }
      else
      {
          ui->label->setText(tr("Open buffer is failed!"));
          return;
      }
      int size = static_cast<int>(buffer.size());
      // 创建共享内存
      if (!sharedMemory.create(size))
      {
          ui->label->setText(tr("Unable to create shared memory segment."));
          return;
      }
      // 共享内存加锁解锁访问
      sharedMemory.lock();
      char *to = reinterpret_cast<char*>(sharedMemory.data());
      const char *from = buffer.data().data();
      memcpy(to, from, static_cast<size_t>(qMin(sharedMemory.size(), size)));
      sharedMemory.unlock();

      ui->label->setText(tr("Image data has been loaded into shared memory."));
}

void Dialog::loadFromMemory()
{
    if (!sharedMemory.attach()) {
        ui->label->setText(tr("Unable to attach to shared memory segment.\n" \
                             "Load an image first."));
        return;
    }

    QBuffer buffer;
    QDataStream in(&buffer);
    QImage image;

    sharedMemory.lock();
    buffer.setData(reinterpret_cast<const char*>(sharedMemory.constData()), sharedMemory.size());
    buffer.open(QBuffer::ReadOnly);
    in >> image;
    sharedMemory.unlock();

    sharedMemory.detach();
    ui->label->setPixmap(QPixmap::fromImage(image).scaled(ui->label->size()));

}
