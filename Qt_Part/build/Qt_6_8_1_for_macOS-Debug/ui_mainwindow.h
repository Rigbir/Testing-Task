/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *comboGlow;
    QPushButton *OffButton;
    QPushButton *OnButton;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkFirst;
    QCheckBox *checkSecond;
    QCheckBox *checkThird;
    QCheckBox *checkFourth;
    QCheckBox *checkFifth;
    QCheckBox *checkAll;
    QComboBox *comboBlink;
    QSlider *brightnessScroll;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(784, 508);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(784, 508));
        MainWindow->setMaximumSize(QSize(784, 508));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #d3d7da;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 10, 701, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(110);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("background-color: #728495;\n"
""));
        label->setFrameShape(QFrame::Shape::WinPanel);
        label->setFrameShadow(QFrame::Shadow::Plain);
        label->setLineWidth(1);
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: #728495;\n"
""));
        label_2->setFrameShape(QFrame::Shape::WinPanel);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        comboGlow = new QComboBox(centralwidget);
        comboGlow->addItem(QString());
        comboGlow->addItem(QString());
        comboGlow->addItem(QString());
        comboGlow->setObjectName("comboGlow");
        comboGlow->setGeometry(QRect(70, 70, 231, 31));
        comboGlow->setAutoFillBackground(false);
        comboGlow->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    font: bold 12px;\n"
"    color: white;\n"
"    background-color: #2B923C; \n"
"    border: 2px solid #2E7D32;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #388E3C;\n"
"    color: white;\n"
"    selection-background-color: #66BB6A;\n"
"    selection-color: black;\n"
"    border-radius: 5px;\n"
"}"));
        comboGlow->setEditable(false);
        comboGlow->setIconSize(QSize(16, 16));
        OffButton = new QPushButton(centralwidget);
        OffButton->setObjectName("OffButton");
        OffButton->setGeometry(QRect(280, 440, 111, 41));
        OffButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #924949;\n"
"    border: 2px solid #111;\n"
"    border-radius: 8px;\n"
"    color: #111;\n"
"    font-size: 26px;\n"
"    height: 48px;\n"
"    padding: 0 25px;\n"
"    text-align: center;\n"
"    position: relative;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #8D2929; \n"
"    \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #8D2929; \n"
"}\n"
"\n"
"QPushButton::before {\n"
"    background-color: #111;\n"
"    border-radius: 8px;\n"
"    content: \"\";\n"
"    height: 48px;\n"
"    left: 0;\n"
"    width: 100%;\n"
"    position: absolute;\n"
"    top: -2px;\n"
"    z-index: -1;\n"
"}\n"
"\n"
"@media (min-width: 768px) {\n"
"    QPushButton {\n"
"        padding: 0 40px;\n"
"    }\n"
"}\n"
""));
        OnButton = new QPushButton(centralwidget);
        OnButton->setObjectName("OnButton");
        OnButton->setGeometry(QRect(390, 440, 111, 41));
        OnButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #2B923C;\n"
"    border: 2px solid #111;\n"
"    border-radius: 8px;\n"
"    color: white;\n"
"    font-size: 26px;\n"
"    height: 48px;\n"
"    padding: 0 25px;\n"
"    text-align: center;\n"
"    position: relative;\n"
"    outline: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #217930; \n"
"    \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #217930; \n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 280, 235, 39));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: #728495;\n"
""));
        label_3->setFrameShape(QFrame::Shape::WinPanel);
        label_3->setFrameShadow(QFrame::Shadow::Plain);
        label_3->setLineWidth(1);
        label_3->setTextFormat(Qt::TextFormat::AutoText);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 350, 761, 60));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkFirst = new QCheckBox(layoutWidget1);
        checkFirst->setObjectName("checkFirst");
        checkFirst->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width:30px;\n"
"	height: 30px;\n"
"	background-color: #f5f5dc;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"	image: url(:/images/galochka.png) 0 0 0 0 stretch stretch;\n"
"}"));
        checkFirst->setAutoExclusive(true);
        checkFirst->setTristate(false);

        horizontalLayout->addWidget(checkFirst);

        checkSecond = new QCheckBox(layoutWidget1);
        checkSecond->setObjectName("checkSecond");
        checkSecond->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width:30px;\n"
"	height: 30px;\n"
"	background-color: #f5f5dc;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"	image: url(:/images/galochka.png) 0 0 0 0 stretch stretch;\n"
"}"));
        checkSecond->setCheckable(true);
        checkSecond->setChecked(false);
        checkSecond->setAutoRepeat(false);
        checkSecond->setAutoExclusive(true);
        checkSecond->setTristate(false);

        horizontalLayout->addWidget(checkSecond);

        checkThird = new QCheckBox(layoutWidget1);
        checkThird->setObjectName("checkThird");
        checkThird->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width:30px;\n"
