#ifndef HIRES_H
#define HIRES_H

#include <QMainWindow>
#include "Database.h"

using namespace std;
using namespace Records;

namespace Ui {
    class hires;
}

class hires : public QMainWindow
{
    Q_OBJECT

public:
    explicit hires(QWidget *parent = nullptr);
    void setDB(Database *db);
    ~hires();

private slots:

    void on_pushButton_2_clicked();

private:
    Database *driverDB;
    Ui::hires *ui;
};

#endif // HIRES_H
