#include "MainWidget.h"
#include "CandleWidget.h"
#include <QHBoxLayout>
#include <QPushButton>

MainWidget::MainWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

MainWidget::~MainWidget()
{}

void MainWidget::initialize()
{
	auto layout = new QHBoxLayout;
	layout->addWidget(new CandleWidget(this));
	setLayout(layout);
}
