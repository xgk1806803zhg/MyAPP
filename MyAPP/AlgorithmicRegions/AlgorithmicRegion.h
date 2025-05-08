#pragma once

#include <QWidget>
#include "ui_AlgorithmicRegion.h"

class AlgorithmicRegion : public QWidget
{
	Q_OBJECT

public:
	AlgorithmicRegion(QWidget *parent = nullptr);
	~AlgorithmicRegion();

private:
	Ui::AlgorithmicRegionClass ui;
};
