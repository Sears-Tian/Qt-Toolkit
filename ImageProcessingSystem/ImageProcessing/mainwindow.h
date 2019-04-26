#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class CameraSettingForm;
class CameraParamForm;
class QListWidgetItem;
//class ShowImageForm;

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
    // 文件
    void FileOpenSlot();
    void FileSaveSlot();
    void FileSaveAsSlot();
    // 相机
    void CameraCommonSettingSlot();
    void CameraParamSetingSlot();
    //图像
    void ImageGraySlot();
    // 帮助
    void HelpLookSlot();
    void HelpAboutSystemSlot();


//    // 双击预览窗格缩略图可查看
//    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    // 单击预览窗格缩略图可查看
    void on_listWidget_itemClicked(QListWidgetItem *item);
    // 打开图像...
    void on_pushButtonOpenImage_clicked();

private:
    Ui::MainWindow *ui;

    CameraSettingForm* m_settingForm;
    CameraParamForm* m_paramForm;
//    ShowImageForm* m_imageForm;
};

#endif // MAINWINDOW_H
