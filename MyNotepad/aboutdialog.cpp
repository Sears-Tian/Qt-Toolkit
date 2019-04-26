#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include <QMovie>

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    // 小动画
    //默认路径在Build/目录下！
    m_movie = new QMovie("images/butterfly.gif");
    ui->labelMovie->setMovie(m_movie);
    m_movie->start();

    // 信号槽 连接
    QObject::connect(ui->pushButtonStop, SIGNAL(clicked()), this, SLOT(StopSlot()));
    QObject::connect(ui->pushButtonStart, SIGNAL(clicked()), this, SLOT(StartSlot()));
}

AboutDialog::~AboutDialog()
{
    delete ui;

    delete m_movie;
}

void AboutDialog::StopSlot()
{
    this->m_movie->stop();
}

void AboutDialog::StartSlot()
{
    this->m_movie->start();
}
