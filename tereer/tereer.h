#ifndef TEREER_H
#define TEREER_H

#include <QtWidgets/QMainWindow>
#include "ui_tereer.h"

class tereer : public QMainWindow
{
	Q_OBJECT

public:
	tereer(QWidget *parent = 0);
	~tereer();

private:
	Ui::tereerClass ui;
};

#endif // TEREER_H
