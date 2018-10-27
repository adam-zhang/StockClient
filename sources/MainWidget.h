#ifndef __MAINWIDGET__H
#define __MAINWIDGET__H

#include <QWidget>

class MainWidget : public QWidget
{
	Q_OBJECT
	public:
		MainWidget(QWidget* parent = 0);
		~MainWidget();
	private:
		void initialize();
};
#endif//__MAINWIDGET__H
