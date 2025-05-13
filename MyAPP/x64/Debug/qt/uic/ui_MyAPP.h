/********************************************************************************
** Form generated from reading UI file 'MyAPP.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYAPP_H
#define UI_MYAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyAPPClass
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *MyAPPClass)
    {
        if (MyAPPClass->objectName().isEmpty())
            MyAPPClass->setObjectName(QString::fromUtf8("MyAPPClass"));
        MyAPPClass->resize(600, 400);
        verticalLayoutWidget = new QWidget(MyAPPClass);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(70, 40, 331, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(MyAPPClass);

        QMetaObject::connectSlotsByName(MyAPPClass);
    } // setupUi

    void retranslateUi(QWidget *MyAPPClass)
    {
        MyAPPClass->setWindowTitle(QCoreApplication::translate("MyAPPClass", "MyAPP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyAPPClass: public Ui_MyAPPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYAPP_H
