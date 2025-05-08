#include "MyAPP.h"

MyAPP::MyAPP(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    this->setLayout(ui.verticalLayout);
}

MyAPP::~MyAPP()
{
      
}
