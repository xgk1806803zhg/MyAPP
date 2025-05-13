#include "AlgTreeWidget.h"

AlgTreeWidget::AlgTreeWidget(QTreeWidget* parent)
	: QTreeWidget(parent)
{
	this->setDragEnabled(true);
	this->setDragDropMode(QAbstractItemView::DragOnly);
}

AlgTreeWidget::~AlgTreeWidget()
{

}

void AlgTreeWidget::addItem(int column, const QString& text, const QString& toolTip)
{
	if (column == 0)
	{
		m_titleItem = new AlgTitleTreeItem();
		m_titleItem->setContent(column, text);
		this->addTopLevelItem(m_titleItem);
	}
	else if (column == 1)
	{
		AlgContentTreeItem* contentItem = new AlgContentTreeItem();
		contentItem->setContent(0, text);
		m_titleItem->addChild(contentItem);
	}

}

void AlgTreeWidget::startDrag(Qt::DropActions supportedActions)
{
	QTreeWidgetItem* item = currentItem();
	if (!item || !item->data(0, Qt::UserRole).toBool()) {
		return;  // 如果没有项目或项目不可拖动，则不执行拖动
	}
	QTreeWidget::startDrag(supportedActions);
}
