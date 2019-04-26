#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutdialog.h"
#include "camerasettingform.h"
#include "cameraparamform.h"
#include "showimageform.h"

#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>
#include <QCloseEvent>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QIcon>
#include <QListWidgetItem>
#include <QVector>
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 初始化参数
    m_settingForm = nullptr;
    m_paramForm = nullptr;
//    m_imageForm = nullptr;

//    // 显示相机捕获
//    //QGraphicsProxyWidget* addWidget(QWidget *widget, Qt::WindowFlags wFlags = ...);
//    QGraphicsScene* scene = new QGraphicsScene;
//    scene->addText(tr("Hello, world!"));
//    ui->graphicsView->setScene(scene);
//    ui->graphicsView->show();

    // 显示预览窗格
//    ui->listWidget->setViewMode(QListWidget::IconMode);
//    ui->listWidget->setIconSize(QSize(200,200));
//    ui->listWidget->setResizeMode(QListWidget::Adjust);
//    ui->listWidget->addItem(new QListWidgetItem(QIcon("../earth.jpg"),"Earth"));
//    ui->listWidget->addItem(new QListWidgetItem(QIcon("../tornado.jpg"),"Tornado"));
//    ui->listWidget->addItem(new QListWidgetItem(QIcon("../ics.jpg"),"Wallpaper"));

    //    for(int i = 0; i < 100; i++)
    //       ui->listWidget->addItem(new QListWidgetItem(QIcon("images\\back.jpg"),"back.jpg"));

    QVector<QIcon> vecIcons;
    vecIcons.push_back(QIcon("images\\back.jpg"));
    vecIcons.push_back(QIcon("images\\back2.jpg"));
    vecIcons.push_back(QIcon("images\\back3.jpg"));
    vecIcons.push_back(QIcon("images\\back4.jpg"));
    vecIcons.push_back(QIcon("images\\back5.jpg"));
    for(int num = 1; num <= 20; num++)
    {
        ui->listWidget->addItem(new QListWidgetItem(vecIcons[0],"back.jpg"));
        ui->listWidget->addItem(new QListWidgetItem(vecIcons[1],"back2.jpg"));
        ui->listWidget->addItem(new QListWidgetItem(vecIcons[2],"back3.jpg"));
        ui->listWidget->addItem(new QListWidgetItem(vecIcons[3],"back4.jpg"));
        ui->listWidget->addItem(new QListWidgetItem(vecIcons[4],"back5.jpg"));
    }



    // 信号槽连接
    // 文件
    QObject::connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(FileOpenSlot()));
    QObject::connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(FileSaveSlot()));
    QObject::connect(ui->actionSaveAs, SIGNAL(triggered()), this, SLOT(FileSaveAsSlot()));
    QObject::connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
    // 相机
    QObject::connect(ui->actionCommonSetting, SIGNAL(triggered()), this, SLOT(CameraCommonSettingSlot()));
    QObject::connect(ui->actionCameraParam, SIGNAL(triggered()), this, SLOT(CameraParamSetingSlot()));
    // 图像
    QObject::connect(ui->actionGray, SIGNAL(triggered()), this, SLOT(ImageGraySlot()));
    // 工具

    // 帮助
    QObject::connect(ui->actionLookHelp, SIGNAL(triggered()), this, SLOT(HelpLookSlot()));
    QObject::connect(ui->actionAboutQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    QObject::connect(ui->actionAboutSystem, SIGNAL(triggered()), this, SLOT(HelpAboutSystemSlot()));

}

MainWindow::~MainWindow()
{
    delete ui;

    delete m_settingForm;
    delete m_paramForm;
//    delete m_imageForm;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    event->accept();
}

void MainWindow::FileOpenSlot()
{
   QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                 QStandardPaths::writableLocation(QStandardPaths::PicturesLocation));

}

void MainWindow::FileSaveSlot()
{

}

void MainWindow::FileSaveAsSlot()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save As File"),
                                  QStandardPaths::writableLocation(QStandardPaths::PicturesLocation));

}

void MainWindow::CameraCommonSettingSlot()
{
    // 在堆上创建非模态对话框，构造为空，析构释放
    if(!m_settingForm)
        m_settingForm = new CameraSettingForm;
    m_settingForm->show();

}

void MainWindow::CameraParamSetingSlot()
{
    if(!m_paramForm)
        m_paramForm = new CameraParamForm;
    m_paramForm->show();
}

void MainWindow::ImageGraySlot()
{

}

void MainWindow::HelpLookSlot()
{
    QDesktopServices::openUrl(QUrl("http://markwy.com/"));
}

void MainWindow::HelpAboutSystemSlot()
{
    AboutDialog* aboutDlg = new AboutDialog;
    aboutDlg->exec();                           //模态对话框
}

//void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
//{
////    // 堆上单例模式
////    if(!m_imageForm)
////        m_imageForm = new ShowImageForm;
//////    QIcon icon = item->icon();
////    QPixmap pixmap = item->icon().pixmap(640, 480);
////    m_imageForm->SetImage(&pixmap);
////    m_imageForm->setWindowTitle(item->text());
////    m_imageForm->show();
//}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    // 多例模式
    ShowImageForm* imageForm = new ShowImageForm;
    QPixmap pixmap2 = item->icon().pixmap(640, 480);
    imageForm->SetImage(&pixmap2);
    imageForm->setWindowTitle(item->text());
    imageForm->show();
}

void MainWindow::on_pushButtonOpenImage_clicked()
{
    this->FileOpenSlot();
}
