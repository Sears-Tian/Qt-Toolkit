/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *labelInfo;
    QPushButton *pushButtonOK;
    QLabel *labelBack;
    QLabel *labelIPS;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(400, 300);
        AboutDialog->setMinimumSize(QSize(400, 300));
        AboutDialog->setMaximumSize(QSize(400, 300));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(10);
        AboutDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/ips.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        AboutDialog->setStyleSheet(QString::fromUtf8(""));
        AboutDialog->setSizeGripEnabled(false);
        AboutDialog->setModal(false);
        labelInfo = new QLabel(AboutDialog);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(10, 80, 381, 171));
        labelInfo->setFont(font);
        labelInfo->setStyleSheet(QString::fromUtf8(""));
        pushButtonOK = new QPushButton(AboutDialog);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setGeometry(QRect(290, 250, 75, 27));
        pushButtonOK->setFont(font);
        pushButtonOK->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        labelBack = new QLabel(AboutDialog);
        labelBack->setObjectName(QString::fromUtf8("labelBack"));
        labelBack->setGeometry(QRect(0, -180, 611, 481));
        labelBack->setStyleSheet(QString::fromUtf8("border-image: url(:/img/images/infomation.jpeg);"));
        labelIPS = new QLabel(AboutDialog);
        labelIPS->setObjectName(QString::fromUtf8("labelIPS"));
        labelIPS->setGeometry(QRect(0, 20, 151, 81));
        labelIPS->setStyleSheet(QString::fromUtf8("image: url(:/icon/images/ips.ico);"));
        labelBack->raise();
        labelInfo->raise();
        pushButtonOK->raise();
        labelIPS->raise();

        retranslateUi(AboutDialog);
        QObject::connect(pushButtonOK, SIGNAL(clicked()), AboutDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "\345\205\263\344\272\216\347\263\273\347\273\237", nullptr));
        labelInfo->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">\345\233\276\345\203\217\345\244\204\347\220\206\347\263\273\347\273\237 IPS = Image Processing System</span></p><p><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">\347\211\210\346\234\254 1.0.0.2</span></p><p><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">\347\211\210\346\235\203\346\211\200\346\234\211(C)2019 \347\216\213\345\213\207\350\200\201\345\270\210\345\256\236\351\252\214\345\256\244 All rights reserved.</span></p><p><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">By Sears Saint Tian</span></p></body></html>", nullptr));
        pushButtonOK->setText(QApplication::translate("AboutDialog", "\347\241\256\345\256\232", nullptr));
        labelBack->setText(QString());
        labelIPS->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
