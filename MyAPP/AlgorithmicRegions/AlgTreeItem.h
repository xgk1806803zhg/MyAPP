#pragma once
#include <QObject>
#include <QTreeWidgetItem>

class BaseTreeItem : public QTreeWidgetItem , public QObject
{
	Q_OBJECT
public:
	// 帮我写一份构造函数
	BaseTreeItem(QTreeWidgetItem* parent = nullptr);
	// 帮我写一份析构函数
	~BaseTreeItem();

protected:
	// 写一份虚函数，避免编译器报错。
	virtual void setContent(int column, QString content) = 0;

};

class AlgTitleTreeItem : public BaseTreeItem
{
public:
	AlgTitleTreeItem(BaseTreeItem* parent = nullptr);
	~AlgTitleTreeItem();
	
	// 重写 setContent 函数
	virtual void setContent(int column, QString content) override; 
	
};

class AlgContentTreeItem : public BaseTreeItem
{
	AlgContentTreeItem(BaseTreeItem* parent = nullptr);
	~AlgContentTreeItem();
	
	// 重写 setContent 函数
	virtual void setContent(int column, QString content) override;
};