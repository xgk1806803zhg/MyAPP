#include "AlgTreeItem.h"


#pragma region BaseTreeItem
BaseTreeItem::BaseTreeItem(QTreeWidgetItem* parent)
{
}

BaseTreeItem::~BaseTreeItem()
{
}
#pragma endregion


#pragma region AlgTitleTreeItem

AlgTitleTreeItem::AlgTitleTreeItem(BaseTreeItem* parent)
{

}

AlgTitleTreeItem::~AlgTitleTreeItem()
{
}

void AlgTitleTreeItem::setContent(int column, QString content)
{
	column = 0;
	setText(column, content);
	// 设置提示信息
	setToolTip(column, content);
	// 设置图标
}

#pragma endregion

#pragma region AlgTitleTreeItem

AlgContentTreeItem::AlgContentTreeItem(BaseTreeItem* parent)
{
	// 设置树节点的类型
	//setFlags(flags() | Qt::ItemIsEnabled);
	this->setData(0, Qt::UserRole, true);
}

AlgContentTreeItem::~AlgContentTreeItem()
{
}

void AlgContentTreeItem::setContent(int column, QString content)
{
	setText(column, content);
	// 设置提示信息
	setToolTip(column, content);
	// 设置图标
}

#pragma endregion