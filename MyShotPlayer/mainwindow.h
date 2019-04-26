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

private slots:
    void FetchPictureSlot();

private:
    Ui::MainWindow *ui;

    QTimer* m_timer;
    QPixmap m_pixmap;
};

#endif // MAINWINDOW_H
