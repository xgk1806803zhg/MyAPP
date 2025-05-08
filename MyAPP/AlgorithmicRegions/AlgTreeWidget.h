#pragma once

#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QMouseEvent>
#include <QDebug>
#include "./AlgorithmicRegions/AlgTreeItem.h"

class AlgTreeWidget :  public QTreeWidget {
	Q_OBJECT

public:
	AlgTreeWidget(QTreeWidget* parent = nullptr);
	~AlgTreeWidget();

	// Ìí¼ÓÊ÷½Úµã
	void addItem(int column, const QString& text, const QString& toolTip = QString());

};
