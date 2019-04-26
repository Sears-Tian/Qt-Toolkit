#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include <QDir>
#include <QFileDialog>
#include <QDateTime>


#pragma execution_character_set("utf-8")

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonOpen_clicked()
{
//    // 路径分析
//    qDebug() << "current path = " << QDir::currentPath();
//    qDebug() << "root path = " << QDir::rootPath();
//    qDebug() << "home path = " << QDir::homePath();
//    qDebug() << "temp path = " << QDir::tempPath();

    QString fileName = QFileDialog::getOpenFileName(this, "Open file", QDir::homePath());

    QFileInfo fileInfo(fileName);
    ui->lineEditName->setText(fileInfo.fileName());
    ui->lineEditSize->setText(QString::number(fileInfo.size()) + " Bytes");

    ui->lineEditCreate->setText(fileInfo.birthTime().toString("yyyy-MM-dd hh:mm::ss"));
    ui->lineEditLast->setText(fileInfo.lastModified().toString("yyyy-MM-dd hh:mm::ss"));
    ui->lineEditDir->setText(fileInfo.isDir() ?
                                 QString("是").toLocal8Bit() : QString("否").toLocal8Bit());

}
