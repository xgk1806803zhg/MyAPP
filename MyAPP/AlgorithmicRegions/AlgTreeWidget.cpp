#include "AlgTreeWidget.h"

AlgTreeWidget::AlgTreeWidget(QTreeWidget* parent)
	: QTreeWidget(parent)
{

}

AlgTreeWidget::~AlgTreeWidget()
{

}

void AlgTreeWidget::addItem(int column, const QString& text, const QString& toolTip)
{
	if (column == 0)
	{
		AlgTitleTreeItem* titleItem = new AlgTitleTreeItem();
	}
	else
	{

	}
}
