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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *labelId;
    QLabel *labelName;
    QLabel *labelAddress;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditId;
    QLineEdit *lineEditName;
    QLineEdit *lineEditAddress;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonDelete;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonModify;
    QPushButton *pushButtonShow;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 441);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        treeWidget = new QTreeWidget(centralWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout_3->addWidget(treeWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelId = new QLabel(centralWidget);
        labelId->setObjectName(QString::fromUtf8("labelId"));

        verticalLayout->addWidget(labelId);

        labelName = new QLabel(centralWidget);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        verticalLayout->addWidget(labelName);

        labelAddress = new QLabel(centralWidget);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));

        verticalLayout->addWidget(labelAddress);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditId = new QLineEdit(centralWidget);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));

        verticalLayout_2->addWidget(lineEditId);

        lineEditName = new QLineEdit(centralWidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        verticalLayout_2->addWidget(lineEditName);

        lineEditAddress = new QLineEdit(centralWidget);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));

        verticalLayout_2->addWidget(lineEditAddress);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButtonAdd = new QPushButton(centralWidget);
        pushButtonAdd->setObjectName(QString::fromUtf8("pushButtonAdd"));

        horizontalLayout_4->addWidget(pushButtonAdd);

        pushButtonDelete = new QPushButton(centralWidget);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));

        horizontalLayout_4->addWidget(pushButtonDelete);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonModify = new QPushButton(centralWidget);
        pushButtonModify->setObjectName(QString::fromUtf8("pushButtonModify"));

        horizontalLayout_2->addWidget(pushButtonModify);

        pushButtonShow = new QPushButton(centralWidget);
        pushButtonShow->setObjectName(QString::fromUtf8("pushButtonShow"));

        horizontalLayout_2->addWidget(pushButtonShow);


        verticalLayout_4->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

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

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "address", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "Name", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "id", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(2, QApplication::translate("MainWindow", "Shanghai", nullptr));
        ___qtreewidgetitem1->setText(1, QApplication::translate("MainWindow", "Tian", nullptr));
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "777", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        labelId->setText(QApplication::translate("MainWindow", "id:", nullptr));
        labelName->setText(QApplication::translate("MainWindow", "name:", nullptr));
        labelAddress->setText(QApplication::translate("MainWindow", "address:", nullptr));
        pushButtonAdd->setText(QApplication::translate("MainWindow", "Add", nullptr));
        pushButtonDelete->setText(QApplication::translate("MainWindow", "Remove", nullptr));
        pushButtonModify->setText(QApplication::translate("MainWindow", "Modify", nullptr));
        pushButtonShow->setText(QApplication::translate("MainWindow", "Show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
