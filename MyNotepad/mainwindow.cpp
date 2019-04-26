#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutdialog.h"

#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
#include <QPrinter>
#include <QPageSetupDialog>
#include <QTextCursor>
#include <QDateTime>
#include <QFont>
#include <QColor>
#include <QFontDialog>
#include <QColorDialog>
#include <QCloseEvent>
#include <QUrl>
#include <QDesktopServices>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Untitle - MyNotepad");

    // 文件，自定义槽
    QObject::connect(ui->actionNew, SIGNAL(triggered()), this, SLOT(NewFileSlot()));
    QObject::connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(OpenFileSlot()));
    QObject::connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(SaveFileSlot()));
    QObject::connect(ui->actionSaveAs, SIGNAL(triggered()), this, SLOT(SaveAsFileSlot()));
    QObject::connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
//    QObject::connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(ExitAppSlot()));
    QObject::connect(ui->actionPageSetup, SIGNAL(triggered()), this, SLOT(PageSetupSlot()));

    // 编辑，系统槽
    QObject::connect(ui->actionUndo, SIGNAL(triggered()), ui->textEdit, SLOT(undo()));
    QObject::connect(ui->actionRedo, SIGNAL(triggered()), ui->textEdit, SLOT(redo()));
    QObject::connect(ui->actionCut, SIGNAL(triggered()), ui->textEdit, SLOT(cut()));
    QObject::connect(ui->actionCopy, SIGNAL(triggered()), ui->textEdit, SLOT(copy()));
    QObject::connect(ui->actionPaste, SIGNAL(triggered()), ui->textEdit, SLOT(paste()));
    QObject::connect(ui->actionDel, SIGNAL(triggered()), this, SLOT(DelTextSlot()));
    QObject::connect(ui->actionSelectAll, SIGNAL(triggered()), ui->textEdit, SLOT(selectAll()));
    QObject::connect(ui->actionDateTime, SIGNAL(triggered()), this, SLOT(DateTimeSlot()));

    // 格式，自定义
    QObject::connect(ui->actionSetFont, SIGNAL(triggered()), this, SLOT(SetFontSlot()));
    QObject::connect(ui->actionSetColor, SIGNAL(triggered()), this, SLOT(SetColorSlot()));

    // 帮助
    QObject::connect(ui->actionAboutSoftware, SIGNAL(triggered()), this, SLOT(AboutSoftwareSlot()));
    QObject::connect(ui->actionAboutWeb, SIGNAL(triggered()), this, SLOT(AboutWebSlot()));
    QObject::connect(ui->actionAboutQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

// 关闭事件处理
void MainWindow::closeEvent(QCloseEvent *event)
{
    if (ui->textEdit->document()->isModified())
    {
        const QMessageBox::StandardButton ret
            = QMessageBox::warning(this, tr("Application"),
                                   tr("The document has been modified.\n"
                                      "Do you want to save your changes?"),
                                   QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        switch (ret)
        {
        case QMessageBox::Save:
            this->SaveFileSlot();
            break;
        case QMessageBox::Discard:
            event->accept();        //退出
            break;
        case QMessageBox::Cancel:
            event->ignore();        //不退出
            break;
        default:
            break;
        }
    }
}

void MainWindow::NewFileSlot()
{
    if(!this->CheckModify())
        return;

    this->ClearFile();
}

void MainWindow::OpenFileSlot()
{
    if(!this->CheckModify())
        return;

    // 文件对话框
    m_fileName = QFileDialog::getOpenFileName(this, "Open File", QDir::currentPath());

    // 文件
    QFile* file = new QFile;
    file->setFileName(m_fileName);
    bool ok = file->open(QIODevice::ReadOnly);
    if(ok)
    {
       QTextStream text(file);
       ui->textEdit->setText(text.readAll());
    }
//    else
//    {
//        QMessageBox::warning(this, "Open File", "Open file is error: " + file->errorString());
//    }

    this->setWindowTitle(m_fileName + " - Mynotepad");

    // 文件关闭与删除，QGUI对象存在垃圾回收机制会自动释放
    file->close();
    delete file;
}

void MainWindow::SaveFileSlot()
{
   if(this->m_fileName.isEmpty())
   {
       this->SaveAsFileSlot();
       return;
   }

   this->WriteFile();
}

void MainWindow::SaveAsFileSlot()
{
    m_fileName = QFileDialog::getSaveFileName(this, "Save As File", QDir::currentPath());

    this->WriteFile();
    this->setWindowTitle(m_fileName + " - Mynotepad");
}

void MainWindow::ExitAppSlot()
{
//    if(this->CheckModify())
//        this->close();

    this->close();

}

void MainWindow::PageSetupSlot()
{
    QPrinter printer;
    QPageSetupDialog psdDlg(&printer, this);
    if(psdDlg.exec() != QDialog::Accepted)
        return;
}

void MainWindow::DelTextSlot()
{
    //取得文本编辑框中的光标.
    QTextCursor* textCursor = new QTextCursor(ui->textEdit->textCursor());
     //调用成员方法删除被选中文本.
    textCursor->removeSelectedText();
}

void MainWindow::ClearFile()
{
    m_fileName.clear();

    ui->textEdit->document()->clear();
    ui->textEdit->document()->setModified(false);

    this->setWindowTitle("Untitle - MyNotepad");
}

bool MainWindow::WriteFile()
{
    QFile* file = new QFile;
    file->setFileName(m_fileName);
    bool ok = file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream text(file);
        text << ui->textEdit->toPlainText();
    }
//    else
//    {
//        QMessageBox::warning(this, "Save File", "Save file failed!");
//    }

    file->close();
    delete file;

    ui->textEdit->document()->setModified();

    return true;
}

bool MainWindow::CheckModify()
{
    if(ui->textEdit->document()->isModified())
    {
        int result = QMessageBox::information(this, "Save File", "Save File ?",
                                 QMessageBox::Ok, QMessageBox::Discard, QMessageBox::Cancel);
        switch (result)
        {
        case QMessageBox::Ok:
            this->SaveFileSlot();
            break;
        case QMessageBox::Discard:
            break;
        case QMessageBox::Cancel:
            return false;
        default:
            break;
        }
    }
    return true;
}

void MainWindow::DateTimeSlot()
{
    QDateTime datetime = QDateTime::currentDateTime();
    ui->textEdit->append( datetime.toString("yyyy-MM-dd hh:mm:ss"));
}

void MainWindow::SetFontSlot()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if(ok)
    {
        ui->textEdit->setFont(font);
    }
}

void MainWindow::SetColorSlot()
{
    QColor color = QColorDialog::getColor(Qt::red, this);
    if(color.isValid())
    {
        ui->textEdit->setTextColor(color);
    }
}

void MainWindow::AboutSoftwareSlot()
{
    //在函数内部要定义成指针，不然函数结束之后会被析构释放掉
    AboutDialog* aboutDlg = new AboutDialog;
    aboutDlg->exec();            //模态对话框
 //   aboutDlg->show();            //非模态对话框
}

void MainWindow::AboutWebSlot()
{
    // 链接到网址
    QDesktopServices::openUrl(QUrl("https://user.qzone.qq.com/1344082191/infocenter"));
}


