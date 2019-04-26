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
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionExit;
    QAction *actionCommonSetting;
    QAction *actionGray;
    QAction *actionLookHelp;
    QAction *actionAboutQt;
    QAction *actionAboutSystem;
    QAction *actionCameraParam;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QGraphicsView *graphicsView;
    QListWidget *listWidget;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonGrab;
    QPushButton *pushButtonStop;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line;
    QTabWidget *tabWidget;
    QWidget *tabDeviceControl;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBoxMotorControl;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBoxControlMethod;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButtonTorqueMode;
    QRadioButton *radioButtonPositionMode;
    QRadioButton *radioButtonVelocityMode;
    QLabel *labelGainCompensate;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelResponse;
    QSlider *horizontalSliderResponse;
    QSpinBox *spinBoxResponse;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelPosLoop;
    QSlider *horizontalSliderPosLoop;
    QSpinBox *spinBoxPosLoop;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelVelocityLoop;
    QSlider *horizontalSliderVelocityLoop;
    QSpinBox *spinBoxVelocityLoop;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBoxCameraControl;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelFocus;
    QComboBox *comboBoxFocus;
    QLabel *labelMillimeter;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelAperture;
    QComboBox *comboBoxAperture;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelShutter;
    QComboBox *comboBoxShutter;
    QLabel *labelSecond;
    QHBoxLayout *horizontalLayout_13;
    QLabel *labelISO;
    QComboBox *comboBoxISO;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_4;
    QWidget *tabParamSetting;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBoxImageAdjust;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelBright;
    QSlider *horizontalSliderBright;
    QSpinBox *spinBoxBright;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelHue;
    QSlider *horizontalSliderHue;
    QSpinBox *spinBoxHue;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelContrast;
    QSlider *horizontalSliderContrast;
    QSpinBox *spinBoxContrast;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelSaturation;
    QSlider *horizontalSliderSaturation;
    QSpinBox *spinBoxSaturation;
    QSpacerItem *verticalSpacer;
    QFrame *line_5;
    QGroupBox *groupBoxSerialComm;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *labelSerialPort;
    QComboBox *comboBoxSerialPort;
    QHBoxLayout *horizontalLayout_17;
    QLabel *labelBaudRate;
    QComboBox *comboBoxBaudRate;
    QHBoxLayout *horizontalLayout_18;
    QLabel *labelDataBits;
    QComboBox *comboBoxDataBits;
    QHBoxLayout *horizontalLayout_19;
    QLabel *labelParityBit;
    QComboBox *comboBoxParityBit;
    QHBoxLayout *horizontalLayout_20;
    QLabel *labelStopBit;
    QComboBox *comboBoxStopBit;
    QSpacerItem *verticalSpacer_2;
    QWidget *tabImageProcess;
    QGridLayout *gridLayout_12;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBoxImageStitch;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *groupBoxCameraModel;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *checkBoxKappa;
    QCheckBox *checkBoxAspect;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *checkBoxFocus;
    QCheckBox *checkBoxSkew;
    QCheckBox *checkBoxPrincipalPoint;
    QGroupBox *groupBoxCornerDection;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_21;
    QRadioButton *radioButtonHarri;
    QRadioButton *radioButtonFoerstner;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_22;
    QRadioButton *radioButtonGoldStandard;
    QRadioButton *radioButtonStandard;
    QCheckBox *checkBoxImageFusion;
    QFrame *line_3;
    QGroupBox *groupBoxCharRecognize;
    QGridLayout *gridLayout_17;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *pushButtonOpenImage;
    QPushButton *pushButtonStartRecognize;
    QGroupBox *groupBoxImageSize;
    QGridLayout *gridLayout_15;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_26;
    QLabel *labelImageWidth;
    QLineEdit *lineEditImageWidth;
    QHBoxLayout *horizontalLayout_27;
    QLabel *labelImageHeight;
    QLineEdit *lineEditImageHeight;
    QGroupBox *groupBoxRecognizeResult;
    QGridLayout *gridLayout_16;
    QLineEdit *lineEditRecognizeResult;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(844, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/images/ips.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setCheckable(false);
        actionOpen->setChecked(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/images/open.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(10);
        actionOpen->setFont(font1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/images/save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave->setFont(font1);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/images/saveas.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon3);
        actionSaveAs->setFont(font1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/images/exit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionExit->setFont(font1);
        actionCommonSetting = new QAction(MainWindow);
        actionCommonSetting->setObjectName(QString::fromUtf8("actionCommonSetting"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/images/image.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCommonSetting->setIcon(icon5);
        actionCommonSetting->setFont(font1);
        actionGray = new QAction(MainWindow);
        actionGray->setObjectName(QString::fromUtf8("actionGray"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/images/gray.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionGray->setIcon(icon6);
        actionGray->setFont(font1);
        actionLookHelp = new QAction(MainWindow);
        actionLookHelp->setObjectName(QString::fromUtf8("actionLookHelp"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/images/web.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLookHelp->setIcon(icon7);
        actionLookHelp->setFont(font1);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/images/qt.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutQt->setIcon(icon8);
        actionAboutQt->setFont(font1);
        actionAboutSystem = new QAction(MainWindow);
        actionAboutSystem->setObjectName(QString::fromUtf8("actionAboutSystem"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/images/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutSystem->setIcon(icon9);
        actionAboutSystem->setFont(font1);
        actionCameraParam = new QAction(MainWindow);
        actionCameraParam->setObjectName(QString::fromUtf8("actionCameraParam"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/images/camera.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionCameraParam->setIcon(icon10);
        actionCameraParam->setFont(font1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        verticalLayout_2->addWidget(graphicsView);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setFont(font1);
        listWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        listWidget->setIconSize(QSize(50, 50));
        listWidget->setMovement(QListView::Static);
        listWidget->setFlow(QListView::TopToBottom);
        listWidget->setResizeMode(QListView::Adjust);
        listWidget->setViewMode(QListView::IconMode);

        verticalLayout_2->addWidget(listWidget);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName(QString::fromUtf8("pushButtonStart"));
        pushButtonStart->setStyleSheet(QString::fromUtf8(""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/control/images/start.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonStart->setIcon(icon11);

        horizontalLayout_7->addWidget(pushButtonStart);

        pushButtonGrab = new QPushButton(centralWidget);
        pushButtonGrab->setObjectName(QString::fromUtf8("pushButtonGrab"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/control/images/grab.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonGrab->setIcon(icon12);

        horizontalLayout_7->addWidget(pushButtonGrab);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName(QString::fromUtf8("pushButtonStop"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/control/images/stop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonStop->setIcon(icon13);

        horizontalLayout_7->addWidget(pushButtonStop);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_7);


        horizontalLayout_8->addLayout(verticalLayout_2);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setMaximumSize(QSize(65535, 65535));
        tabWidget->setSizeIncrement(QSize(0, 0));
        QFont font2;
        font2.setStyleStrategy(QFont::PreferDefault);
        tabWidget->setFont(font2);
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(false);
        tabDeviceControl = new QWidget();
        tabDeviceControl->setObjectName(QString::fromUtf8("tabDeviceControl"));
        gridLayout_9 = new QGridLayout(tabDeviceControl);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBoxMotorControl = new QGroupBox(tabDeviceControl);
        groupBoxMotorControl->setObjectName(QString::fromUtf8("groupBoxMotorControl"));
        gridLayout_6 = new QGridLayout(groupBoxMotorControl);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBoxControlMethod = new QGroupBox(groupBoxMotorControl);
        groupBoxControlMethod->setObjectName(QString::fromUtf8("groupBoxControlMethod"));
        gridLayout_5 = new QGridLayout(groupBoxControlMethod);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        radioButtonTorqueMode = new QRadioButton(groupBoxControlMethod);
        radioButtonTorqueMode->setObjectName(QString::fromUtf8("radioButtonTorqueMode"));
        radioButtonTorqueMode->setAutoRepeat(false);

        verticalLayout_4->addWidget(radioButtonTorqueMode);

        radioButtonPositionMode = new QRadioButton(groupBoxControlMethod);
        radioButtonPositionMode->setObjectName(QString::fromUtf8("radioButtonPositionMode"));

        verticalLayout_4->addWidget(radioButtonPositionMode);

        radioButtonVelocityMode = new QRadioButton(groupBoxControlMethod);
        radioButtonVelocityMode->setObjectName(QString::fromUtf8("radioButtonVelocityMode"));

        verticalLayout_4->addWidget(radioButtonVelocityMode);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 1, 1);


        verticalLayout_7->addWidget(groupBoxControlMethod);

        labelGainCompensate = new QLabel(groupBoxMotorControl);
        labelGainCompensate->setObjectName(QString::fromUtf8("labelGainCompensate"));

        verticalLayout_7->addWidget(labelGainCompensate, 0, Qt::AlignHCenter);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelResponse = new QLabel(groupBoxMotorControl);
        labelResponse->setObjectName(QString::fromUtf8("labelResponse"));
        labelResponse->setFrameShape(QFrame::NoFrame);
        labelResponse->setFrameShadow(QFrame::Plain);
        labelResponse->setTextFormat(Qt::AutoText);
        labelResponse->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_5->addWidget(labelResponse);

        horizontalSliderResponse = new QSlider(groupBoxMotorControl);
        horizontalSliderResponse->setObjectName(QString::fromUtf8("horizontalSliderResponse"));
        horizontalSliderResponse->setMinimum(-100);
        horizontalSliderResponse->setMaximum(100);
        horizontalSliderResponse->setSliderPosition(0);
        horizontalSliderResponse->setTracking(true);
        horizontalSliderResponse->setOrientation(Qt::Horizontal);
        horizontalSliderResponse->setInvertedAppearance(false);
        horizontalSliderResponse->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_5->addWidget(horizontalSliderResponse);

        spinBoxResponse = new QSpinBox(groupBoxMotorControl);
        spinBoxResponse->setObjectName(QString::fromUtf8("spinBoxResponse"));
        spinBoxResponse->setWrapping(false);
        spinBoxResponse->setFrame(true);
        spinBoxResponse->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBoxResponse->setReadOnly(false);
        spinBoxResponse->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxResponse->setProperty("showGroupSeparator", QVariant(false));
        spinBoxResponse->setMinimum(-100);
        spinBoxResponse->setMaximum(100);

        horizontalLayout_5->addWidget(spinBoxResponse);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelPosLoop = new QLabel(groupBoxMotorControl);
        labelPosLoop->setObjectName(QString::fromUtf8("labelPosLoop"));
        labelPosLoop->setFrameShape(QFrame::NoFrame);
        labelPosLoop->setFrameShadow(QFrame::Plain);
        labelPosLoop->setTextFormat(Qt::AutoText);
        labelPosLoop->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_6->addWidget(labelPosLoop);

        horizontalSliderPosLoop = new QSlider(groupBoxMotorControl);
        horizontalSliderPosLoop->setObjectName(QString::fromUtf8("horizontalSliderPosLoop"));
        horizontalSliderPosLoop->setMinimum(-100);
        horizontalSliderPosLoop->setMaximum(100);
        horizontalSliderPosLoop->setSliderPosition(0);
        horizontalSliderPosLoop->setTracking(true);
        horizontalSliderPosLoop->setOrientation(Qt::Horizontal);
        horizontalSliderPosLoop->setInvertedAppearance(false);
        horizontalSliderPosLoop->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_6->addWidget(horizontalSliderPosLoop);

        spinBoxPosLoop = new QSpinBox(groupBoxMotorControl);
        spinBoxPosLoop->setObjectName(QString::fromUtf8("spinBoxPosLoop"));
        spinBoxPosLoop->setWrapping(false);
        spinBoxPosLoop->setFrame(true);
        spinBoxPosLoop->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBoxPosLoop->setReadOnly(false);
        spinBoxPosLoop->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxPosLoop->setProperty("showGroupSeparator", QVariant(false));
        spinBoxPosLoop->setMinimum(-100);
        spinBoxPosLoop->setMaximum(100);

        horizontalLayout_6->addWidget(spinBoxPosLoop);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        labelVelocityLoop = new QLabel(groupBoxMotorControl);
        labelVelocityLoop->setObjectName(QString::fromUtf8("labelVelocityLoop"));
        labelVelocityLoop->setFrameShape(QFrame::NoFrame);
        labelVelocityLoop->setFrameShadow(QFrame::Plain);
        labelVelocityLoop->setTextFormat(Qt::AutoText);
        labelVelocityLoop->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_9->addWidget(labelVelocityLoop);

        horizontalSliderVelocityLoop = new QSlider(groupBoxMotorControl);
        horizontalSliderVelocityLoop->setObjectName(QString::fromUtf8("horizontalSliderVelocityLoop"));
        horizontalSliderVelocityLoop->setMinimum(-100);
        horizontalSliderVelocityLoop->setMaximum(100);
        horizontalSliderVelocityLoop->setSliderPosition(0);
        horizontalSliderVelocityLoop->setTracking(true);
        horizontalSliderVelocityLoop->setOrientation(Qt::Horizontal);
        horizontalSliderVelocityLoop->setInvertedAppearance(false);
        horizontalSliderVelocityLoop->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_9->addWidget(horizontalSliderVelocityLoop);

        spinBoxVelocityLoop = new QSpinBox(groupBoxMotorControl);
        spinBoxVelocityLoop->setObjectName(QString::fromUtf8("spinBoxVelocityLoop"));
        spinBoxVelocityLoop->setWrapping(false);
        spinBoxVelocityLoop->setFrame(true);
        spinBoxVelocityLoop->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBoxVelocityLoop->setReadOnly(false);
        spinBoxVelocityLoop->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxVelocityLoop->setProperty("showGroupSeparator", QVariant(false));
        spinBoxVelocityLoop->setMinimum(-100);
        spinBoxVelocityLoop->setMaximum(100);

        horizontalLayout_9->addWidget(spinBoxVelocityLoop);


        verticalLayout_3->addLayout(horizontalLayout_9);


        verticalLayout_7->addLayout(verticalLayout_3);


        gridLayout_6->addLayout(verticalLayout_7, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBoxMotorControl, 0, 0, 1, 1);

        groupBoxCameraControl = new QGroupBox(tabDeviceControl);
        groupBoxCameraControl->setObjectName(QString::fromUtf8("groupBoxCameraControl"));
        gridLayout_7 = new QGridLayout(groupBoxCameraControl);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        labelFocus = new QLabel(groupBoxCameraControl);
        labelFocus->setObjectName(QString::fromUtf8("labelFocus"));

        horizontalLayout_10->addWidget(labelFocus);

        comboBoxFocus = new QComboBox(groupBoxCameraControl);
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->addItem(QString());
        comboBoxFocus->setObjectName(QString::fromUtf8("comboBoxFocus"));
        comboBoxFocus->setEditable(true);

        horizontalLayout_10->addWidget(comboBoxFocus);

        labelMillimeter = new QLabel(groupBoxCameraControl);
        labelMillimeter->setObjectName(QString::fromUtf8("labelMillimeter"));

        horizontalLayout_10->addWidget(labelMillimeter);


        verticalLayout_8->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        labelAperture = new QLabel(groupBoxCameraControl);
        labelAperture->setObjectName(QString::fromUtf8("labelAperture"));

        horizontalLayout_11->addWidget(labelAperture);

        comboBoxAperture = new QComboBox(groupBoxCameraControl);
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->addItem(QString());
        comboBoxAperture->setObjectName(QString::fromUtf8("comboBoxAperture"));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        comboBoxAperture->setFont(font3);
        comboBoxAperture->setEditable(true);

        horizontalLayout_11->addWidget(comboBoxAperture);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_3);


        verticalLayout_8->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        labelShutter = new QLabel(groupBoxCameraControl);
        labelShutter->setObjectName(QString::fromUtf8("labelShutter"));

        horizontalLayout_12->addWidget(labelShutter);

        comboBoxShutter = new QComboBox(groupBoxCameraControl);
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->addItem(QString());
        comboBoxShutter->setObjectName(QString::fromUtf8("comboBoxShutter"));
        comboBoxShutter->setEditable(true);

        horizontalLayout_12->addWidget(comboBoxShutter);

        labelSecond = new QLabel(groupBoxCameraControl);
        labelSecond->setObjectName(QString::fromUtf8("labelSecond"));

        horizontalLayout_12->addWidget(labelSecond);


        verticalLayout_8->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        labelISO = new QLabel(groupBoxCameraControl);
        labelISO->setObjectName(QString::fromUtf8("labelISO"));

        horizontalLayout_13->addWidget(labelISO);

        comboBoxISO = new QComboBox(groupBoxCameraControl);
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->addItem(QString());
        comboBoxISO->setObjectName(QString::fromUtf8("comboBoxISO"));
        comboBoxISO->setEditable(true);

        horizontalLayout_13->addWidget(comboBoxISO);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);


        verticalLayout_8->addLayout(horizontalLayout_13);


        gridLayout_7->addLayout(verticalLayout_8, 0, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_4, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBoxCameraControl, 2, 0, 1, 1);

        line_4 = new QFrame(tabDeviceControl);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_8->addWidget(line_4, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);

        tabWidget->addTab(tabDeviceControl, QString());
        tabParamSetting = new QWidget();
        tabParamSetting->setObjectName(QString::fromUtf8("tabParamSetting"));
        gridLayout_4 = new QGridLayout(tabParamSetting);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBoxImageAdjust = new QGroupBox(tabParamSetting);
        groupBoxImageAdjust->setObjectName(QString::fromUtf8("groupBoxImageAdjust"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxImageAdjust->sizePolicy().hasHeightForWidth());
        groupBoxImageAdjust->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(groupBoxImageAdjust);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelBright = new QLabel(groupBoxImageAdjust);
        labelBright->setObjectName(QString::fromUtf8("labelBright"));
        labelBright->setFrameShape(QFrame::NoFrame);
        labelBright->setFrameShadow(QFrame::Plain);
        labelBright->setTextFormat(Qt::AutoText);
        labelBright->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout->addWidget(labelBright);

        horizontalSliderBright = new QSlider(groupBoxImageAdjust);
        horizontalSliderBright->setObjectName(QString::fromUtf8("horizontalSliderBright"));
        horizontalSliderBright->setMinimum(-100);
        horizontalSliderBright->setMaximum(100);
        horizontalSliderBright->setSliderPosition(0);
        horizontalSliderBright->setTracking(true);
        horizontalSliderBright->setOrientation(Qt::Horizontal);
        horizontalSliderBright->setInvertedAppearance(false);
        horizontalSliderBright->setTickPosition(QSlider::TicksBelow);

        horizontalLayout->addWidget(horizontalSliderBright);

        spinBoxBright = new QSpinBox(groupBoxImageAdjust);
        spinBoxBright->setObjectName(QString::fromUtf8("spinBoxBright"));
        spinBoxBright->setWrapping(false);
        spinBoxBright->setFrame(true);
        spinBoxBright->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBoxBright->setReadOnly(false);
        spinBoxBright->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxBright->setProperty("showGroupSeparator", QVariant(false));
        spinBoxBright->setMinimum(-100);
        spinBoxBright->setMaximum(100);

        horizontalLayout->addWidget(spinBoxBright);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelHue = new QLabel(groupBoxImageAdjust);
        labelHue->setObjectName(QString::fromUtf8("labelHue"));
        labelHue->setFrameShape(QFrame::NoFrame);
        labelHue->setFrameShadow(QFrame::Plain);
        labelHue->setTextFormat(Qt::AutoText);
        labelHue->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_2->addWidget(labelHue);

        horizontalSliderHue = new QSlider(groupBoxImageAdjust);
        horizontalSliderHue->setObjectName(QString::fromUtf8("horizontalSliderHue"));
        horizontalSliderHue->setMinimum(-100);
        horizontalSliderHue->setMaximum(100);
        horizontalSliderHue->setSliderPosition(0);
        horizontalSliderHue->setTracking(true);
        horizontalSliderHue->setOrientation(Qt::Horizontal);
        horizontalSliderHue->setInvertedAppearance(false);
        horizontalSliderHue->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_2->addWidget(horizontalSliderHue);

        spinBoxHue = new QSpinBox(groupBoxImageAdjust);
        spinBoxHue->setObjectName(QString::fromUtf8("spinBoxHue"));
        spinBoxHue->setWrapping(false);
        spinBoxHue->setFrame(true);
        spinBoxHue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBoxHue->setReadOnly(false);
        spinBoxHue->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxHue->setProperty("showGroupSeparator", QVariant(false));
        spinBoxHue->setMinimum(-100);
        spinBoxHue->setMaximum(100);

        horizontalLayout_2->addWidget(spinBoxHue);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelContrast = new QLabel(groupBoxImageAdjust);
        labelContrast->setObjectName(QString::fromUtf8("labelContrast"));
        labelContrast->setFrameShape(QFrame::NoFrame);
        labelContrast->setFrameShadow(QFrame::Plain);
        labelContrast->setTextFormat(Qt::AutoText);
        labelContrast->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_3->addWidget(labelContrast);

        horizontalSliderContrast = new QSlider(groupBoxImageAdjust);
        horizontalSliderContrast->setObjectName(QString::fromUtf8("horizontalSliderContrast"));
        horizontalSliderContrast->setMinimum(-100);
        horizontalSliderContrast->setMaximum(100);
        horizontalSliderContrast->setSliderPosition(0);
        horizontalSliderContrast->setTracking(true);
        horizontalSliderContrast->setOrientation(Qt::Horizontal);
        horizontalSliderContrast->setInvertedAppearance(false);
        horizontalSliderContrast->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_3->addWidget(horizontalSliderContrast);

        spinBoxContrast = new QSpinBox(groupBoxImageAdjust);
        spinBoxContrast->setObjectName(QString::fromUtf8("spinBoxContrast"));
        spinBoxContrast->setWrapping(false);
        spinBoxContrast->setFrame(true);
        spinBoxContrast->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBoxContrast->setReadOnly(false);
        spinBoxContrast->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxContrast->setProperty("showGroupSeparator", QVariant(false));
        spinBoxContrast->setMinimum(-100);
        spinBoxContrast->setMaximum(100);

        horizontalLayout_3->addWidget(spinBoxContrast);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelSaturation = new QLabel(groupBoxImageAdjust);
        labelSaturation->setObjectName(QString::fromUtf8("labelSaturation"));
        labelSaturation->setFrameShape(QFrame::NoFrame);
        labelSaturation->setFrameShadow(QFrame::Plain);
        labelSaturation->setTextFormat(Qt::AutoText);
        labelSaturation->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        horizontalLayout_4->addWidget(labelSaturation);

        horizontalSliderSaturation = new QSlider(groupBoxImageAdjust);
        horizontalSliderSaturation->setObjectName(QString::fromUtf8("horizontalSliderSaturation"));
        horizontalSliderSaturation->setMinimum(-100);
        horizontalSliderSaturation->setMaximum(100);
        horizontalSliderSaturation->setSliderPosition(0);
        horizontalSliderSaturation->setTracking(true);
        horizontalSliderSaturation->setOrientation(Qt::Horizontal);
        horizontalSliderSaturation->setInvertedAppearance(false);
        horizontalSliderSaturation->setTickPosition(QSlider::TicksBelow);

        horizontalLayout_4->addWidget(horizontalSliderSaturation);

        spinBoxSaturation = new QSpinBox(groupBoxImageAdjust);
        spinBoxSaturation->setObjectName(QString::fromUtf8("spinBoxSaturation"));
        spinBoxSaturation->setWrapping(false);
        spinBoxSaturation->setFrame(true);
        spinBoxSaturation->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBoxSaturation->setReadOnly(false);
        spinBoxSaturation->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBoxSaturation->setProperty("showGroupSeparator", QVariant(false));
        spinBoxSaturation->setMinimum(-100);
        spinBoxSaturation->setMaximum(100);

        horizontalLayout_4->addWidget(spinBoxSaturation);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        verticalLayout_6->addWidget(groupBoxImageAdjust);

        line_5 = new QFrame(tabParamSetting);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_5);

        groupBoxSerialComm = new QGroupBox(tabParamSetting);
        groupBoxSerialComm->setObjectName(QString::fromUtf8("groupBoxSerialComm"));
        sizePolicy2.setHeightForWidth(groupBoxSerialComm->sizePolicy().hasHeightForWidth());
        groupBoxSerialComm->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(groupBoxSerialComm);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        labelSerialPort = new QLabel(groupBoxSerialComm);
        labelSerialPort->setObjectName(QString::fromUtf8("labelSerialPort"));

        horizontalLayout_16->addWidget(labelSerialPort);

        comboBoxSerialPort = new QComboBox(groupBoxSerialComm);
        comboBoxSerialPort->addItem(QString());
        comboBoxSerialPort->addItem(QString());
        comboBoxSerialPort->addItem(QString());
        comboBoxSerialPort->addItem(QString());
        comboBoxSerialPort->addItem(QString());
        comboBoxSerialPort->addItem(QString());
        comboBoxSerialPort->setObjectName(QString::fromUtf8("comboBoxSerialPort"));
        comboBoxSerialPort->setEditable(false);
        comboBoxSerialPort->setDuplicatesEnabled(true);
        comboBoxSerialPort->setFrame(true);
        comboBoxSerialPort->setModelColumn(0);

        horizontalLayout_16->addWidget(comboBoxSerialPort);


        verticalLayout_5->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        labelBaudRate = new QLabel(groupBoxSerialComm);
        labelBaudRate->setObjectName(QString::fromUtf8("labelBaudRate"));

        horizontalLayout_17->addWidget(labelBaudRate);

        comboBoxBaudRate = new QComboBox(groupBoxSerialComm);
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->setObjectName(QString::fromUtf8("comboBoxBaudRate"));
        comboBoxBaudRate->setEditable(true);
        comboBoxBaudRate->setDuplicatesEnabled(true);
        comboBoxBaudRate->setFrame(true);
        comboBoxBaudRate->setModelColumn(0);

        horizontalLayout_17->addWidget(comboBoxBaudRate);


        verticalLayout_5->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        labelDataBits = new QLabel(groupBoxSerialComm);
        labelDataBits->setObjectName(QString::fromUtf8("labelDataBits"));

        horizontalLayout_18->addWidget(labelDataBits);

        comboBoxDataBits = new QComboBox(groupBoxSerialComm);
        comboBoxDataBits->addItem(QString());
        comboBoxDataBits->addItem(QString());
        comboBoxDataBits->addItem(QString());
        comboBoxDataBits->addItem(QString());
        comboBoxDataBits->setObjectName(QString::fromUtf8("comboBoxDataBits"));
        comboBoxDataBits->setEditable(true);
        comboBoxDataBits->setDuplicatesEnabled(true);
        comboBoxDataBits->setFrame(true);
        comboBoxDataBits->setModelColumn(0);

        horizontalLayout_18->addWidget(comboBoxDataBits);


        verticalLayout_5->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        labelParityBit = new QLabel(groupBoxSerialComm);
        labelParityBit->setObjectName(QString::fromUtf8("labelParityBit"));

        horizontalLayout_19->addWidget(labelParityBit);

        comboBoxParityBit = new QComboBox(groupBoxSerialComm);
        comboBoxParityBit->addItem(QString());
        comboBoxParityBit->addItem(QString());
        comboBoxParityBit->addItem(QString());
        comboBoxParityBit->setObjectName(QString::fromUtf8("comboBoxParityBit"));
        comboBoxParityBit->setEditable(true);
        comboBoxParityBit->setDuplicatesEnabled(true);
        comboBoxParityBit->setFrame(true);
        comboBoxParityBit->setModelColumn(0);

        horizontalLayout_19->addWidget(comboBoxParityBit);


        verticalLayout_5->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        labelStopBit = new QLabel(groupBoxSerialComm);
        labelStopBit->setObjectName(QString::fromUtf8("labelStopBit"));

        horizontalLayout_20->addWidget(labelStopBit);

        comboBoxStopBit = new QComboBox(groupBoxSerialComm);
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->addItem(QString());
        comboBoxStopBit->setObjectName(QString::fromUtf8("comboBoxStopBit"));
        comboBoxStopBit->setEditable(true);
        comboBoxStopBit->setDuplicatesEnabled(true);
        comboBoxStopBit->setFrame(true);
        comboBoxStopBit->setModelColumn(0);

        horizontalLayout_20->addWidget(comboBoxStopBit);


        verticalLayout_5->addLayout(horizontalLayout_20);


        gridLayout_3->addLayout(verticalLayout_5, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);


        verticalLayout_6->addWidget(groupBoxSerialComm);


        gridLayout_4->addLayout(verticalLayout_6, 0, 0, 1, 1);

        tabWidget->addTab(tabParamSetting, QString());
        tabImageProcess = new QWidget();
        tabImageProcess->setObjectName(QString::fromUtf8("tabImageProcess"));
        gridLayout_12 = new QGridLayout(tabImageProcess);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        groupBoxImageStitch = new QGroupBox(tabImageProcess);
        groupBoxImageStitch->setObjectName(QString::fromUtf8("groupBoxImageStitch"));
        gridLayout_14 = new QGridLayout(groupBoxImageStitch);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        groupBoxCameraModel = new QGroupBox(groupBoxImageStitch);
        groupBoxCameraModel->setObjectName(QString::fromUtf8("groupBoxCameraModel"));
        gridLayout_10 = new QGridLayout(groupBoxCameraModel);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        checkBoxKappa = new QCheckBox(groupBoxCameraModel);
        checkBoxKappa->setObjectName(QString::fromUtf8("checkBoxKappa"));
        checkBoxKappa->setChecked(true);

        horizontalLayout_14->addWidget(checkBoxKappa);

        checkBoxAspect = new QCheckBox(groupBoxCameraModel);
        checkBoxAspect->setObjectName(QString::fromUtf8("checkBoxAspect"));

        horizontalLayout_14->addWidget(checkBoxAspect);


        verticalLayout_9->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        checkBoxFocus = new QCheckBox(groupBoxCameraModel);
        checkBoxFocus->setObjectName(QString::fromUtf8("checkBoxFocus"));
        checkBoxFocus->setChecked(true);

        horizontalLayout_15->addWidget(checkBoxFocus);

        checkBoxSkew = new QCheckBox(groupBoxCameraModel);
        checkBoxSkew->setObjectName(QString::fromUtf8("checkBoxSkew"));

        horizontalLayout_15->addWidget(checkBoxSkew);


        verticalLayout_9->addLayout(horizontalLayout_15);

        checkBoxPrincipalPoint = new QCheckBox(groupBoxCameraModel);
        checkBoxPrincipalPoint->setObjectName(QString::fromUtf8("checkBoxPrincipalPoint"));
        checkBoxPrincipalPoint->setChecked(true);

        verticalLayout_9->addWidget(checkBoxPrincipalPoint);


        gridLayout_10->addLayout(verticalLayout_9, 0, 0, 1, 1);


        verticalLayout_12->addWidget(groupBoxCameraModel);

        groupBoxCornerDection = new QGroupBox(groupBoxImageStitch);
        groupBoxCornerDection->setObjectName(QString::fromUtf8("groupBoxCornerDection"));
        gridLayout_11 = new QGridLayout(groupBoxCornerDection);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        radioButtonHarri = new QRadioButton(groupBoxCornerDection);
        radioButtonHarri->setObjectName(QString::fromUtf8("radioButtonHarri"));
        radioButtonHarri->setChecked(true);

        horizontalLayout_21->addWidget(radioButtonHarri);

        radioButtonFoerstner = new QRadioButton(groupBoxCornerDection);
        radioButtonFoerstner->setObjectName(QString::fromUtf8("radioButtonFoerstner"));

        horizontalLayout_21->addWidget(radioButtonFoerstner);


        gridLayout_11->addLayout(horizontalLayout_21, 0, 0, 1, 1);


        verticalLayout_12->addWidget(groupBoxCornerDection);

        groupBox_9 = new QGroupBox(groupBoxImageStitch);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_13 = new QGridLayout(groupBox_9);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        radioButtonGoldStandard = new QRadioButton(groupBox_9);
        radioButtonGoldStandard->setObjectName(QString::fromUtf8("radioButtonGoldStandard"));
        radioButtonGoldStandard->setChecked(true);

        horizontalLayout_22->addWidget(radioButtonGoldStandard);

        radioButtonStandard = new QRadioButton(groupBox_9);
        radioButtonStandard->setObjectName(QString::fromUtf8("radioButtonStandard"));

        horizontalLayout_22->addWidget(radioButtonStandard);


        verticalLayout_11->addLayout(horizontalLayout_22);


        gridLayout_13->addLayout(verticalLayout_11, 0, 0, 1, 1);


        verticalLayout_12->addWidget(groupBox_9);

        checkBoxImageFusion = new QCheckBox(groupBoxImageStitch);
        checkBoxImageFusion->setObjectName(QString::fromUtf8("checkBoxImageFusion"));

        verticalLayout_12->addWidget(checkBoxImageFusion);


        gridLayout_14->addLayout(verticalLayout_12, 0, 0, 1, 1);


        verticalLayout_15->addWidget(groupBoxImageStitch);

        line_3 = new QFrame(tabImageProcess);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_15->addWidget(line_3);

        groupBoxCharRecognize = new QGroupBox(tabImageProcess);
        groupBoxCharRecognize->setObjectName(QString::fromUtf8("groupBoxCharRecognize"));
        gridLayout_17 = new QGridLayout(groupBoxCharRecognize);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        pushButtonOpenImage = new QPushButton(groupBoxCharRecognize);
        pushButtonOpenImage->setObjectName(QString::fromUtf8("pushButtonOpenImage"));
        pushButtonOpenImage->setCheckable(false);

        horizontalLayout_29->addWidget(pushButtonOpenImage);

        pushButtonStartRecognize = new QPushButton(groupBoxCharRecognize);
        pushButtonStartRecognize->setObjectName(QString::fromUtf8("pushButtonStartRecognize"));

        horizontalLayout_29->addWidget(pushButtonStartRecognize);


        verticalLayout_14->addLayout(horizontalLayout_29);

        groupBoxImageSize = new QGroupBox(groupBoxCharRecognize);
        groupBoxImageSize->setObjectName(QString::fromUtf8("groupBoxImageSize"));
        gridLayout_15 = new QGridLayout(groupBoxImageSize);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        labelImageWidth = new QLabel(groupBoxImageSize);
        labelImageWidth->setObjectName(QString::fromUtf8("labelImageWidth"));

        horizontalLayout_26->addWidget(labelImageWidth);

        lineEditImageWidth = new QLineEdit(groupBoxImageSize);
        lineEditImageWidth->setObjectName(QString::fromUtf8("lineEditImageWidth"));
        lineEditImageWidth->setFrame(false);
        lineEditImageWidth->setReadOnly(true);

        horizontalLayout_26->addWidget(lineEditImageWidth);


        verticalLayout_13->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        labelImageHeight = new QLabel(groupBoxImageSize);
        labelImageHeight->setObjectName(QString::fromUtf8("labelImageHeight"));

        horizontalLayout_27->addWidget(labelImageHeight);

        lineEditImageHeight = new QLineEdit(groupBoxImageSize);
        lineEditImageHeight->setObjectName(QString::fromUtf8("lineEditImageHeight"));
        lineEditImageHeight->setFrame(false);
        lineEditImageHeight->setReadOnly(true);

        horizontalLayout_27->addWidget(lineEditImageHeight);


        verticalLayout_13->addLayout(horizontalLayout_27);


        gridLayout_15->addLayout(verticalLayout_13, 0, 0, 1, 1);


        verticalLayout_14->addWidget(groupBoxImageSize);

        groupBoxRecognizeResult = new QGroupBox(groupBoxCharRecognize);
        groupBoxRecognizeResult->setObjectName(QString::fromUtf8("groupBoxRecognizeResult"));
        gridLayout_16 = new QGridLayout(groupBoxRecognizeResult);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        lineEditRecognizeResult = new QLineEdit(groupBoxRecognizeResult);
        lineEditRecognizeResult->setObjectName(QString::fromUtf8("lineEditRecognizeResult"));
        lineEditRecognizeResult->setFrame(false);
        lineEditRecognizeResult->setAlignment(Qt::AlignCenter);
        lineEditRecognizeResult->setReadOnly(true);
        lineEditRecognizeResult->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout_16->addWidget(lineEditRecognizeResult, 0, 0, 1, 1);


        verticalLayout_14->addWidget(groupBoxRecognizeResult);


        gridLayout_17->addLayout(verticalLayout_14, 0, 0, 1, 1);


        verticalLayout_15->addWidget(groupBoxCharRecognize);


        gridLayout_12->addLayout(verticalLayout_15, 0, 0, 1, 1);

        tabWidget->addTab(tabImageProcess, QString());

        horizontalLayout_8->addWidget(tabWidget);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 844, 25));
        QFont font4;
        font4.setPointSize(10);
        menuBar->setFont(font4);
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setFont(font4);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setFont(font4);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionSaveAs);
        menu->addSeparator();
        menu->addAction(actionExit);
        menu_2->addAction(actionCommonSetting);
        menu_2->addAction(actionCameraParam);
        menu_3->addAction(actionGray);
        menu_5->addAction(actionLookHelp);
        menu_5->addAction(actionAboutSystem);
        menu_5->addAction(actionAboutQt);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSaveAs);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCommonSetting);
        mainToolBar->addAction(actionCameraParam);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionGray);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAboutSystem);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderResponse, SIGNAL(valueChanged(int)), spinBoxResponse, SLOT(setValue(int)));
        QObject::connect(horizontalSliderPosLoop, SIGNAL(valueChanged(int)), spinBoxPosLoop, SLOT(setValue(int)));
        QObject::connect(horizontalSliderVelocityLoop, SIGNAL(valueChanged(int)), spinBoxVelocityLoop, SLOT(setValue(int)));
        QObject::connect(spinBoxResponse, SIGNAL(valueChanged(int)), horizontalSliderResponse, SLOT(setValue(int)));
        QObject::connect(spinBoxPosLoop, SIGNAL(valueChanged(int)), horizontalSliderPosLoop, SLOT(setValue(int)));
        QObject::connect(spinBoxVelocityLoop, SIGNAL(valueChanged(int)), horizontalSliderVelocityLoop, SLOT(setValue(int)));
        QObject::connect(horizontalSliderBright, SIGNAL(valueChanged(int)), spinBoxBright, SLOT(setValue(int)));
        QObject::connect(horizontalSliderHue, SIGNAL(valueChanged(int)), spinBoxHue, SLOT(setValue(int)));
        QObject::connect(horizontalSliderContrast, SIGNAL(valueChanged(int)), spinBoxContrast, SLOT(setValue(int)));
        QObject::connect(horizontalSliderSaturation, SIGNAL(valueChanged(int)), spinBoxSaturation, SLOT(setValue(int)));
        QObject::connect(spinBoxBright, SIGNAL(valueChanged(int)), horizontalSliderBright, SLOT(setValue(int)));
        QObject::connect(spinBoxHue, SIGNAL(valueChanged(int)), horizontalSliderHue, SLOT(setValue(int)));
        QObject::connect(spinBoxContrast, SIGNAL(valueChanged(int)), horizontalSliderContrast, SLOT(setValue(int)));
        QObject::connect(spinBoxSaturation, SIGNAL(valueChanged(int)), horizontalSliderSaturation, SLOT(setValue(int)));

        tabWidget->setCurrentIndex(0);
        comboBoxSerialPort->setCurrentIndex(3);
        comboBoxBaudRate->setCurrentIndex(3);
        comboBoxDataBits->setCurrentIndex(3);
        comboBoxParityBit->setCurrentIndex(0);
        comboBoxStopBit->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\345\244\204\347\220\206\347\263\273\347\273\237 IPS", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)...", nullptr));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\347\216\260\346\234\211\346\226\207\346\241\243", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\264\273\345\212\250\346\226\207\346\241\243", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)...", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSaveAs->setStatusTip(QApplication::translate("MainWindow", "\347\224\250\346\226\260\345\220\215\347\247\260\344\277\235\345\255\230\346\264\273\345\212\250\346\226\207\346\241\243", nullptr));
#endif // QT_NO_STATUSTIP
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionExit->setStatusTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272\345\272\224\347\224\250\347\250\213\345\272\217", nullptr));
#endif // QT_NO_STATUSTIP
        actionCommonSetting->setText(QApplication::translate("MainWindow", "\351\200\232\347\224\250\350\256\276\347\275\256(&S)...", nullptr));
#ifndef QT_NO_STATUSTIP
        actionCommonSetting->setStatusTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\347\233\270\346\234\272\346\213\215\346\221\204\345\233\276\345\203\217\347\232\204\345\260\272\345\257\270\345\222\214\347\233\270\346\234\272\347\232\204\345\267\245\344\275\234\346\226\271\345\274\217", nullptr));
#endif // QT_NO_STATUSTIP
        actionGray->setText(QApplication::translate("MainWindow", "\347\201\260\345\272\246\345\214\226(&G)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionGray->setStatusTip(QApplication::translate("MainWindow", "\345\257\271\346\211\200\351\200\211\345\233\276\345\203\217\350\277\233\350\241\214\347\201\260\345\272\246\344\272\214\345\200\274\345\214\226\345\244\204\347\220\206", nullptr));
#endif // QT_NO_STATUSTIP
        actionLookHelp->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251(&H)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionLookHelp->setStatusTip(QApplication::translate("MainWindow", "\351\223\276\346\216\245\345\210\260\347\275\221\347\253\231 http://markwy.com/", nullptr));
#endif // QT_NO_STATUSTIP
        actionAboutQt->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt(&Q)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionAboutQt->setStatusTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\274\200\345\217\221\346\241\206\346\236\266\344\277\241\346\201\257", nullptr));
#endif // QT_NO_STATUSTIP
        actionAboutSystem->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\347\263\273\347\273\237(&A)", nullptr));
#ifndef QT_NO_STATUSTIP
        actionAboutSystem->setStatusTip(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\272\224\347\224\250\347\250\213\345\272\217\344\277\241\346\201\257\343\200\201\347\211\210\346\234\254\345\217\267\345\222\214\347\211\210\346\235\203\344\277\241\346\201\257", nullptr));
#endif // QT_NO_STATUSTIP
        actionCameraParam->setText(QApplication::translate("MainWindow", "\347\233\270\346\234\272\345\217\202\346\225\260(&P)...", nullptr));
#ifndef QT_NO_STATUSTIP
        actionCameraParam->setStatusTip(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\213\215\346\221\204\345\233\276\345\203\217\346\227\266\347\232\204\345\217\202\346\225\260\350\260\203\346\225\264\357\274\214\345\214\205\346\213\254\347\231\275\345\271\263\350\241\241\343\200\201\346\233\235\345\205\211\350\241\245\345\201\277\347\255\211", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_TOOLTIP
        graphicsView->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#0000ff;\">\347\233\270\346\234\272\346\215\225\350\216\267\345\233\276\345\203\217\347\232\204\346\230\276\347\244\272\345\214\272\345\237\237</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        listWidget->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#5555ff;\">\345\215\225\345\207\273\347\274\251\347\225\245\345\233\276\345\217\257\351\242\204\350\247\210</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButtonStart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5555ff;\">\345\274\200\345\247\213\345\220\257\345\212\250\347\233\270\346\234\272</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonStart->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonGrab->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5555ff;\">\346\212\223\346\213\215\346\215\225\350\216\267\345\233\276\345\203\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonGrab->setText(QApplication::translate("MainWindow", "\346\212\223\346\213\215", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButtonStop->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5555ff;\">\345\201\234\346\255\242\347\233\270\346\234\272\345\267\245\344\275\234</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButtonStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        groupBoxMotorControl->setTitle(QApplication::translate("MainWindow", "\347\224\265\346\234\272\346\216\247\345\210\266", nullptr));
        groupBoxControlMethod->setTitle(QApplication::translate("MainWindow", "\346\216\247\345\210\266\346\226\271\345\274\217", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonTorqueMode->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'PingFang SC,Arial,\345\276\256\350\275\257\351\233\205\351\273\221,\345\256\213\344\275\223,simsun,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\351\200\232\350\277\207\345\244\226\351\203\250\346\250\241\346\213\237\351\207\217\347\232\204\350\276\223\345\205\245\346\210\226\347\233\264\346\216\245\345\234\260\345\235\200\347\232\204\350\265\213\345\200\274\350\256\276\345\256\232\347\224\265\346\234\272\350\275\264\345\257\271\345\244\226\350\276\223\345\207\272\350\275\254\347\237\251\347\232\204\345\244\247\345\260\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonTorqueMode->setText(QApplication::translate("MainWindow", "\350\275\254\347\237\251\346\250\241\345\274\217", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonPositionMode->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'PingFang SC,Arial,\345\276\256\350\275\257\351\233\205\351\273\221,\345\256\213\344\275\223,simsun,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\351\200\232\350\277\207\345\244\226\351\203\250\350\276\223\345\205\245\350\204\211\345\206\262\347\232\204\351\242\221\347\216\207\347\241\256\345\256\232\350\275\254\345\212\250\351\200\237\345\272\246\347\232\204\345\244\247\345\260\217\357\274\214\351\200\232\350\277\207\350\204\211\345\206\262\347\232\204\344\270\252\346\225\260\347\241\256\345\256\232\350\275\254\345\212\250\347\232\204\350\247\222\345\272\246</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonPositionMode->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\346\250\241\345\274\217", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonVelocityMode->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'PingFang SC,Arial,\345\276\256\350\275\257\351\233\205\351\273\221,\345\256\213\344\275\223,simsun,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\351\200\232\350\277\207\346\250\241\346\213\237\351\207\217\347\232\204\350\276\223\345\205\245\346\210\226\350\204\211\345\206\262\347\232\204\351\242\221\347\216\207\346\216\247\345\210\266\350\277\233\350\241\214\350\275\254\345\212\250\351\200\237\345\272\246</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonVelocityMode->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\346\250\241\345\274\217", nullptr));
        labelGainCompensate->setText(QApplication::translate("MainWindow", "\345\242\236\347\233\212\350\241\245\345\201\277\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        labelResponse->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\345\223\215\345\272\224\345\270\246\345\256\275\350\241\241\351\207\217\351\251\261\345\212\250\345\231\250\346\216\247\345\210\266\347\232\204\345\245\275\345\235\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelResponse->setText(QApplication::translate("MainWindow", "\345\223\215\345\272\224\357\274\232  ", nullptr));
#ifndef QT_NO_TOOLTIP
        labelPosLoop->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'PingFang SC,Arial,\345\276\256\350\275\257\351\233\205\351\273\221,\345\256\213\344\275\223,simsun,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\345\234\250\351\251\261\345\212\250\345\231\250\346\210\226\345\244\226\351\203\250\346\216\247\345\210\266\345\231\250\345\222\214\347\224\265\346\234\272\347\274\226\347\240\201\345\231\250\351\227\264\346\236\204\345\273\272</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelPosLoop->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256\347\216\257\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        labelVelocityLoop->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'PingFang SC,Arial,\345\276\256\350\275\257\351\233\205\351\273\221,\345\256\213\344\275\223,simsun,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\351\200\232\350\277\207\346\243\200\346\265\213\347\224\265\346\234\272\347\274\226\347\240\201\345\231\250\347\232\204\344\277\241\345\217\267\350\277\233\350\241\214\350\264\237\345\217\215\351\246\210PID\350\260\203\350\212\202</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelVelocityLoop->setText(QApplication::translate("MainWindow", "\351\200\237\345\272\246\347\216\257\357\274\232", nullptr));
        groupBoxCameraControl->setTitle(QApplication::translate("MainWindow", "\347\233\270\346\234\272\346\216\247\345\210\266", nullptr));
#ifndef QT_NO_TOOLTIP
        labelFocus->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff; background-color:#ffffff;\">\347\204\246\350\267\235\346\230\257\351\200\217\351\225\234\344\270\255\345\277\203\345\210\260\347\204\246\347\202\271\347\232\204\350\267\235\347\246\273\343\200\202</span></p><p><span style=\" font-size:10pt; color:#5500ff; background-color:#ffffff;\">\347\204\246\350\267\235\350\266\212\347\237\255\357\274\214\350\242\253\346\221\204\347\211\251\344\275\223\346\230\276\345\276\227\350\266\212\350\277\234\357\274\233</span></p><p><span style=\" font-size:10pt; color:#5500ff; background-color:#ffffff;\">\347\204\246\350\267\235\350\266\212\351\225\277\357\274\214\350\242\253\346\221\204\347\211\251\344\275\223\346\230\276\345\276\227\350\266\212\350\277\221</span></p><p><span style=\" font-size:10pt; color:#5500ff; background-color:#ffffff;\">(&quot;\346\213\211\350\277\233\346\213\211\350\277\234&quot;)</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelFocus->setText(QApplication::translate("MainWindow", "\347\204\246\350\267\235\357\274\232f = ", nullptr));
        comboBoxFocus->setItemText(0, QApplication::translate("MainWindow", "8", nullptr));
        comboBoxFocus->setItemText(1, QApplication::translate("MainWindow", "15", nullptr));
        comboBoxFocus->setItemText(2, QApplication::translate("MainWindow", "24", nullptr));
        comboBoxFocus->setItemText(3, QApplication::translate("MainWindow", "28", nullptr));
        comboBoxFocus->setItemText(4, QApplication::translate("MainWindow", "35", nullptr));
        comboBoxFocus->setItemText(5, QApplication::translate("MainWindow", "50", nullptr));
        comboBoxFocus->setItemText(6, QApplication::translate("MainWindow", "85", nullptr));
        comboBoxFocus->setItemText(7, QApplication::translate("MainWindow", "105", nullptr));
        comboBoxFocus->setItemText(8, QApplication::translate("MainWindow", "135", nullptr));
        comboBoxFocus->setItemText(9, QApplication::translate("MainWindow", "200", nullptr));
        comboBoxFocus->setItemText(10, QApplication::translate("MainWindow", "400", nullptr));
        comboBoxFocus->setItemText(11, QApplication::translate("MainWindow", "600", nullptr));
        comboBoxFocus->setItemText(12, QApplication::translate("MainWindow", "1200", nullptr));
        comboBoxFocus->setItemText(13, QApplication::translate("MainWindow", "2500", nullptr));

        labelMillimeter->setText(QApplication::translate("MainWindow", "\346\257\253\347\261\263", nullptr));
#ifndef QT_NO_TOOLTIP
        labelAperture->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\345\205\211\345\234\210\345\206\263\345\256\232\351\225\234\345\244\264\347\232\204\351\200\232\345\205\211\351\207\217\357\274\214\344\273\245\346\224\271\345\217\230\345\277\253\351\227\250\351\200\237\345\272\246\345\222\214\350\231\232\345\214\226\350\203\214\346\231\257\343\200\202</span></p><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\345\205\211\345\234\210\350\266\212\345\244\247\357\274\214\351\200\232\345\205\211\351\207\217\350\266\212\345\244\232\357\274\214\347\224\273\351\235\242\350\276\203\344\272\256\357\274\233\345\217\215\344\271\213\345\210\231\346\232\227</span></p><p><span style=\" font-size:10pt; color:#5500ff;\"><br/></span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelAperture->setText(QApplication::translate("MainWindow", "\345\205\211\345\234\210\357\274\232F = f / ", nullptr));
        comboBoxAperture->setItemText(0, QApplication::translate("MainWindow", "1.0", nullptr));
        comboBoxAperture->setItemText(1, QApplication::translate("MainWindow", "1.4", nullptr));
        comboBoxAperture->setItemText(2, QApplication::translate("MainWindow", "2.0", nullptr));
        comboBoxAperture->setItemText(3, QApplication::translate("MainWindow", "2.8", nullptr));
        comboBoxAperture->setItemText(4, QApplication::translate("MainWindow", "4.0", nullptr));
        comboBoxAperture->setItemText(5, QApplication::translate("MainWindow", "5.6", nullptr));
        comboBoxAperture->setItemText(6, QApplication::translate("MainWindow", "8.0", nullptr));
        comboBoxAperture->setItemText(7, QApplication::translate("MainWindow", "11", nullptr));
        comboBoxAperture->setItemText(8, QApplication::translate("MainWindow", "16", nullptr));
        comboBoxAperture->setItemText(9, QApplication::translate("MainWindow", "22", nullptr));
        comboBoxAperture->setItemText(10, QApplication::translate("MainWindow", "32", nullptr));
        comboBoxAperture->setItemText(11, QApplication::translate("MainWindow", "44", nullptr));
        comboBoxAperture->setItemText(12, QApplication::translate("MainWindow", "64", nullptr));

#ifndef QT_NO_TOOLTIP
        labelShutter->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\345\277\253\351\227\250\344\273\245\346\216\247\345\210\266\346\204\237\345\205\211\347\211\207\346\234\211\346\225\210\346\233\235\345\205\211\346\227\266\351\227\264\343\200\202</span></p><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\351\200\237\345\272\246\350\266\212\346\205\242\357\274\214\350\277\233\345\205\211\351\207\217\350\266\212\345\244\232\357\274\214\347\224\273\351\235\242\350\266\212\344\272\256\357\274\233\345\217\215\344\271\213\345\210\231\346\232\227\343\200\202</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelShutter->setText(QApplication::translate("MainWindow", "\345\277\253\351\227\250\357\274\2321 / ", nullptr));
        comboBoxShutter->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        comboBoxShutter->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        comboBoxShutter->setItemText(2, QApplication::translate("MainWindow", "4", nullptr));
        comboBoxShutter->setItemText(3, QApplication::translate("MainWindow", "8", nullptr));
        comboBoxShutter->setItemText(4, QApplication::translate("MainWindow", "15", nullptr));
        comboBoxShutter->setItemText(5, QApplication::translate("MainWindow", "30", nullptr));
        comboBoxShutter->setItemText(6, QApplication::translate("MainWindow", "60", nullptr));
        comboBoxShutter->setItemText(7, QApplication::translate("MainWindow", "125", nullptr));
        comboBoxShutter->setItemText(8, QApplication::translate("MainWindow", "250", nullptr));
        comboBoxShutter->setItemText(9, QApplication::translate("MainWindow", "500", nullptr));
        comboBoxShutter->setItemText(10, QApplication::translate("MainWindow", "1000", nullptr));
        comboBoxShutter->setItemText(11, QApplication::translate("MainWindow", "2000", nullptr));

        labelSecond->setText(QApplication::translate("MainWindow", "\347\247\222", nullptr));
#ifndef QT_NO_TOOLTIP
        labelISO->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">ISO\346\204\237\345\205\211\345\272\246\350\241\250\347\244\272</span><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\350\203\266\347\211\207\346\204\237\345\205\211\346\227\266\347\232\204\351\200\237\345\272\246\343\200\202</span></p><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\345\205\254\345\274\217\357\274\232S=0.8/H\357\274\210S\344\270\272\346\204\237\345\205\211\345\272\246\357\274\214H\344\270\272\346\233\235\345\205\211\351\207\217\357\274\211</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelISO->setText(QApplication::translate("MainWindow", "ISO\357\274\232", nullptr));
        comboBoxISO->setItemText(0, QApplication::translate("MainWindow", "AUTO", nullptr));
        comboBoxISO->setItemText(1, QApplication::translate("MainWindow", "100", nullptr));
        comboBoxISO->setItemText(2, QApplication::translate("MainWindow", "125", nullptr));
        comboBoxISO->setItemText(3, QApplication::translate("MainWindow", "160", nullptr));
        comboBoxISO->setItemText(4, QApplication::translate("MainWindow", "200", nullptr));
        comboBoxISO->setItemText(5, QApplication::translate("MainWindow", "250", nullptr));
        comboBoxISO->setItemText(6, QApplication::translate("MainWindow", "320", nullptr));
        comboBoxISO->setItemText(7, QApplication::translate("MainWindow", "400", nullptr));
        comboBoxISO->setItemText(8, QApplication::translate("MainWindow", "500", nullptr));
        comboBoxISO->setItemText(9, QApplication::translate("MainWindow", "640", nullptr));
        comboBoxISO->setItemText(10, QApplication::translate("MainWindow", "800", nullptr));
        comboBoxISO->setItemText(11, QApplication::translate("MainWindow", "1000", nullptr));
        comboBoxISO->setItemText(12, QApplication::translate("MainWindow", "1250", nullptr));
        comboBoxISO->setItemText(13, QApplication::translate("MainWindow", "1600", nullptr));
        comboBoxISO->setItemText(14, QApplication::translate("MainWindow", "2000", nullptr));
        comboBoxISO->setItemText(15, QApplication::translate("MainWindow", "2500", nullptr));
        comboBoxISO->setItemText(16, QApplication::translate("MainWindow", "3200", nullptr));
        comboBoxISO->setItemText(17, QApplication::translate("MainWindow", "4000", nullptr));
        comboBoxISO->setItemText(18, QApplication::translate("MainWindow", "5000", nullptr));
        comboBoxISO->setItemText(19, QApplication::translate("MainWindow", "6400", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tabDeviceControl), QApplication::translate("MainWindow", "\350\256\276\345\244\207\346\216\247\345\210\266", nullptr));
        tabWidget->setTabToolTip(tabWidget->indexOf(tabDeviceControl), QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\346\216\247\345\210\266\351\251\261\345\212\250\347\224\265\346\234\272\345\222\214\346\213\215\346\221\204\347\233\270\346\234\272\347\232\204\350\277\220\344\275\234</span></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBoxImageAdjust->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\346\233\264\346\224\271\345\233\276\345\203\217\347\232\204\350\247\206\350\247\211\346\204\237\345\217\227</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBoxImageAdjust->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\350\260\203\346\225\264", nullptr));
#ifndef QT_NO_TOOLTIP
        labelBright->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\350\241\250\347\244\272\350\211\262\345\275\251\347\232\204\346\230\216\346\232\227\347\250\213\345\272\246</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelBright->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246\357\274\232  ", nullptr));
#ifndef QT_NO_TOOLTIP
        labelHue->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\345\233\276\345\203\217\347\232\204\347\233\270\345\257\271\346\230\216\346\232\227\347\250\213\345\272\246</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelHue->setText(QApplication::translate("MainWindow", "\350\211\262\350\260\203\357\274\232  ", nullptr));
#ifndef QT_NO_TOOLTIP
        labelContrast->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\346\234\200\344\272\256\347\231\275\345\222\214\346\234\200\346\232\227\351\273\221\344\270\215\345\220\214\344\272\256\345\272\246\345\261\202\347\272\247\346\265\213\351\207\217</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelContrast->setText(QApplication::translate("MainWindow", "\345\257\271\346\257\224\345\272\246\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        labelSaturation->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\350\241\250\347\244\272</span><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\350\211\262\345\275\251\347\232\204\351\262\234\350\211\263\347\250\213\345\272\246</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelSaturation->setText(QApplication::translate("MainWindow", "\351\245\261\345\222\214\345\272\246\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBoxSerialComm->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\350\256\241\347\256\227\346\234\272\344\270\273\346\234\272\344\270\216\345\244\226\350\256\276\344\273\245\345\217\212\344\270\273\346\234\272\347\263\273\347\273\237\344\271\213\351\227\264\346\225\260\346\215\256\347\232\204\344\270\262\350\241\214\344\274\240\351\200\201</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBoxSerialComm->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\232\344\277\241", nullptr));
#ifndef QT_NO_TOOLTIP
        labelSerialPort->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\344\270\262\350\241\214\351\200\232\344\277\241\346\216\245\345\217\243</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelSerialPort->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        comboBoxSerialPort->setItemText(0, QApplication::translate("MainWindow", "COM1", nullptr));
        comboBoxSerialPort->setItemText(1, QApplication::translate("MainWindow", "COM2", nullptr));
        comboBoxSerialPort->setItemText(2, QApplication::translate("MainWindow", "COM3", nullptr));
        comboBoxSerialPort->setItemText(3, QApplication::translate("MainWindow", "COM4", nullptr));
        comboBoxSerialPort->setItemText(4, QApplication::translate("MainWindow", "COM5", nullptr));
        comboBoxSerialPort->setItemText(5, QApplication::translate("MainWindow", "COM6", nullptr));

        comboBoxSerialPort->setCurrentText(QApplication::translate("MainWindow", "COM4", nullptr));
#ifndef QT_NO_TOOLTIP
        labelBaudRate->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\346\257\217\347\247\222\351\222\237\351\200\232\350\277\207\344\277\241\351\201\223\344\274\240\350\276\223\347\232\204\347\240\201\345\205\203\346\225\260\357\274\214\345\215\225\344\275\215\357\274\232baud</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelBaudRate->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        comboBoxBaudRate->setItemText(0, QApplication::translate("MainWindow", "1200", nullptr));
        comboBoxBaudRate->setItemText(1, QApplication::translate("MainWindow", "2400", nullptr));
        comboBoxBaudRate->setItemText(2, QApplication::translate("MainWindow", "4800", nullptr));
        comboBoxBaudRate->setItemText(3, QApplication::translate("MainWindow", "9600", nullptr));
        comboBoxBaudRate->setItemText(4, QApplication::translate("MainWindow", "19200", nullptr));
        comboBoxBaudRate->setItemText(5, QApplication::translate("MainWindow", "115200", nullptr));

        comboBoxBaudRate->setCurrentText(QApplication::translate("MainWindow", "9600", nullptr));
#ifndef QT_NO_TOOLTIP
        labelDataBits->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\344\270\200\347\273\204\346\225\260\346\215\256\345\256\236\351\231\205\345\214\205\345\220\253\347\232\204\346\225\260\346\215\256\344\275\215\346\225\260</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelDataBits->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        comboBoxDataBits->setItemText(0, QApplication::translate("MainWindow", "5", nullptr));
        comboBoxDataBits->setItemText(1, QApplication::translate("MainWindow", "6", nullptr));
        comboBoxDataBits->setItemText(2, QApplication::translate("MainWindow", "7", nullptr));
        comboBoxDataBits->setItemText(3, QApplication::translate("MainWindow", "8", nullptr));

        comboBoxDataBits->setCurrentText(QApplication::translate("MainWindow", "8", nullptr));
#ifndef QT_NO_TOOLTIP
        labelParityBit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\345\245\207\345\201\266\346\240\241\351\252\214\344\275\215\357\274\214\345\234\250\346\225\260\346\215\256\351\200\232\344\277\241\344\270\255\344\277\235\350\257\201\346\225\260\346\215\256\347\232\204\346\234\211\346\225\210\346\200\247</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelParityBit->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        comboBoxParityBit->setItemText(0, QApplication::translate("MainWindow", "NONE", nullptr));
        comboBoxParityBit->setItemText(1, QApplication::translate("MainWindow", "\345\245\207\346\240\241\351\252\214", nullptr));
        comboBoxParityBit->setItemText(2, QApplication::translate("MainWindow", "\345\201\266\346\240\241\351\252\214", nullptr));

        comboBoxParityBit->setCurrentText(QApplication::translate("MainWindow", "NONE", nullptr));
#ifndef QT_NO_TOOLTIP
        labelStopBit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial,\345\256\213\344\275\223,sans-serif'; font-size:10pt; color:#5500ff; background-color:#ffffff;\">\344\275\215\344\272\216\346\234\200\345\220\216\357\274\214\347\224\250\344\273\245\346\240\207\345\277\227\344\270\200\344\270\252\345\255\227\347\254\246\344\274\240\351\200\201\347\232\204\347\273\223\346\235\237</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelStopBit->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        comboBoxStopBit->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        comboBoxStopBit->setItemText(1, QApplication::translate("MainWindow", "1.5", nullptr));
        comboBoxStopBit->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));

        comboBoxStopBit->setCurrentText(QApplication::translate("MainWindow", "1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabParamSetting), QApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        tabWidget->setTabToolTip(tabWidget->indexOf(tabParamSetting), QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\350\256\276\347\275\256\350\260\203\346\225\264\345\233\276\345\203\217\345\222\214\344\270\262\345\217\243\351\200\232\344\277\241\347\232\204\345\217\202\346\225\260</span></p></body></html>", nullptr));
        groupBoxImageStitch->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\346\213\274\346\216\245 Image Stitching", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBoxCameraModel->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\346\266\210\351\231\244\351\225\234\345\203\217\346\211\255\346\233\262</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBoxCameraModel->setTitle(QApplication::translate("MainWindow", "\347\233\270\346\234\272\346\240\207\345\256\232\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxKappa->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\347\241\256\345\256\232\346\250\241\346\213\237\345\276\204\345\220\221\351\200\217\351\225\234\347\225\270\345\217\230\347\232\204\345\217\202\346\225\260</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxKappa->setText(QApplication::translate("MainWindow", "kappa", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxAspect->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\347\241\256\345\256\232\345\203\217\347\264\240\347\232\204\345\256\275\351\253\230\346\257\224\357\274\214\345\220\246\345\210\231\345\260\206\345\205\266\350\256\276\347\275\256\344\270\2721</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxAspect->setText(QApplication::translate("MainWindow", "aspect", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxFocus->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\346\214\207\345\256\232\350\256\241\347\256\227\347\204\246\350\267\235f</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxFocus->setText(QApplication::translate("MainWindow", "focus", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxSkew->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\347\241\256\345\256\232\345\233\276\345\203\217\350\275\264\347\232\204\345\201\217\346\226\234\357\274\214\345\220\246\345\210\231\345\260\206\345\205\266\350\256\276\347\275\256\344\270\2720</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxSkew->setText(QApplication::translate("MainWindow", "skew", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxPrincipalPoint->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\350\256\241\347\256\227\346\221\204\345\203\217\346\234\272\347\232\204\344\270\273\347\202\271\357\274\210u\357\274\214v\357\274\211\345\220\246\345\210\231\345\260\206\344\270\273\347\202\271\350\256\276\347\275\256\344\270\272(ImageWidth/2\357\274\214ImageHeight/2)</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxPrincipalPoint->setText(QApplication::translate("MainWindow", "principal_point", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBoxCornerDection->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\346\217\220\345\217\226\347\211\271\345\276\201\347\202\271\357\274\214\344\271\213\345\220\216\347\211\271\345\276\201\347\202\271\345\275\222\344\270\200\345\214\226\344\272\222\347\233\270\345\214\271\351\205\215</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBoxCornerDection->setTitle(QApplication::translate("MainWindow", "\350\247\222\347\202\271\346\243\200\346\265\213\347\256\227\346\263\225\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonHarri->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">Harri\347\256\227\346\263\225</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonHarri->setText(QApplication::translate("MainWindow", "Harri\347\256\227\346\263\225", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonFoerstner->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">F\303\266rstner\347\256\227\346\263\225</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonFoerstner->setText(QApplication::translate("MainWindow", "F\303\266rstner\347\256\227\346\263\225", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\345\211\224\351\231\244\350\257\257\345\214\271\351\205\215\347\202\271\357\274\214\344\274\260\347\256\227\345\215\225\345\272\224\346\200\247\347\237\251\351\230\265</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        groupBox_9->setStatusTip(QApplication::translate("MainWindow", "RASAC = Random Sample Consensus ", nullptr));
#endif // QT_NO_STATUSTIP
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\351\232\217\346\234\272\346\212\275\346\240\267\344\270\200\350\207\264\346\200\247\347\256\227\346\263\225 RASAC\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonGoldStandard->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\344\274\230\345\214\226\344\270\272\350\276\203\345\207\206\347\241\256\347\232\204\345\217\230\346\215\242\347\237\251\351\230\265</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonGoldStandard->setText(QApplication::translate("MainWindow", "gold_standard", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButtonStandard->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\346\240\207\345\207\206\345\244\204\347\220\206\347\256\227\346\263\225</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButtonStandard->setText(QApplication::translate("MainWindow", "standard", nullptr));
#ifndef QT_NO_TOOLTIP
        checkBoxImageFusion->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\344\275\277\347\224\250\346\224\271\350\277\233\347\232\204\345\212\240\346\235\203\350\236\215\345\220\210\357\274\214\345\212\240\346\235\203\345\271\263\346\273\221\346\263\225\357\274\214\344\275\277\346\216\245\347\274\235\345\244\204\345\271\263\346\273\221\357\274\214\345\217\257\350\203\275\344\274\232\345\242\236\345\212\240\350\200\227\346\227\266</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        checkBoxImageFusion->setText(QApplication::translate("MainWindow", "\345\233\276\345\203\217\350\236\215\345\220\210\357\274\210\345\217\257\351\200\211\357\274\211", nullptr));
        groupBoxCharRecognize->setTitle(QApplication::translate("MainWindow", "\345\255\227\347\254\246\350\257\206\345\210\253 Character Recognition", nullptr));
        pushButtonOpenImage->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\345\203\217...", nullptr));
        pushButtonStartRecognize->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\257\206\345\210\253", nullptr));
        groupBoxImageSize->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217\345\260\272\345\257\270", nullptr));
#ifndef QT_NO_TOOLTIP
        labelImageWidth->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\350\257\273\345\217\226\345\233\276\345\203\217\347\232\204\345\256\275\345\272\246\357\274\214\345\215\225\344\275\215\357\274\232\345\203\217\347\264\240</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelImageWidth->setText(QApplication::translate("MainWindow", "\345\256\275\345\272\246\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        labelImageHeight->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\350\257\273\345\217\226\345\233\276\345\203\217\347\232\204\351\253\230\345\272\246\357\274\214\345\215\225\344\275\215\357\274\232\345\203\217\347\264\240</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        labelImageHeight->setText(QApplication::translate("MainWindow", "\351\253\230\345\272\246\357\274\232", nullptr));
        groupBoxRecognizeResult->setTitle(QApplication::translate("MainWindow", "\350\257\206\345\210\253\347\273\223\346\236\234", nullptr));
        lineEditRecognizeResult->setPlaceholderText(QApplication::translate("MainWindow", "Here is the result.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabImageProcess), QApplication::translate("MainWindow", "\345\233\276\345\203\217\345\244\204\347\220\206", nullptr));
        tabWidget->setTabToolTip(tabWidget->indexOf(tabImageProcess), QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#5500ff;\">\345\214\205\346\213\254\345\233\276\345\203\217\346\213\274\346\216\245\345\222\214\345\255\227\347\254\246\350\257\206\345\210\253</span></p></body></html>", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\233\270\346\234\272(&C)", nullptr));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\233\276\345\203\217(&I)", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267(&T)", nullptr));
        menu_5->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
