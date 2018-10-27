#include "CandleWidget.h"

CandleWidget::CandleWidget(QWidget* parent)
	: QWidget(parent)
{
	initialize();
}

CandleWidget::~CandleWidget()
{

}

void CandleWidget::initialize()
{
	QPalette palette(QPalette::Background, Qt::black);
	setPalette(palette);
	setAutoFillBackground(true);
}
