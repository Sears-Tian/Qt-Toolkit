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

protected:
    // 上下文菜单事件重写
    void contextMenuEvent(QContextMenuEvent *event);

private slots:
    void on_pushButtonNew_clicked();

    void on_pushButtonSave_clicked();

    void ShotScreenSlot();
    void StartNotepadSlot();

private:
    Ui::MainWindow *ui;

    QTimer* m_timer;
    QPixmap m_pixmap;

};

#endif // MAINWINDOW_H
