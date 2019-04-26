#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>


namespace Ui {
class AboutDialog;
}

class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog(QWidget *parent = nullptr);
    ~AboutDialog();

private slots:
    void StopSlot();
    void StartSlot();

private:
    QMovie* m_movie;    //小动画

private:
    Ui::AboutDialog *ui;
};

#endif // ABOUTDIALOG_H
