/********************************************************************************
** Form generated from reading UI file 'camerasettingform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERASETTINGFORM_H
#define UI_CAMERASETTINGFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraSettingForm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelImageSize;
    QComboBox *comboBoxSize;
    QHBoxLayout *horizontalLayout;
    QLabel *labelHpos;
    QLineEdit *lineEditHpos;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelVpos;
    QLineEdit *lineEditVpos;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelWidth;
    QLineEdit *lineEditWidth;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelHeight;
    QLineEdit *lineEditHeight;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelFull;
    QLabel *labelSize;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxTrigger;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEditTrigger;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxChannel;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboBoxChannel;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxHSynchro;
    QCheckBox *checkBoxVSynchro;
    QCheckBox *checkBoxSemiClock;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButtonDefault;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSubmit;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *CameraSettingForm)
    {
        if (CameraSettingForm->objectName().isEmpty())
            CameraSettingForm->setObjectName(QString::fromUtf8("CameraSettingForm"));
        CameraSettingForm->setWindowModality(Qt::WindowModal);
        CameraSettingForm->setEnabled(true);
        CameraSettingForm->resize(460, 280);
        CameraSettingForm->setMinimumSize(QSize(460, 280));
        CameraSettingForm->setMaximumSize(QSize(460, 280));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(10);
        CameraSettingForm->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/ips.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CameraSettingForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(CameraSettingForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelImageSize = new QLabel(CameraSettingForm);
        labelImageSize->setObjectName(QString::fromUtf8("labelImageSize"));

        horizontalLayout_5->addWidget(labelImageSize);

        comboBoxSize = new QComboBox(CameraSettingForm);
        comboBoxSize->addItem(QString());
        comboBoxSize->addItem(QString());
        comboBoxSize->addItem(QString());
        comboBoxSize->addItem(QString());
        comboBoxSize->setObjectName(QString::fromUtf8("comboBoxSize"));

        horizontalLayout_5->addWidget(comboBoxSize);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelHpos = new QLabel(CameraSettingForm);
        labelHpos->setObjectName(QString::fromUtf8("labelHpos"));

        horizontalLayout->addWidget(labelHpos);

        lineEditHpos = new QLineEdit(CameraSettingForm);
        lineEditHpos->setObjectName(QString::fromUtf8("lineEditHpos"));

        horizontalLayout->addWidget(lineEditHpos);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelVpos = new QLabel(CameraSettingForm);
        labelVpos->setObjectName(QString::fromUtf8("labelVpos"));

        horizontalLayout_2->addWidget(labelVpos);

        lineEditVpos = new QLineEdit(CameraSettingForm);
        lineEditVpos->setObjectName(QString::fromUtf8("lineEditVpos"));

        horizontalLayout_2->addWidget(lineEditVpos);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelWidth = new QLabel(CameraSettingForm);
        labelWidth->setObjectName(QString::fromUtf8("labelWidth"));

        horizontalLayout_3->addWidget(labelWidth);

        lineEditWidth = new QLineEdit(CameraSettingForm);
        lineEditWidth->setObjectName(QString::fromUtf8("lineEditWidth"));

        horizontalLayout_3->addWidget(lineEditWidth);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelHeight = new QLabel(CameraSettingForm);
        labelHeight->setObjectName(QString::fromUtf8("labelHeight"));

        horizontalLayout_4->addWidget(labelHeight);

        lineEditHeight = new QLineEdit(CameraSettingForm);
        lineEditHeight->setObjectName(QString::fromUtf8("lineEditHeight"));

        horizontalLayout_4->addWidget(lineEditHeight);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelFull = new QLabel(CameraSettingForm);
        labelFull->setObjectName(QString::fromUtf8("labelFull"));

        horizontalLayout_6->addWidget(labelFull);

        labelSize = new QLabel(CameraSettingForm);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));

        horizontalLayout_6->addWidget(labelSize);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_9->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkBoxTrigger = new QCheckBox(CameraSettingForm);
        checkBoxTrigger->setObjectName(QString::fromUtf8("checkBoxTrigger"));

        verticalLayout_4->addWidget(checkBoxTrigger);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lineEditTrigger = new QLineEdit(CameraSettingForm);
        lineEditTrigger->setObjectName(QString::fromUtf8("lineEditTrigger"));
        lineEditTrigger->setEnabled(false);

        horizontalLayout_7->addWidget(lineEditTrigger);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBoxChannel = new QCheckBox(CameraSettingForm);
        checkBoxChannel->setObjectName(QString::fromUtf8("checkBoxChannel"));
        checkBoxChannel->setChecked(true);

        verticalLayout_3->addWidget(checkBoxChannel);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        comboBoxChannel = new QComboBox(CameraSettingForm);
        comboBoxChannel->addItem(QString());
        comboBoxChannel->setObjectName(QString::fromUtf8("comboBoxChannel"));

        horizontalLayout_8->addWidget(comboBoxChannel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(verticalLayout_3);

        checkBoxHSynchro = new QCheckBox(CameraSettingForm);
        checkBoxHSynchro->setObjectName(QString::fromUtf8("checkBoxHSynchro"));
        checkBoxHSynchro->setChecked(true);

        verticalLayout_5->addWidget(checkBoxHSynchro);

        checkBoxVSynchro = new QCheckBox(CameraSettingForm);
        checkBoxVSynchro->setObjectName(QString::fromUtf8("checkBoxVSynchro"));
        checkBoxVSynchro->setChecked(true);

        verticalLayout_5->addWidget(checkBoxVSynchro);

        checkBoxSemiClock = new QCheckBox(CameraSettingForm);
        checkBoxSemiClock->setObjectName(QString::fromUtf8("checkBoxSemiClock"));

        verticalLayout_5->addWidget(checkBoxSemiClock);


        horizontalLayout_9->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButtonDefault = new QPushButton(CameraSettingForm);
        pushButtonDefault->setObjectName(QString::fromUtf8("pushButtonDefault"));

        horizontalLayout_10->addWidget(pushButtonDefault);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        pushButtonSubmit = new QPushButton(CameraSettingForm);
        pushButtonSubmit->setObjectName(QString::fromUtf8("pushButtonSubmit"));

        horizontalLayout_10->addWidget(pushButtonSubmit);

        pushButtonCancel = new QPushButton(CameraSettingForm);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout_10->addWidget(pushButtonCancel);


        verticalLayout_6->addLayout(horizontalLayout_10);


        gridLayout->addLayout(verticalLayout_6, 0, 0, 1, 1);


        retranslateUi(CameraSettingForm);
        QObject::connect(checkBoxChannel, SIGNAL(toggled(bool)), comboBoxChannel, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxTrigger, SIGNAL(toggled(bool)), lineEditTrigger, SLOT(setEnabled(bool)));
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), CameraSettingForm, SLOT(close()));

        QMetaObject::connectSlotsByName(CameraSettingForm);
    } // setupUi

    void retranslateUi(QWidget *CameraSettingForm)
    {
        CameraSettingForm->setWindowTitle(QApplication::translate("CameraSettingForm", "\351\200\232\347\224\250\350\256\276\347\275\256", nullptr));
        labelImageSize->setText(QApplication::translate("CameraSettingForm", "\347\233\270\346\234\272\345\233\276\345\203\217\345\260\272\345\257\270\357\274\232", nullptr));
        comboBoxSize->setItemText(0, QApplication::translate("CameraSettingForm", "\345\205\250\345\260\272\345\257\270", nullptr));
        comboBoxSize->setItemText(1, QApplication::translate("CameraSettingForm", "1/2", nullptr));
        comboBoxSize->setItemText(2, QApplication::translate("CameraSettingForm", "1/4", nullptr));
        comboBoxSize->setItemText(3, QApplication::translate("CameraSettingForm", "1/8", nullptr));

        labelHpos->setText(QApplication::translate("CameraSettingForm", "\346\260\264\345\271\263\350\265\267\347\202\271\357\274\232", nullptr));
        lineEditHpos->setText(QApplication::translate("CameraSettingForm", "0", nullptr));
        labelVpos->setText(QApplication::translate("CameraSettingForm", "\345\236\202\347\233\264\350\265\267\347\202\271\357\274\232", nullptr));
        lineEditVpos->setText(QApplication::translate("CameraSettingForm", "0", nullptr));
        labelWidth->setText(QApplication::translate("CameraSettingForm", "\345\233\276\345\203\217\345\256\275\345\272\246\357\274\232", nullptr));
        lineEditWidth->setText(QApplication::translate("CameraSettingForm", "1920", nullptr));
        labelHeight->setText(QApplication::translate("CameraSettingForm", "\345\233\276\345\203\217\351\253\230\345\272\246\357\274\232", nullptr));
        lineEditHeight->setText(QApplication::translate("CameraSettingForm", "1080", nullptr));
        labelFull->setText(QApplication::translate("CameraSettingForm", "\345\205\250\345\260\272\345\257\270\357\274\232", nullptr));
        labelSize->setText(QString());
        checkBoxTrigger->setText(QApplication::translate("CameraSettingForm", "\350\247\246\345\217\221\346\250\241\345\274\217\357\274\214\350\266\205\346\227\266(\346\257\253\347\247\222)\357\274\232", nullptr));
        lineEditTrigger->setText(QApplication::translate("CameraSettingForm", "300", nullptr));
        checkBoxChannel->setText(QApplication::translate("CameraSettingForm", "\345\217\214\351\200\232\351\201\223\344\274\240\350\276\223", nullptr));
        comboBoxChannel->setItemText(0, QApplication::translate("CameraSettingForm", "8 Btis", nullptr));

        checkBoxHSynchro->setText(QApplication::translate("CameraSettingForm", "\346\260\264\345\271\263\345\220\214\346\255\245+", nullptr));
        checkBoxVSynchro->setText(QApplication::translate("CameraSettingForm", "\345\236\202\347\233\264\345\220\214\346\255\245+", nullptr));
        checkBoxSemiClock->setText(QApplication::translate("CameraSettingForm", "\345\215\212\346\227\266\351\222\237\345\220\214\346\255\245", nullptr));
        pushButtonDefault->setText(QApplication::translate("CameraSettingForm", "\344\275\277\347\224\250\351\273\230\350\256\244\345\200\274", nullptr));
        pushButtonSubmit->setText(QApplication::translate("CameraSettingForm", "\347\241\256\345\256\232", nullptr));
        pushButtonCancel->setText(QApplication::translate("CameraSettingForm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraSettingForm: public Ui_CameraSettingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERASETTINGFORM_H
