#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QByteArray>
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    // 定时器触发
//    QTimer* timer = new QTimer;
//    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(close()));
//    timer->start(2 * 1000); //以毫秒为单位
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSubmit_clicked()
{
//    // 系统关机
//    QString command = "shutdown -s -t 3600";
//    system(command.toUtf8().data());

    // 关闭程序
    QTimer* timer = new QTimer;
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(close()));
    timer->start( ui->spinBoxTime->value() * 1000); //以毫秒为单位

}
