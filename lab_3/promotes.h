#ifndef PROMOTES_H
#define PROMOTES_H

#include <QMainWindow>
#include "Database.h"

using namespace std;
using namespace Records;

namespace Ui {
    class promotes;
}

class promotes : public QMainWindow
{
    Q_OBJECT

public:
    explicit promotes(QWidget *parent = nullptr);
    void setDB(Database *db);
    ~promotes();

private slots:
    void on_pushButton_2_clicked();



private:
    Database *driverDB;
    Ui::promotes *ui;
};

#endif // PROMOTES_H
