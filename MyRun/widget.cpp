#include "widget.h"
#include "ui_widget.h"
#include <QProcess>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    // 固定窗口大小
    this->setMinimumSize(400, 183);
    this->setMaximumSize(400, 183);

    //信号与槽
    QObject::connect(ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(on_buttonSubmit_clicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_buttonSubmit_clicked()
{
    QProcess* process = new QProcess;
    QString program = ui->lineEdit->text();     //取出输入的文本
    process->start(program.trimmed());          //清除空格

    ui->lineEdit->clear();
    this->close();                              //窗口关闭


}



void Widget::on_buttonCancel_clicked()
{
    this->close();
}
