/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "camviewer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSlider *Slider;
    QSlider *SL5;
    QSlider *horizontalSlider;
    QSlider *SL4;
    QPushButton *pushButton;
    QSlider *SL6;
    QSlider *SL2;
    QSlider *SL3;
    QSlider *SL1;
    CamViewer *camViewer;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Slider = new QSlider(centralwidget);
        Slider->setObjectName(QString::fromUtf8("Slider"));
        Slider->setMaximum(255);
        Slider->setSingleStep(1);
        Slider->setPageStep(1);
        Slider->setSliderPosition(0);
        Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(Slider, 2, 1, 1, 1);

        SL5 = new QSlider(centralwidget);
        SL5->setObjectName(QString::fromUtf8("SL5"));
        SL5->setMaximum(255);
        SL5->setValue(255);
        SL5->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SL5, 8, 1, 1, 1);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider, 3, 1, 1, 1);

        SL4 = new QSlider(centralwidget);
        SL4->setObjectName(QString::fromUtf8("SL4"));
        SL4->setMaximum(179);
        SL4->setValue(179);
        SL4->setSliderPosition(179);
        SL4->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SL4, 7, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        SL6 = new QSlider(centralwidget);
        SL6->setObjectName(QString::fromUtf8("SL6"));
        SL6->setMaximum(255);
        SL6->setValue(255);
        SL6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SL6, 9, 1, 1, 1);

        SL2 = new QSlider(centralwidget);
        SL2->setObjectName(QString::fromUtf8("SL2"));
        SL2->setMaximum(255);
        SL2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SL2, 5, 1, 1, 1);

        SL3 = new QSlider(centralwidget);
        SL3->setObjectName(QString::fromUtf8("SL3"));
        SL3->setMaximum(255);
        SL3->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SL3, 6, 1, 1, 1);

        SL1 = new QSlider(centralwidget);
        SL1->setObjectName(QString::fromUtf8("SL1"));
        SL1->setMaximum(179);
        SL1->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(SL1, 4, 1, 1, 1);

        camViewer = new CamViewer(centralwidget);
        camViewer->setObjectName(QString::fromUtf8("camViewer"));
        camViewer->setMinimumSize(QSize(320, 240));
        camViewer->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(camViewer, 0, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 9, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 8, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Slider, SIGNAL(valueChanged(int)), MainWindow, SLOT(slider(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), MainWindow, SLOT(scale(int)));
        QObject::connect(SL1, SIGNAL(valueChanged(int)), MainWindow, SLOT(slide1(int)));
        QObject::connect(SL2, SIGNAL(valueChanged(int)), MainWindow, SLOT(slide2(int)));
        QObject::connect(SL3, SIGNAL(valueChanged(int)), MainWindow, SLOT(slide3(int)));
        QObject::connect(SL4, SIGNAL(valueChanged(int)), MainWindow, SLOT(slide4(int)));
        QObject::connect(SL5, SIGNAL(valueChanged(int)), MainWindow, SLOT(slide5(int)));
        QObject::connect(SL6, SIGNAL(valueChanged(int)), MainWindow, SLOT(slide6(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
