#include "camerasettingform.h"
#include "ui_camerasettingform.h"

CameraSettingForm::CameraSettingForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CameraSettingForm)
{
    ui->setupUi(this);

    this->SetFullSize();
}

CameraSettingForm::~CameraSettingForm()
{
    delete ui;
}

void CameraSettingForm::SetFullSize()
{
    QString text = ui->lineEditWidth->text() + " X " + ui->lineEditHeight->text();
    ui->labelSize->setText(text);
}

void CameraSettingForm::on_pushButtonSubmit_clicked()
{
    close();
}


void CameraSettingForm::on_lineEditWidth_editingFinished()
{
    this->SetFullSize();
}

void CameraSettingForm::on_lineEditHeight_editingFinished()
{
    this->SetFullSize();
}
