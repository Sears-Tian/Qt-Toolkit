#ifndef CAMERAPARAMFORM_H
#define CAMERAPARAMFORM_H

#include <QWidget>

namespace Ui {
class CameraParamForm;
}

class CameraParamForm : public QWidget
{
    Q_OBJECT

public:
    explicit CameraParamForm(QWidget *parent = nullptr);
    ~CameraParamForm();

private slots:
    // 整数 <=> 浮点数
    void SetValueSpinBoxSlot(int value);
    void SetValueSliderSlot(double d);

    void on_pushButtonSubmit_clicked();

private:
    Ui::CameraParamForm *ui;
};

#endif // CAMERAPARAMFORM_H
