#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWebEngineView>
#include <QUrl>
#include <QProgressBar>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void InitMainPage();

private slots:
    void BrowseWebSlot();
    void SetUrlSlot(const QUrl& url);
    void SetTitleSlot(QString title);
//    void LoadProgressSlot(int progress);
    void LoadFinishedSlot(bool ok);

    // 设置主页
    void SetHomePageSlot();
    // 查看源代码
    void SourceCodeSlot();

    void on_pushButtonBackward_clicked();

    void on_pushButtonForward_clicked();

    void on_pushButtonRefresh_clicked();


private:
    Ui::MainWindow *ui;

    QWebEngineView* m_view;     //网页视图
    QProgressBar* m_progress;   //进度条
};

#endif // MAINWINDOW_H
