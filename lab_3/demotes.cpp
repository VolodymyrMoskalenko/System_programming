#include "demotes.h"
#include "ui_demotes.h"
#include "Database.h"

using namespace std;
using namespace Records;

demotes::demotes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::demotes)
{
    ui->setupUi(this);
}

demotes::~demotes()
{
    delete ui;
}

void demotes::setDB(Database *db) {
    demotes::driverDB = db;
}


void demotes::on_pushButton_2_clicked()
{
    int id = ui->lineEdit->text().toInt();
    int price = ui->lineEdit_2->text().toInt();
    TaxiStation& emp = driverDB->getDriver(id);
    emp.demote(price);
    this->close();
}
