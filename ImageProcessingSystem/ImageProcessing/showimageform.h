#ifndef SHOWIMAGEFORM_H
#define SHOWIMAGEFORM_H

#include <QWidget>
#include <QPixmap>

namespace Ui {
class ShowImageForm;
}


class QPixmap;

class ShowImageForm : public QWidget
{
    Q_OBJECT

public:
    explicit ShowImageForm(QWidget *parent = nullptr);
    ~ShowImageForm();

    // 设置图片数据
    void SetImage(QPixmap* pixmap);

private:
    Ui::ShowImageForm *ui;
};

#endif // SHOWIMAGEFORM_H
