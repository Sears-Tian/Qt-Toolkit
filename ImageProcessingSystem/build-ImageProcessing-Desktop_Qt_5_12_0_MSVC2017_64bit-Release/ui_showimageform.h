/********************************************************************************
** Form generated from reading UI file 'showimageform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWIMAGEFORM_H
#define UI_SHOWIMAGEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowImageForm
{
public:
    QGridLayout *gridLayout;
    QLabel *labelImage;

    void setupUi(QWidget *ShowImageForm)
    {
        if (ShowImageForm->objectName().isEmpty())
            ShowImageForm->setObjectName(QString::fromUtf8("ShowImageForm"));
        ShowImageForm->resize(400, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(10);
        ShowImageForm->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/ips.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ShowImageForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(ShowImageForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelImage = new QLabel(ShowImageForm);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setFont(font);

        gridLayout->addWidget(labelImage, 0, 0, 1, 1);


        retranslateUi(ShowImageForm);

        QMetaObject::connectSlotsByName(ShowImageForm);
    } // setupUi

    void retranslateUi(QWidget *ShowImageForm)
    {
        ShowImageForm->setWindowTitle(QApplication::translate("ShowImageForm", "\346\230\276\347\244\272\345\233\276\345\203\217", nullptr));
        labelImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ShowImageForm: public Ui_ShowImageForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWIMAGEFORM_H
