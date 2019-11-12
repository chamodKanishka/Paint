#include "paint.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Paint paint;
    paint.show();

    return a.exec();
}
