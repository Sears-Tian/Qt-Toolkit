#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    // 支持中文
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));


    return a.exec();
}
