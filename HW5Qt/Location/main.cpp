#include "location.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Location w;
    w.show();

    return a.exec();
}
