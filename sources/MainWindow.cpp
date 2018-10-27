#include "MainWindow.h"
#include "MainWidget.h"

MainWindow::MainWindow()
{
	initialize();
}

MainWindow::~MainWindow()
{

}

void MainWindow::initialize()
{
	setCentralWidget(new MainWidget(this));
	showMaximized();
}
