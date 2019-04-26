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
    // 重写关闭事件
    void closeEvent(QCloseEvent *event);

private slots:
    void NewFileSlot();
    void OpenFileSlot();
    void SaveFileSlot();
    void SaveAsFileSlot();
    void ExitAppSlot();
    void PageSetupSlot();

    void DelTextSlot();     //删除被选中的文本

    // 清空内容
    void ClearFile();
    // 写入文件
    bool WriteFile();
    // 检查标志
    bool CheckModify();

    void DateTimeSlot();
    void SetFontSlot();
    void SetColorSlot();

    void AboutSoftwareSlot();
    void AboutWebSlot();

private:
    QString m_fileName;     //文件名

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
