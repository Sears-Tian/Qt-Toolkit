/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelSize;
    QLineEdit *lineEditSize;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelCreate;
    QLineEdit *lineEditCreate;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelLast;
    QLineEdit *lineEditLast;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelDir;
    QLineEdit *lineEditDir;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonOpen;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelName = new QLabel(centralWidget);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        horizontalLayout->addWidget(labelName);

        lineEditName = new QLineEdit(centralWidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout->addWidget(lineEditName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelSize = new QLabel(centralWidget);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        horizontalLayout_2->addWidget(labelSize);

        lineEditSize = new QLineEdit(centralWidget);
        lineEditSize->setObjectName(QString::fromUtf8("lineEditSize"));

        horizontalLayout_2->addWidget(lineEditSize);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelCreate = new QLabel(centralWidget);
        labelCreate->setObjectName(QString::fromUtf8("labelCreate"));

        horizontalLayout_3->addWidget(labelCreate);

        lineEditCreate = new QLineEdit(centralWidget);
        lineEditCreate->setObjectName(QString::fromUtf8("lineEditCreate"));

        horizontalLayout_3->addWidget(lineEditCreate);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelLast = new QLabel(centralWidget);
        labelLast->setObjectName(QString::fromUtf8("labelLast"));

        horizontalLayout_4->addWidget(labelLast);

        lineEditLast = new QLineEdit(centralWidget);
        lineEditLast->setObjectName(QString::fromUtf8("lineEditLast"));

        horizontalLayout_4->addWidget(lineEditLast);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelDir = new QLabel(centralWidget);
        labelDir->setObjectName(QString::fromUtf8("labelDir"));

        horizontalLayout_5->addWidget(labelDir);

        lineEditDir = new QLineEdit(centralWidget);
        lineEditDir->setObjectName(QString::fromUtf8("lineEditDir"));

        horizontalLayout_5->addWidget(lineEditDir);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pushButtonOpen = new QPushButton(centralWidget);
        pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));

        horizontalLayout_6->addWidget(pushButtonOpen);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(centralWidget);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));

        horizontalLayout_6->addWidget(pushButtonClose);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonClose, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        labelName->setText(QApplication::translate("MainWindow", "\346\226\207 \344\273\266 \345\220\215\357\274\232", nullptr));
        labelSize->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", nullptr));
        labelCreate->setText(QApplication::translate("MainWindow", "\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", nullptr));
        labelLast->setText(QApplication::translate("MainWindow", "\346\234\200\345\220\216\346\227\266\351\227\264\357\274\232", nullptr));
        labelDir->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\347\233\256\345\275\225\357\274\232", nullptr));
        pushButtonOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200...", nullptr));
        pushButtonClose->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
