/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelInfo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelOpen;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonSubmit;
    QPushButton *buttonCancel;
    QPushButton *buttonBrowse;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 183);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 0, 351, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelInfo = new QLabel(verticalLayoutWidget);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));

        horizontalLayout->addWidget(labelInfo, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelOpen = new QLabel(verticalLayoutWidget);
        labelOpen->setObjectName(QString::fromUtf8("labelOpen"));

        horizontalLayout_3->addWidget(labelOpen);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        buttonSubmit = new QPushButton(verticalLayoutWidget);
        buttonSubmit->setObjectName(QString::fromUtf8("buttonSubmit"));

        horizontalLayout_2->addWidget(buttonSubmit);

        buttonCancel = new QPushButton(verticalLayoutWidget);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));

        horizontalLayout_2->addWidget(buttonCancel);

        buttonBrowse = new QPushButton(verticalLayoutWidget);
        buttonBrowse->setObjectName(QString::fromUtf8("buttonBrowse"));

        horizontalLayout_2->addWidget(buttonBrowse);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "MyRun", nullptr));
        labelInfo->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">\350\257\267\345\234\250\344\270\213\351\235\242\345\221\275\344\273\244\350\241\214\344\270\255\350\276\223\345\205\245\345\221\275\344\273\244\357\274\232</span></p></body></html>", nullptr));
        labelOpen->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\357\274\232", nullptr));
        buttonSubmit->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        buttonCancel->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        buttonBrowse->setText(QApplication::translate("Widget", "\346\265\217\350\247\210...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
