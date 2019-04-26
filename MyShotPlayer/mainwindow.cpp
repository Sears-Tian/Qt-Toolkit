#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QPixmap>
#include <QClipboard>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 定时获取剪贴板中的图片
    m_timer = new QTimer;
    QObject::connect(m_timer, SIGNAL(timeout()), this, SLOT(FetchPictureSlot()));
    m_timer->start(200);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::FetchPictureSlot()
{
    QClipboard* board = QApplication::clipboard();
    m_pixmap = board->pixmap();                     //取出剪贴板中的图片
    ui->labelPlayer->setPixmap(m_pixmap.scaled(ui->labelPlayer->size()));
}
