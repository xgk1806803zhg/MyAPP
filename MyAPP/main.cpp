#include "MyAPP.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyAPP w;
    w.show();
    return a.exec();
}






//#include <QApplication>
//#include <QTreeWidget>
//#include <QTreeWidgetItem>
//
//int main(int argc, char* argv[]) {
//    QApplication app(argc, argv);
//
//    // 创建 TreeWidget
//    QTreeWidget treeWidget;
//    treeWidget.setHeaderHidden(true);
//    treeWidget.setColumnCount(2);
//    treeWidget.setHeaderLabels({ "文件名", "大小" });
//
//    // 添加第一行
//    QTreeWidgetItem* item1 = new QTreeWidgetItem();
//    item1->setText(0, "文档.txt");
//    item1->setText(1, "2.5 MB");
//    treeWidget.addTopLevelItem(item1);
//
//    // 添加第二行
//    QTreeWidgetItem* item2 = new QTreeWidgetItem();
//    item2->setText(0, "图片.png");
//    item2->setText(1, "1.8 MB");
//    treeWidget.addTopLevelItem(item2);
//
//    treeWidget.show();
//    return app.exec();
//}