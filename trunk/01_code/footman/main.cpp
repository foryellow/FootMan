#include "stdafx.h"
#include "DFootMan.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DFootMan w;
    w.show();
    return a.exec();
}
