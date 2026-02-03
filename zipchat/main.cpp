#include "zipchat.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    zipchat window;
    window.show();
    return app.exec();
}
