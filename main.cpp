#include "Stratus.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Stratus w;
    w.show();
    return a.exec();
}
