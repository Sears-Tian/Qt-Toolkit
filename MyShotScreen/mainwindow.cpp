#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include <QTimer>
#include <QDesktopWidget>
#include <QDesktopServices>
#include <QFileDialog>
#include <QClipboard>
#include <QContextMenuEvent>
#include <QMenu>
#include <QAction>
#include <QCursor>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    event = nullptr;
    // 定义菜单和动作
    QMenu* menu = new QMenu(this);
    QAction* actionSave = new QAction(this);
    QAction* actionProcess = new QAction(this);
    // 设置菜单项文本
    actionSave->setText("Save As");
    actionProcess->setText("Start Notepad");
    // 添加项
    menu->addAction(actionSave);
    menu->addAction(actionProcess);
    // 信号槽连接
    QObject::connect(actionSave, SIGNAL(triggered()), this, SLOT(on_pushButtonSave_clicked()));
    QObject::connect(actionProcess, SIGNAL(triggered()), this, SLOT(StartNotepadSlot()));
    // 菜单运行显示，判断鼠标光标在控件在，转换为相对坐标
    if(ui->labelScreen->geometry().contains(this->mapFromGlobal(QCursor::pos())))
        menu->exec(QCursor::pos());

}

void MainWindow::on_pushButtonNew_clicked()
{
    if(ui->checkBoxHide->isChecked())
    {
//        this->hide();                                       //隐藏窗口
        m_timer = new QTimer;
        QObject::connect(this->m_timer, SIGNAL(timeout()), this, SLOT(ShotScreenSlot()));
//        m_timer->start(ui->spinBoxTime->value() * 1000);    //启动定时器
        m_timer->start(1000 / 25);     //屏幕实时显示
    }
    else
    {
        qApp->beep();
    }
}

void MainWindow::on_pushButtonSave_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save ShotSvreen",
        QStandardPaths::writableLocation(QStandardPaths::PicturesLocation));
    m_pixmap.save(fileName);
}

// 抓屏
void MainWindow::ShotScreenSlot()
{
    m_pixmap = QPixmap::grabWindow(QApplication::desktop()->winId());
    ui->labelScreen->setPixmap(m_pixmap.scaled(ui->labelScreen->size()));
//    this->show();                                           //显示窗口
//    m_timer->stop();                                        //停止定时器

    // 进程间通信：剪贴板
    QClipboard* clipboard = QApplication::clipboard();
    clipboard->setPixmap(m_pixmap);
}

void MainWindow::StartNotepadSlot()
{
    QProcess* process = new QProcess;
    process->start("notepad.exe");
}
