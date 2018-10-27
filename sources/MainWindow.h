#ifndef __MAINWINDOW_H
#define __MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
	Q_OBJECT

	public:
		MainWindow();
		~MainWindow();
	private:
		void initialize();
};
#endif//__MAINWINDOW_H
