#pragma once

#include <QtWidgets/QWidget>
#include "ui_MyAPP.h"

class MyAPP : public QWidget
{
    Q_OBJECT

public:
    MyAPP(QWidget *parent = nullptr); 
    ~MyAPP();
 
private:
    Ui::MyAPPClass ui;
};
 