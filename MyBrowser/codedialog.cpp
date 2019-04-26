#include "codedialog.h"
#include "ui_codedialog.h"

CodeDialog::CodeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CodeDialog)
{
    ui->setupUi(this);
}

CodeDialog::~CodeDialog()
{
    delete ui;
}

void CodeDialog::SetSourceCode(QString text)
{
    ui->textEdit->setPlainText(text);
}
