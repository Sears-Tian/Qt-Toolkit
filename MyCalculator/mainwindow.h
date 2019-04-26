#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

//private slots:
//    void on_pushButtonCalc_clicked();

// 第二种方法：自定义信号槽
private slots:
    void CalcSlot();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
