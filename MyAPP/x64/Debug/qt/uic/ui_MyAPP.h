/********************************************************************************
** Form generated from reading UI file 'MyAPP.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYAPP_H
#define UI_MYAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyAPPClass
{
public:

    void setupUi(QWidget *MyAPPClass)
    {
        if (MyAPPClass->objectName().isEmpty())
            MyAPPClass->setObjectName(QString::fromUtf8("MyAPPClass"));
        MyAPPClass->resize(600, 400);

        retranslateUi(MyAPPClass);

        QMetaObject::connectSlotsByName(MyAPPClass);
    } // setupUi

    void retranslateUi(QWidget *MyAPPClass)
    {
        MyAPPClass->setWindowTitle(QApplication::translate("MyAPPClass", "MyAPP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyAPPClass: public Ui_MyAPPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYAPP_H
