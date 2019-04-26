#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QListWidgetItem>
#include <QFileDialog>
#include <QMessageBox>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // enum ViewMode { ListMode, IconMode };
    ui->listWidget->setViewMode(QListWidget::IconMode);

    // 连接
    QObject::connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(on_pushButtonAdd_clicked()));
    QObject::connect(ui->pushButtonShowDir, SIGNAL(clicked()), this, SLOT(ShowDirSlot()));

    QObject::connect(ui->listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem *)),
                     this, SLOT(DoubleClickedItemSlot(QListWidgetItem *)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 添加
void MainWindow::on_pushButtonAdd_clicked()
{
//    // 方法1.
//    QString text = ui->lineEdit->text();
//    ui->listWidget->addItem(text);

    // 方法2.
    QString text2 = ui->lineEdit->text();
    QListWidgetItem* item = new QListWidgetItem;
    item->setText(text2);
    ui->listWidget->addItem(item);
}

// 删除
void MainWindow::on_pushButtonDel_clicked()
{
   QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
   delete item;
}

// 全部删除，逆序删除
void MainWindow::on_pushButtonClear_clicked()
{
//    // 方法1.
//    int count = ui->listWidget->count() - 1;
//    while(count >= 0)
//    {
//        delete ui->listWidget->takeItem(count--);
//    }

    // 方法2.
    ui->listWidget->clear();
}

void MainWindow::ShowDirSlot()
{
   QStringList fileNames = QDir::current().entryList();
   if(!fileNames.size())
   {
        QMessageBox::information(this, "Zero", "No file seleced!");
        return;
   }

   ui->listWidget->clear();
   QIcon icon("images/paste.png");
   int count = fileNames.count();
   for(int index = 0; index < count; index++)
   {
       if("." == fileNames.at(index) || ".." == fileNames.at(index))
           continue;

       QListWidgetItem* item = new QListWidgetItem;
       item->setIcon(icon);
       item->setText(fileNames.at(index));
       ui->listWidget->addItem(item);
   }
}

//void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
//{
//    QMessageBox::information(this, "System Slot", "clicked item = " + item->text());
//}

//void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
//{
//    QMessageBox::information(this, "System Slot", "double clicked item = " + item->text());
//}

void MainWindow::DoubleClickedItemSlot(QListWidgetItem *item)
{
    QMessageBox::information(this, "Custom Slot", "double clicked item = " + item->text());
}
