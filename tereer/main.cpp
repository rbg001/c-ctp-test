#include "tereer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	tereer w;
	w.show();
	return a.exec();
}
