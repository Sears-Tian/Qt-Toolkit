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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditFirst;
    QComboBox *comboBoxSymbol;
    QLineEdit *lineEditSecond;
    QLabel *labelEqual;
    QLineEdit *lineEditResult;
    QPushButton *pushButtonCalc;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 189);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 20, 361, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditFirst = new QLineEdit(horizontalLayoutWidget);
        lineEditFirst->setObjectName(QString::fromUtf8("lineEditFirst"));

        horizontalLayout->addWidget(lineEditFirst, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        comboBoxSymbol = new QComboBox(horizontalLayoutWidget);
        comboBoxSymbol->addItem(QString());
        comboBoxSymbol->addItem(QString());
        comboBoxSymbol->addItem(QString());
        comboBoxSymbol->addItem(QString());
        comboBoxSymbol->setObjectName(QString::fromUtf8("comboBoxSymbol"));

        horizontalLayout->addWidget(comboBoxSymbol);

        lineEditSecond = new QLineEdit(horizontalLayoutWidget);
        lineEditSecond->setObjectName(QString::fromUtf8("lineEditSecond"));

        horizontalLayout->addWidget(lineEditSecond);

        labelEqual = new QLabel(horizontalLayoutWidget);
        labelEqual->setObjectName(QString::fromUtf8("labelEqual"));

        horizontalLayout->addWidget(labelEqual);

        lineEditResult = new QLineEdit(horizontalLayoutWidget);
        lineEditResult->setObjectName(QString::fromUtf8("lineEditResult"));
        lineEditResult->setInputMethodHints(Qt::ImhDigitsOnly);
        lineEditResult->setReadOnly(true);

        horizontalLayout->addWidget(lineEditResult, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButtonCalc = new QPushButton(centralWidget);
        pushButtonCalc->setObjectName(QString::fromUtf8("pushButtonCalc"));
        pushButtonCalc->setGeometry(QRect(310, 100, 75, 23));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MyCalculator", nullptr));
        comboBoxSymbol->setItemText(0, QApplication::translate("MainWindow", "+", nullptr));
        comboBoxSymbol->setItemText(1, QApplication::translate("MainWindow", "-", nullptr));
        comboBoxSymbol->setItemText(2, QApplication::translate("MainWindow", "*", nullptr));
        comboBoxSymbol->setItemText(3, QApplication::translate("MainWindow", "/", nullptr));

        labelEqual->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButtonCalc->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
