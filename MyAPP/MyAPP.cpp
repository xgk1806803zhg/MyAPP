#include "MyAPP.h"  
#include "./AlgorithmicRegions/AlgTreeWidget.h"  

MyAPP::MyAPP(QWidget *parent)  
   : QWidget(parent)  
{  
   ui.setupUi(this);  
   this->setLayout(ui.verticalLayout);  

   AlgTreeWidget* treeWidget = new AlgTreeWidget();  
   ui.verticalLayout->addWidget(treeWidget);  
   treeWidget->addItem(0, "item1"); 
   treeWidget->addItem(1, "item2"); 
   treeWidget->addItem(1, "item3"); 
}  

MyAPP::~MyAPP()  
{  

}
