#ifndef LISTS_H
#define LISTS_H

#include <QMainWindow>
#include "Database.h"

using namespace std;
using namespace Records;

namespace Ui {
    class lists;
}

class lists : public QMainWindow
{
    Q_OBJECT

public:
    explicit lists(QWidget *parent = nullptr);
    void setDB(Database *db);
    ~lists();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

private:
    Database *driverDB;
    Ui::lists *ui;
};

#endif // LISTS_H
