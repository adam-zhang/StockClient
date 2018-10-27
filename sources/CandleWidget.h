#ifndef __CANDLEWIDGET__H
#define __CANDLEWIDGET__H

#include <QWidget>

class CandleWidget : public QWidget
{
	Q_OBJECT
	public:
		CandleWidget(QWidget* parent);
		~CandleWidget();
	private:
		void initialize();

};
#endif//__CANDLEWIDGET__H
