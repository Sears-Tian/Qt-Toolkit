#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QListWidgetItem;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonAdd_clicked();

    void on_pushButtonDel_clicked();

    void on_pushButtonClear_clicked();

    // 显示目录
    void ShowDirSlot();

//    void on_listWidget_itemClicked(QListWidgetItem *item);
//    // 系统生成的，自动connect
//    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    // 自定义的，需要手动connect
    void DoubleClickedItemSlot(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
