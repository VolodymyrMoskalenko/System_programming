#ifndef DEMOTES_H
#define DEMOTES_H

#include <QMainWindow>
#include "Database.h"

using namespace std;
using namespace Records;

namespace Ui {
    class demotes;
}

class demotes : public QMainWindow
{
    Q_OBJECT

public:
    explicit demotes(QWidget *parent = nullptr);
    void setDB(Database *db);
    ~demotes();

private slots:
    void on_pushButton_2_clicked();

private:
    Database *driverDB;
    Ui::demotes *ui;
};

#endif // DEMOTES_H
