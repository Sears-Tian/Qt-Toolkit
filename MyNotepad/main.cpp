#include "mainwindow.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include <QTextCodec>
#include <QSound>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // 字符编码
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("gb2312"));

    // 程序启动动画
    // 程序默认文件路径在Build... 目录下
    QPixmap pixmap("images/start.jpg");
    QSplashScreen splash(pixmap);
    splash.show();
//      app.processEvents();
    MainWindow window;
    window.show();
    splash.finish(&window);

    // 播放音乐，似乎只能是wave格式的！
    QSound* bgm = new QSound("images/bgm.wav");
    bgm->play();

    return app.exec();
}
