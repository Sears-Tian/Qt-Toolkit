#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "codedialog.h"
//#include <QAxWidget>
#include <QStackedLayout>
#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include <QMessageBox>
//#include <QWebEngineCallback>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QWebEngineView *view = new QWebEngineView(parent);
//    view->load(QUrl("http://www.baidu.com"));
//    view->show();

    // 初始化视图
    m_view = new QWebEngineView(this);
//    m_view->load(QUrl("http://www.baidu.com"));
    this->InitMainPage();
    m_view->show();
    QStackedLayout* layout = new QStackedLayout(ui->frame);
    layout->addWidget(m_view);
    ui->frame->setLayout(layout);

    //实例化进度条，添加在状态栏
    m_progress = new QProgressBar;
    ui->statusBar->addWidget(m_progress);


    //连接信号槽
    QObject::connect(ui->lineEditAddress, SIGNAL(returnPressed()), this, SLOT(BrowseWebSlot()));
    QObject::connect(m_view, SIGNAL(urlChanged(const QUrl&)),this, SLOT(SetUrlSlot(const QUrl&)));
    QObject::connect(m_view, SIGNAL(titleChanged(QString)),this, SLOT(SetTitleSlot(QString)));
    QObject::connect(m_view, SIGNAL(loadProgress(int)),m_progress, SLOT(setValue(int)));
    QObject::connect(m_view, SIGNAL(loadFinished(bool)),this, SLOT(LoadFinishedSlot(bool)));

    QObject::connect(ui->actionSetHomePage, SIGNAL(triggered()),this, SLOT(SetHomePageSlot()));
    QObject::connect(ui->actionSourceCode, SIGNAL(triggered()),this, SLOT(SourceCodeSlot()));

}

MainWindow::~MainWindow()
{
    delete ui;

    delete m_view;
}

void MainWindow::InitMainPage()
{
    // 读取注册表
    // 路径=计算机\HKEY_CURRENT_USER\Software\Snowflake\MyBrowser
    QCoreApplication::setOrganizationName(QString("Snowflake"));
    QCoreApplication::setApplicationName(QString("MyBrowser"));

    QSettings settings(QSettings::NativeFormat, QSettings::UserScope,
                       QCoreApplication::organizationName(),
                       QCoreApplication::applicationName());

    QString strMain = settings.value("mainpage").toString();
//    int version = settings.value("Version").toInt();
    m_view->load(QUrl(strMain));

//    // 读取文件
//    QString fileName = "mainpage.ini";
//    QFile* file = new QFile;
//    file->setFileName(fileName);
//    bool ok = file->open(QIODevice::ReadOnly);
//    if(ok)
//    {
//        QTextStream in(file);
//        m_view->load(QUrl(in.readLine().split("=").at(1)));
//        file->close();
//        delete file;
//        file = nullptr;
//    }
//    else
//    {
//        QMessageBox::information(this, "Error", "Initialize main page error : " + file->errorString());
//    }

}

void MainWindow::BrowseWebSlot()
{
//    // QAxWidget 显示网页
//    ui->axWidget->setControl(QString::fromUtf8("{8856F961-340A-11D0-A96B-00C04FD705A2}"));//注册组件ID
//    ui->axWidget->setProperty("DisplayAlerts",false);                   //不显示警告信息
//    ui->axWidget->setProperty("DisplayScrollBars",true);                //显示滚动条
//    QString webstr = ui->lineEditAddress->text();                       //设置要打开的网页
//    ui->axWidget->dynamicCall("Navigate(const QString&)",webstr);       //显示网页

    m_view->load(QUrl(ui->lineEditAddress->text()));
}

void MainWindow::SetUrlSlot(const QUrl& url)
{
    ui->lineEditAddress->setText(url.toString());
}

void MainWindow::SetTitleSlot(QString title)
{
    this->setWindowTitle(title);
}

//void MainWindow::LoadProgressSlot(int progress)
//{
//    m_progress->setValue(progress);
//}

void MainWindow::LoadFinishedSlot(bool ok)
{
    if(ok)
    {
        delete m_progress;
        m_progress = nullptr;
        ui->statusBar->showMessage("Load Finished.", 5 * 1000);
    }
    else
    {
         ui->statusBar->showMessage("Load failed!", 5 * 1000);
    }

}


void MainWindow::SetHomePageSlot()
{
    // 写入注册表
    QCoreApplication::setOrganizationName(QString("Snowflake"));
    QCoreApplication::setApplicationName(QString("MyBrowser"));

    QSettings settings(QSettings::NativeFormat, QSettings::UserScope,
                       QCoreApplication::organizationName(),
                       QCoreApplication::applicationName());

    settings.setValue("mainpage", ui->lineEditAddress->text());
    settings.setValue("Version", 5);
    this->statusBar()->showMessage("Set home page succeed.", 3 * 1000);

//    // 写入文件
//    QString fileName = "mainpage.ini";
//    QFile* file = new QFile;
//    file->setFileName(fileName);
//    bool ok = file->open(QIODevice::WriteOnly);
//    if(ok)
//    {
//        QTextStream out(file);
//        out << "mainpage=" + ui->lineEditAddress->text();
//        file->close();
//        delete file;
//        file = nullptr;
//        QMessageBox::information(this, "Finish", "Set home page succeed.");
//    }
//    else
//    {
//        QMessageBox::information(this, "Error", "Set home page error : " + file->errorString());
//    }
}

void MainWindow::SourceCodeSlot()
{
//    void toHtml(const QWebEngineCallback<const QString &> &resultCallback) const;
    m_view->page()->toHtml([](const QString& text)
    {
        CodeDialog* codeDlg = new CodeDialog;
        codeDlg->SetSourceCode(text);
        codeDlg->show();
    });

}

void MainWindow::on_pushButtonBackward_clicked()
{
    m_view->back();
}

void MainWindow::on_pushButtonForward_clicked()
{
    m_view->forward();
}

void MainWindow::on_pushButtonRefresh_clicked()
{
    m_view->reload();
}
