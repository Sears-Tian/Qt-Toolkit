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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSetHomePage;
    QAction *actionSourceCode;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAddress;
    QLineEdit *lineEditAddress;
    QPushButton *pushButtonBackward;
    QPushButton *pushButtonForward;
    QPushButton *pushButtonRefresh;
    QFrame *frame;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(577, 434);
        actionSetHomePage = new QAction(MainWindow);
        actionSetHomePage->setObjectName(QString::fromUtf8("actionSetHomePage"));
        actionSourceCode = new QAction(MainWindow);
        actionSourceCode->setObjectName(QString::fromUtf8("actionSourceCode"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelAddress = new QLabel(centralWidget);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));

        horizontalLayout->addWidget(labelAddress);

        lineEditAddress = new QLineEdit(centralWidget);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        horizontalLayout->addWidget(lineEditAddress);

        pushButtonBackward = new QPushButton(centralWidget);
        pushButtonBackward->setObjectName(QString::fromUtf8("pushButtonBackward"));

        horizontalLayout->addWidget(pushButtonBackward);

        pushButtonForward = new QPushButton(centralWidget);
        pushButtonForward->setObjectName(QString::fromUtf8("pushButtonForward"));

        horizontalLayout->addWidget(pushButtonForward);

        pushButtonRefresh = new QPushButton(centralWidget);
        pushButtonRefresh->setObjectName(QString::fromUtf8("pushButtonRefresh"));

        horizontalLayout->addWidget(pushButtonRefresh);


        verticalLayout->addLayout(horizontalLayout);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 577, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionSetHomePage);
        menu->addAction(actionSourceCode);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSetHomePage->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\344\270\273\351\241\265(&H)", nullptr));
        actionSourceCode->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\346\272\220\344\273\243\347\240\201(&C)\n"
"...", nullptr));
        labelAddress->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\345\234\260\345\235\200\357\274\232", nullptr));
        pushButtonBackward->setText(QApplication::translate("MainWindow", "<< \345\220\216\351\200\200", nullptr));
        pushButtonForward->setText(QApplication::translate("MainWindow", "\345\211\215\350\277\233 >>", nullptr));
        pushButtonRefresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256(&S)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
