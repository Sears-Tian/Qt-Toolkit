/********************************************************************************
** Form generated from reading UI file 'codedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEDIALOG_H
#define UI_CODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CodeDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *CodeDialog)
    {
        if (CodeDialog->objectName().isEmpty())
            CodeDialog->setObjectName(QString::fromUtf8("CodeDialog"));
        CodeDialog->resize(400, 300);
        gridLayout = new QGridLayout(CodeDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(CodeDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        retranslateUi(CodeDialog);

        QMetaObject::connectSlotsByName(CodeDialog);
    } // setupUi

    void retranslateUi(QDialog *CodeDialog)
    {
        CodeDialog->setWindowTitle(QApplication::translate("CodeDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodeDialog: public Ui_CodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEDIALOG_H
