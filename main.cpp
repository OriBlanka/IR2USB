#include "ir2usb.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ir2Usb w;
    w.show();

    return a.exec();
}
