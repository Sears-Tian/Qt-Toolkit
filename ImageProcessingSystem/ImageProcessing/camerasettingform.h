#ifndef CAMERASETTINGFORM_H
#define CAMERASETTINGFORM_H

#include <QWidget>

namespace Ui {
class CameraSettingForm;
}

class CameraSettingForm : public QWidget
{
    Q_OBJECT

public:
    explicit CameraSettingForm(QWidget *parent = nullptr);
    ~CameraSettingForm();

    // 显示尺寸文本
    void SetFullSize();

private slots:
    void on_pushButtonSubmit_clicked();

    void on_lineEditWidth_editingFinished();

    void on_lineEditHeight_editingFinished();

private:
    Ui::CameraSettingForm *ui;
};

#endif // CAMERASETTINGFORM_H
