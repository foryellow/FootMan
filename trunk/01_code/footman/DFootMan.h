#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DFootMan.h"

class DFootMan : public QMainWindow
{
    Q_OBJECT

public:
    DFootMan(QWidget *parent = Q_NULLPTR);

private:
    Ui::DFootManClass ui;
};
