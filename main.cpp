#include "QRWidget.hpp"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRWidget w;

     w.show();
    return a.exec();
}
