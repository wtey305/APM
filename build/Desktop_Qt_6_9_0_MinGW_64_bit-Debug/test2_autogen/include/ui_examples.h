/********************************************************************************
** Form generated from reading UI file 'examples.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLES_H
#define UI_EXAMPLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Examples
{
public:
    QLabel *showTop;
    QLabel *showBottom;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *changeBottomButton;
    QPushButton *changeTopButton;

    void setupUi(QDialog *Examples)
    {
        if (Examples->objectName().isEmpty())
            Examples->setObjectName("Examples");
        Examples->resize(600, 600);
        Examples->setMinimumSize(QSize(600, 600));
        Examples->setMaximumSize(QSize(600, 600));
        Examples->setStyleSheet(QString::fromUtf8("QDialog{\n"
"background-color:rgb(255, 245, 255)\n"
"}"));
        showTop = new QLabel(Examples);
        showTop->setObjectName("showTop");
        showTop->setGeometry(QRect(80, 80, 400, 170));
        showTop->setMinimumSize(QSize(400, 170));
        showTop->setMaximumSize(QSize(400, 170));
        showTop->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background: rgb(255, 255, 255)\n"
"}"));
        showBottom = new QLabel(Examples);
        showBottom->setObjectName("showBottom");
        showBottom->setGeometry(QRect(80, 250, 400, 230));
        showBottom->setMinimumSize(QSize(400, 230));
        showBottom->setMaximumSize(QSize(400, 230));
        showBottom->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background: rgb(255, 255, 255)\n"
"}"));
        horizontalLayoutWidget = new QWidget(Examples);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(80, 490, 401, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        changeBottomButton = new QPushButton(horizontalLayoutWidget);
        changeBottomButton->setObjectName("changeBottomButton");
        changeBottomButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(255, 230, 255);\n"
"	border:1px solid rgb(255, 200, 255);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgb(255, 210, 255);\n"
"}"));

        horizontalLayout->addWidget(changeBottomButton);

        changeTopButton = new QPushButton(horizontalLayoutWidget);
        changeTopButton->setObjectName("changeTopButton");
        changeTopButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(255, 230, 255);\n"
"	border:1px solid rgb(255, 200, 255);\n"
"}\n"
"QPushButton::hover{\n"
"	background-color:rgb(255, 210, 255);\n"
"}"));

        horizontalLayout->addWidget(changeTopButton);


        retranslateUi(Examples);

        QMetaObject::connectSlotsByName(Examples);
    } // setupUi

    void retranslateUi(QDialog *Examples)
    {
        Examples->setWindowTitle(QCoreApplication::translate("Examples", "Examples", nullptr));
        showTop->setText(QString());
        showBottom->setText(QString());
        changeBottomButton->setText(QCoreApplication::translate("Examples", "\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\275\320\270\320\267", nullptr));
        changeTopButton->setText(QCoreApplication::translate("Examples", "\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\262\320\265\321\200\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Examples: public Ui_Examples {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLES_H
