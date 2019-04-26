#include "showimageform.h"
#include "ui_showimageform.h"

#include <QPixmap>

ShowImageForm::ShowImageForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ShowImageForm)
{
    ui->setupUi(this);
}

ShowImageForm::~ShowImageForm()
{
    delete ui;
}

void ShowImageForm::SetImage(QPixmap* pixmap)
{
    ui->labelImage->setPixmap(*pixmap);
}
