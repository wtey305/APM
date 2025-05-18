/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSlider *colorCountSlider;
    QLabel *colorDisplayWidget;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QTextEdit *outputTextEdit;
    QPushButton *selectColorButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *colorCountLabel;
    QPushButton *exampleButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(844, 576);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Images/Logo_icon.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:rgb(255, 245, 255)\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        colorCountSlider = new QSlider(centralwidget);
        colorCountSlider->setObjectName("colorCountSlider");
        colorCountSlider->setMinimumSize(QSize(200, 30));
        colorCountSlider->setMaximumSize(QSize(300, 16777215));
        colorCountSlider->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {\n"
"   background-color:rgb(255, 230, 255);\n"
"	border:2px solid rgb(255, 200, 255);\n"
"}\n"
""));
        colorCountSlider->setMinimum(2);
        colorCountSlider->setMaximum(10);
        colorCountSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(colorCountSlider, 3, 1, 1, 1);

        colorDisplayWidget = new QLabel(centralwidget);
        colorDisplayWidget->setObjectName("colorDisplayWidget");
        colorDisplayWidget->setMinimumSize(QSize(450, 300));
        colorDisplayWidget->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background: rgb(255, 255, 255)\n"
"}"));
        colorDisplayWidget->setTextFormat(Qt::TextFormat::PlainText);
        colorDisplayWidget->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(colorDisplayWidget, 0, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 100));

        verticalLayout->addWidget(label);

        outputTextEdit = new QTextEdit(centralwidget);
        outputTextEdit->setObjectName("outputTextEdit");
        outputTextEdit->setMinimumSize(QSize(200, 50));
        outputTextEdit->setMaximumSize(QSize(300, 100));
        outputTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"	background-color:rgb(255, 230, 255);\n"
"	border:1px solid rgb(255, 200, 255);\n"
"}\n"
"QTextEdit::hover{\n"
"	background-color:rgb(255, 210, 255);\n"
"}"));

        verticalLayout->addWidget(outputTextEdit);


        gridLayout->addLayout(verticalLayout, 4, 1, 1, 1);

        selectColorButton = new QPushButton(centralwidget);
        selectColorButton->setObjectName("selectColorButton");
        selectColorButton->setMinimumSize(QSize(200, 100));
        selectColorButton->setMaximumSize(QSize(200, 16777215));
        selectColorButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(255, 230, 255);\n"
"	border:1px solid rgb(255, 200, 255);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgb(255, 210, 255);\n"
"}"));

        gridLayout->addWidget(selectColorButton, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);

        colorCountLabel = new QLabel(centralwidget);
        colorCountLabel->setObjectName("colorCountLabel");
        QFont font;
        font.setPointSize(11);
        colorCountLabel->setFont(font);

        gridLayout->addWidget(colorCountLabel, 2, 1, 1, 1);

        exampleButton = new QPushButton(centralwidget);
        exampleButton->setObjectName("exampleButton");
        exampleButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(255, 230, 255);\n"
"	border:1px solid rgb(255, 200, 255);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgb(255, 210, 255);\n"
"}"));

        gridLayout->addWidget(exampleButton, 3, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 844, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "colors", nullptr));
        colorDisplayWidget->setText(QCoreApplication::translate("MainWindow", "\320\267\320\264\320\265\321\201\321\214 \320\261\321\203\320\264\320\265\321\202 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\321\213\320\271 \321\206\320\262\320\265\321\202", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\217 \321\206\320\262\320\265\321\202\320\276\320\262:", nullptr));
        selectColorButton->setText(QCoreApplication::translate("MainWindow", "\320\262\321\213\320\261\321\200\320\260\321\202\321\214 \321\206\320\262\320\265\321\202", nullptr));
        colorCountLabel->setText(QCoreApplication::translate("MainWindow", " 2", nullptr));
        exampleButton->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\321\200\320\270\320\274\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
