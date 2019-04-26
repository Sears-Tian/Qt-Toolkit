#-------------------------------------------------
#
# Project created by QtCreator 2019-04-15T21:42:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# 添加改行代码以使用 QPageSetupDialog 和 QPrinter,
# Qt 5中将所有打印的相关类都放到了Qt Print Support模块造成的
QT += printsupport

# 播放音乐 QSound
QT += multimedia

TARGET = MyNotepad
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    aboutdialog.cpp

HEADERS += \
        mainwindow.h \
    aboutdialog.h

FORMS += \
        mainwindow.ui \
    aboutdialog.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    mynotepad.rc

RC_FILE += mynotepad.rc