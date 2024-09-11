#include "mainwindow.h"

#include <QApplication>
#include"login.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.lo->show();
    w.hide();
    //w.show();
    return a.exec();
}
