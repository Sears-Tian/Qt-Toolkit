#include "cameraparamform.h"
#include "ui_cameraparamform.h"

CameraParamForm::CameraParamForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CameraParamForm)
{
    ui->setupUi(this);

    // 信号槽连接
    QObject::connect(ui->horizontalSliderEV, SIGNAL(valueChanged(int)), this, SLOT(SetValueSpinBoxSlot(int)));
    QObject::connect(ui->doubleSpinBoxEV, SIGNAL(valueChanged(double)), this, SLOT(SetValueSliderSlot(double)));
}
CameraParamForm::~CameraParamForm()
{
    delete ui;
}

void CameraParamForm::SetValueSpinBoxSlot(int value)
{
    ui->doubleSpinBoxEV->setValue(1.0 * value / 10);
}

void CameraParamForm::SetValueSliderSlot(double d)
{
    ui->horizontalSliderEV->setValue(static_cast<int>(d * 10));
}

void CameraParamForm::on_pushButtonSubmit_clicked()
{
    close();
}
