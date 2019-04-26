#include "dialog.h"
#include "ui_dialog.h"

#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // 设置为密码样式，或者通过属性窗口设置 echoMode: Password
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButtonLogin_clicked()
{
    QString defaultUsername = "admin";
    QString defaultPassword = "123456";
    if(ui->lineEditUsername->text() == defaultUsername && ui->lineEditPassword->text() == defaultPassword)
    {
        QMessageBox::information(this, "Congratulation", "login succeed.");
        this->close();
    }
    else
    {
        QMessageBox::warning(this, "Permission Deny", "Error! [admin:123456]");
    }
}
