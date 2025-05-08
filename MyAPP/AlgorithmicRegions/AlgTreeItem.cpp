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

}

AlgContentTreeItem::~AlgContentTreeItem()
{
}

void AlgContentTreeItem::setContent(int column, QString content)
{
	column = 1;
	setText(column, content);
	// 设置提示信息
	setToolTip(column, content);
	// 设置图标
}

#pragma endregion