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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *labelInfo;
    QLabel *labelMovie;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonStop;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonStart;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(400, 497);
        labelInfo = new QLabel(AboutDialog);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setGeometry(QRect(10, 10, 371, 91));
        labelMovie = new QLabel(AboutDialog);
        labelMovie->setObjectName(QString::fromUtf8("labelMovie"));
        labelMovie->setGeometry(QRect(20, 120, 361, 291));
        horizontalLayoutWidget = new QWidget(AboutDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 420, 251, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonStop = new QPushButton(horizontalLayoutWidget);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));

        horizontalLayout->addWidget(pushButtonStop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonStart = new QPushButton(horizontalLayoutWidget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));

        horizontalLayout->addWidget(pushButtonStart);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "Dialog", nullptr));
        labelInfo->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff007f;\">\347\211\210\346\235\203\346\211\200\346\234\211\302\2512019 </span></p><p><span style=\" font-size:14pt; font-weight:600; color:#ff007f;\">Snowflake All rights reserved.</span></p></body></html>", nullptr));
        labelMovie->setText(QString());
        pushButtonStop->setText(QApplication::translate("AboutDialog", "\345\201\234\346\255\242", nullptr));
        pushButtonStart->setText(QApplication::translate("AboutDialog", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
