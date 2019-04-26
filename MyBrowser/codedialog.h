#ifndef CODEDIALOG_H
#define CODEDIALOG_H

#include <QDialog>

namespace Ui {
class CodeDialog;
}

class CodeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CodeDialog(QWidget *parent = nullptr);
    ~CodeDialog();

    // 给Dialog的文本编辑器设置文本
    void SetSourceCode(QString text);

private:
    Ui::CodeDialog *ui;
};

#endif // CODEDIALOG_H