"	height: 30px;\n"
"	background-color: #f5f5dc;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"	image: url(:/images/galochka.png) 0 0 0 0 stretch stretch;\n"
"}"));
        checkThird->setAutoExclusive(true);

        horizontalLayout->addWidget(checkThird);

        checkFourth = new QCheckBox(layoutWidget1);
        checkFourth->setObjectName("checkFourth");
        checkFourth->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width:30px;\n"
"	height: 30px;\n"
"	background-color: #f5f5dc;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"	image: url(:/images/galochka.png) 0 0 0 0 stretch stretch;\n"
"}"));
        checkFourth->setChecked(false);
        checkFourth->setAutoRepeat(false);
        checkFourth->setAutoExclusive(true);

        horizontalLayout->addWidget(checkFourth);

        checkFifth = new QCheckBox(layoutWidget1);
        checkFifth->setObjectName("checkFifth");
        checkFifth->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width:30px;\n"
"	height: 30px;\n"
"	background-color: #f5f5dc;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"	image: url(:/images/galochka.png) 0 0 0 0 stretch stretch;\n"
"}"));
        checkFifth->setAutoExclusive(true);

        horizontalLayout->addWidget(checkFifth);

        checkAll = new QCheckBox(layoutWidget1);
        checkAll->setObjectName("checkAll");
        checkAll->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"	font-size: 25px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"	width:30px;\n"
"	height: 30px;\n"
"	background-color: #f5f5dc;\n"
"	border-radius: 7px;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"	image: url(:/images/galochka.png) 0 0 0 0 stretch stretch;\n"
"}"));
        checkAll->setAutoExclusive(true);

        horizontalLayout->addWidget(checkAll);

        comboBlink = new QComboBox(centralwidget);
        comboBlink->addItem(QString());
        comboBlink->addItem(QString());
        comboBlink->addItem(QString());
        comboBlink->addItem(QString());
        comboBlink->setObjectName("comboBlink");
        comboBlink->setGeometry(QRect(490, 70, 231, 31));
        comboBlink->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"    width: 50px;\n"
"    height: 30px;\n"
"    font: bold 12px;\n"
"    color: white;\n"
"    background-color: #2B923C; \n"
"    border: 2px solid #2E7D32;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: #388E3C; \n"
"    color: white;\n"
"    selection-background-color: #66BB6A;\n"
"    selection-color: black;\n"
"    border-radius: 5px; \n"
"}"));
        comboBlink->setEditable(false);
        comboBlink->setIconSize(QSize(16, 16));
        brightnessScroll = new QSlider(centralwidget);
        brightnessScroll->setObjectName("brightnessScroll");
        brightnessScroll->setGeometry(QRect(100, 130, 160, 60));
        brightnessScroll->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    background: transparent;\n"
"    min-height: 60px; \n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    border: 1px solid #1e90ff;\n"
"    background: #3b3b3b;\n"
"    height: 15px; \n"
"    border-radius: 15px;\n"
"    margin: 0px; \n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    width: 30px;\n"
"    height: 30px;\n"
"    margin: -10px 0; \n"
"    border: 2px solid #1e90ff;\n"
"    border-radius: 15px;\n"
"    background: #2e2e2e;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: #4c4c4c;\n"
"    height: 15px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #1e90ff;\n"
"    height: 15px; \n"
"    border-radius: 10px;\n"
"}\n"
""));
        brightnessScroll->setOrientation(Qt::Orientation::Horizontal);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 784, 24));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#544169;\">Glow Modes</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#544169;\">Blink Frequency</span></p></body></html>", nullptr));
        comboGlow->setItemText(0, QCoreApplication::translate("MainWindow", "Off", nullptr));
        comboGlow->setItemText(1, QCoreApplication::translate("MainWindow", "Constant", nullptr));
        comboGlow->setItemText(2, QCoreApplication::translate("MainWindow", "Variable", nullptr));

        OffButton->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        OnButton->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#544169;\">Diods</span></p></body></html>", nullptr));
        checkFirst->setText(QCoreApplication::translate("MainWindow", "First", nullptr));
        checkSecond->setText(QCoreApplication::translate("MainWindow", "Second", nullptr));
        checkThird->setText(QCoreApplication::translate("MainWindow", "Third", nullptr));
        checkFourth->setText(QCoreApplication::translate("MainWindow", "Fourth", nullptr));
        checkFifth->setText(QCoreApplication::translate("MainWindow", "Fifth", nullptr));
        checkAll->setText(QCoreApplication::translate("MainWindow", "All", nullptr));
        comboBlink->setItemText(0, QCoreApplication::translate("MainWindow", "Off", nullptr));
        comboBlink->setItemText(1, QCoreApplication::translate("MainWindow", "Fast", nullptr));
        comboBlink->setItemText(2, QCoreApplication::translate("MainWindow", "Average", nullptr));
        comboBlink->setItemText(3, QCoreApplication::translate("MainWindow", "Slow", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
