#include "mainwindow.h"

#include <QApplication>
#include "Database.h"

using namespace std;
using namespace Records;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Database driverDB;
    MainWindow w;
    w.setDB(driverDB);
    w.show();
    return a.exec();
}
