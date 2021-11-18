#ifndef FIRES_H
#define FIRES_H

#include <QMainWindow>
#include "Database.h"

using namespace std;
using namespace Records;

namespace Ui {
    class fires;
}

class fires : public QMainWindow
{
    Q_OBJECT

public:
    explicit fires(QWidget *parent = nullptr);
    void setDB(Database *db);
    ~fires();

private slots:
    void on_pushButton_4_clicked();

private:
    Database *driverDB;
    Ui::fires *ui;
};

#endif // FIRES_H
