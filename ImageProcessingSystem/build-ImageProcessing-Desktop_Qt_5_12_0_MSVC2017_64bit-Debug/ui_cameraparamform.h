/********************************************************************************
** Form generated from reading UI file 'cameraparamform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAPARAMFORM_H
#define UI_CAMERAPARAMFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraParamForm
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxWhiteBalance;
    QGridLayout *gridLayout;
    QLabel *labelOption;
    QLabel *labelColor;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *radioButtonAWB;
    QLabel *labelAWB;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonSunShadow;
    QLabel *labelSunShadow;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButtonSunCloud;
    QLabel *labelSunCloud;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonSun;
    QLabel *labelSun;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButtonFlash;
    QLabel *labelflash;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButtonTungsten;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButtonFluorestent;
    QLabel *labelfluorestent;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButtonCustom;
    QLabel *labelCustom;
    QGroupBox *groupBoxExposure;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelDark;
    QSpacerItem *horizontalSpacer;
    QLabel *labelEV;
    QDoubleSpinBox *doubleSpinBoxEV;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelBright;
    QSlider *horizontalSliderEV;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButtonSetDefault;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonSubmit;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *CameraParamForm)
    {
        if (CameraParamForm->objectName().isEmpty())
            CameraParamForm->setObjectName(QString::fromUtf8("CameraParamForm"));
        CameraParamForm->resize(300, 400);
        CameraParamForm->setMinimumSize(QSize(300, 400));
        CameraParamForm->setMaximumSize(QSize(300, 400));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(10);
        CameraParamForm->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/ips.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CameraParamForm->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(CameraParamForm);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBoxWhiteBalance = new QGroupBox(CameraParamForm);
        groupBoxWhiteBalance->setObjectName(QString::fromUtf8("groupBoxWhiteBalance"));
        gridLayout = new QGridLayout(groupBoxWhiteBalance);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelOption = new QLabel(groupBoxWhiteBalance);
        labelOption->setObjectName(QString::fromUtf8("labelOption"));

        gridLayout->addWidget(labelOption, 0, 0, 1, 1);

        labelColor = new QLabel(groupBoxWhiteBalance);
        labelColor->setObjectName(QString::fromUtf8("labelColor"));

        gridLayout->addWidget(labelColor, 0, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        radioButtonAWB = new QRadioButton(groupBoxWhiteBalance);
        radioButtonAWB->setObjectName(QString::fromUtf8("radioButtonAWB"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/camera/images/balance.ico"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonAWB->setIcon(icon1);

        horizontalLayout_9->addWidget(radioButtonAWB);

        labelAWB = new QLabel(groupBoxWhiteBalance);
        labelAWB->setObjectName(QString::fromUtf8("labelAWB"));

        horizontalLayout_9->addWidget(labelAWB);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButtonSunShadow = new QRadioButton(groupBoxWhiteBalance);
        radioButtonSunShadow->setObjectName(QString::fromUtf8("radioButtonSunShadow"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/camera/images/shadow.ico"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonSunShadow->setIcon(icon2);

        horizontalLayout_2->addWidget(radioButtonSunShadow);

        labelSunShadow = new QLabel(groupBoxWhiteBalance);
        labelSunShadow->setObjectName(QString::fromUtf8("labelSunShadow"));

        horizontalLayout_2->addWidget(labelSunShadow);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButtonSunCloud = new QRadioButton(groupBoxWhiteBalance);
        radioButtonSunCloud->setObjectName(QString::fromUtf8("radioButtonSunCloud"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/camera/images/cloud.ico"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonSunCloud->setIcon(icon3);

        horizontalLayout_3->addWidget(radioButtonSunCloud);

        labelSunCloud = new QLabel(groupBoxWhiteBalance);
        labelSunCloud->setObjectName(QString::fromUtf8("labelSunCloud"));

        horizontalLayout_3->addWidget(labelSunCloud);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonSun = new QRadioButton(groupBoxWhiteBalance);
        radioButtonSun->setObjectName(QString::fromUtf8("radioButtonSun"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/camera/images/sun.ico"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonSun->setIcon(icon4);

        horizontalLayout_4->addWidget(radioButtonSun);

        labelSun = new QLabel(groupBoxWhiteBalance);
        labelSun->setObjectName(QString::fromUtf8("labelSun"));

        horizontalLayout_4->addWidget(labelSun);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        radioButtonFlash = new QRadioButton(groupBoxWhiteBalance);
        radioButtonFlash->setObjectName(QString::fromUtf8("radioButtonFlash"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/camera/images/flash.ico"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonFlash->setIcon(icon5);

        horizontalLayout_5->addWidget(radioButtonFlash);

        labelflash = new QLabel(groupBoxWhiteBalance);
        labelflash->setObjectName(QString::fromUtf8("labelflash"));

        horizontalLayout_5->addWidget(labelflash);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        radioButtonTungsten = new QRadioButton(groupBoxWhiteBalance);
        radioButtonTungsten->setObjectName(QString::fromUtf8("radioButtonTungsten"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/camera/images/tungsten.ico"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonTungsten->setIcon(icon6);

        horizontalLayout_6->addWidget(radioButtonTungsten);

        label_10 = new QLabel(groupBoxWhiteBalance);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_6->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        radioButtonFluorestent = new QRadioButton(groupBoxWhiteBalance);
        radioButtonFluorestent->setObjectName(QString::fromUtf8("radioButtonFluorestent"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/camera/images/fluorestent.ico"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonFluorestent->setIcon(icon7);

        horizontalLayout_7->addWidget(radioButtonFluorestent);

        labelfluorestent = new QLabel(groupBoxWhiteBalance);
        labelfluorestent->setObjectName(QString::fromUtf8("labelfluorestent"));

        horizontalLayout_7->addWidget(labelfluorestent);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        radioButtonCustom = new QRadioButton(groupBoxWhiteBalance);
        radioButtonCustom->setObjectName(QString::fromUtf8("radioButtonCustom"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/camera/images/custom.ico"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonCustom->setIcon(icon8);

        horizontalLayout_8->addWidget(radioButtonCustom);

        labelCustom = new QLabel(groupBoxWhiteBalance);
        labelCustom->setObjectName(QString::fromUtf8("labelCustom"));

        horizontalLayout_8->addWidget(labelCustom);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout_3->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 2);


        verticalLayout_4->addWidget(groupBoxWhiteBalance);

        groupBoxExposure = new QGroupBox(CameraParamForm);
        groupBoxExposure->setObjectName(QString::fromUtf8("groupBoxExposure"));
        gridLayout_2 = new QGridLayout(groupBoxExposure);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelDark = new QLabel(groupBoxExposure);
        labelDark->setObjectName(QString::fromUtf8("labelDark"));

        horizontalLayout->addWidget(labelDark);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelEV = new QLabel(groupBoxExposure);
        labelEV->setObjectName(QString::fromUtf8("labelEV"));

        horizontalLayout->addWidget(labelEV);

        doubleSpinBoxEV = new QDoubleSpinBox(groupBoxExposure);
        doubleSpinBoxEV->setObjectName(QString::fromUtf8("doubleSpinBoxEV"));
        doubleSpinBoxEV->setWrapping(false);
        doubleSpinBoxEV->setFrame(true);
        doubleSpinBoxEV->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        doubleSpinBoxEV->setDecimals(1);
        doubleSpinBoxEV->setMinimum(-2.000000000000000);
        doubleSpinBoxEV->setMaximum(2.000000000000000);
        doubleSpinBoxEV->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout->addWidget(doubleSpinBoxEV);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labelBright = new QLabel(groupBoxExposure);
        labelBright->setObjectName(QString::fromUtf8("labelBright"));

        horizontalLayout->addWidget(labelBright);


        verticalLayout->addLayout(horizontalLayout);

        horizontalSliderEV = new QSlider(groupBoxExposure);
        horizontalSliderEV->setObjectName(QString::fromUtf8("horizontalSliderEV"));
        horizontalSliderEV->setMinimum(-20);
        horizontalSliderEV->setMaximum(20);
        horizontalSliderEV->setPageStep(3);
        horizontalSliderEV->setOrientation(Qt::Horizontal);
        horizontalSliderEV->setTickPosition(QSlider::TicksBelow);

        verticalLayout->addWidget(horizontalSliderEV);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBoxExposure);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButtonSetDefault = new QPushButton(CameraParamForm);
        pushButtonSetDefault->setObjectName(QString::fromUtf8("pushButtonSetDefault"));

        horizontalLayout_10->addWidget(pushButtonSetDefault);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        pushButtonSubmit = new QPushButton(CameraParamForm);
        pushButtonSubmit->setObjectName(QString::fromUtf8("pushButtonSubmit"));

        horizontalLayout_10->addWidget(pushButtonSubmit);

        pushButtonCancel = new QPushButton(CameraParamForm);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout_10->addWidget(pushButtonCancel);


        verticalLayout_5->addLayout(horizontalLayout_10);


        gridLayout_3->addLayout(verticalLayout_5, 0, 0, 1, 1);


        retranslateUi(CameraParamForm);
        QObject::connect(pushButtonCancel, SIGNAL(clicked()), CameraParamForm, SLOT(close()));

        QMetaObject::connectSlotsByName(CameraParamForm);
    } // setupUi

    void retranslateUi(QWidget *CameraParamForm)
    {
        CameraParamForm->setWindowTitle(QApplication::translate("CameraParamForm", "\347\233\270\346\234\272\345\217\202\346\225\260", nullptr));
        groupBoxWhiteBalance->setTitle(QApplication::translate("CameraParamForm", "\347\231\275\345\271\263\350\241\241", nullptr));
        labelOption->setText(QApplication::translate("CameraParamForm", "\351\200\211\351\241\271", nullptr));
        labelColor->setText(QApplication::translate("CameraParamForm", "\350\211\262\346\270\251", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonAWB->setToolTip(QApplication::translate("CameraParamForm", "<html>\n"
"<head/>\n"
"<body>\n"
"<p><span style=\" color:#5500ff;\">\350\207\252\345\212\250\347\231\275\345\271\263\350\241\241 Auto White Balance</span></p>\n"
"</body>\n"
"</html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonAWB->setText(QApplication::translate("CameraParamForm", "AWB", nullptr));
        labelAWB->setText(QApplication::translate("CameraParamForm", "3000-7000K", nullptr));
        radioButtonSunShadow->setText(QApplication::translate("CameraParamForm", "\346\231\264\345\244\251\351\230\264\345\275\261", nullptr));
        labelSunShadow->setText(QApplication::translate("CameraParamForm", "7000K", nullptr));
        radioButtonSunCloud->setText(QApplication::translate("CameraParamForm", "\346\231\264\346\234\227\345\244\232\344\272\221", nullptr));
        labelSunCloud->setText(QApplication::translate("CameraParamForm", "6000K", nullptr));
        radioButtonSun->setText(QApplication::translate("CameraParamForm", "\346\231\264\345\244\251\346\227\245\345\205\211", nullptr));
        labelSun->setText(QApplication::translate("CameraParamForm", "5500K", nullptr));
        radioButtonFlash->setText(QApplication::translate("CameraParamForm", "\351\227\252\345\205\211\347\201\257", nullptr));
        labelflash->setText(QApplication::translate("CameraParamForm", "5500K", nullptr));
        radioButtonTungsten->setText(QApplication::translate("CameraParamForm", "\351\222\250\344\270\235\347\201\257", nullptr));
        label_10->setText(QApplication::translate("CameraParamForm", "3400K", nullptr));
        radioButtonFluorestent->setText(QApplication::translate("CameraParamForm", "\350\215\247\345\205\211\347\201\257", nullptr));
        labelfluorestent->setText(QApplication::translate("CameraParamForm", "\346\240\271\346\215\256\350\215\247\345\205\211\347\205\247\346\230\216\350\256\276\347\275\256", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonCustom->setToolTip(QApplication::translate("CameraParamForm", "<html><head/><body><p><span style=\" color:#5500ff;\">\350\207\252\345\256\232\344\271\211\345\244\204\347\220\206\350\211\262\345\275\251\350\277\230\345\216\237\345\222\214\350\211\262\350\260\203</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonCustom->setText(QApplication::translate("CameraParamForm", "\350\207\252\345\256\232\344\271\211", nullptr));
        labelCustom->setText(QApplication::translate("CameraParamForm", "\346\240\271\346\215\256\345\205\267\344\275\223\350\211\262\346\270\251\346\235\241\344\273\266", nullptr));
        groupBoxExposure->setTitle(QApplication::translate("CameraParamForm", "\346\233\235\345\205\211\350\241\245\345\201\277", nullptr));
        labelDark->setText(QApplication::translate("CameraParamForm", "\346\232\227", nullptr));
#ifndef QT_NO_TOOLTIP
        labelEV->setToolTip(QApplication::translate("CameraParamForm", "<html><head/><body><p><span style=\" font-family:'arial'; font-size:13px; color:#5500ff; background-color:#ffffff;\">Exposure Values\357\274\214</span><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:12px; color:#5500ff; background-color:#ffffff;\">\347\252\201\346\230\276\347\224\273\351\235\242\346\270\205\346\231\260\345\272\246</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelEV->setText(QApplication::translate("CameraParamForm", "EV", nullptr));
        labelBright->setText(QApplication::translate("CameraParamForm", "\344\272\256", nullptr));
        pushButtonSetDefault->setText(QApplication::translate("CameraParamForm", "\350\256\276\344\270\272\351\273\230\350\256\244\345\200\274", nullptr));
        pushButtonSubmit->setText(QApplication::translate("CameraParamForm", "\347\241\256\345\256\232", nullptr));
        pushButtonCancel->setText(QApplication::translate("CameraParamForm", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraParamForm: public Ui_CameraParamForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAPARAMFORM_H
