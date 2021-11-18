#include "promotes.h"
#include "ui_promotes.h"
#include "Database.h"

using namespace std;
using namespace Records;

promotes::promotes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::promotes)
{
    ui->setupUi(this);
}

promotes::~promotes()
{
    delete ui;
}

void promotes::setDB(Database *db) {
    promotes::driverDB = db;
}

void promotes::on_pushButton_2_clicked()
{
    int id = ui->lineEdit->text().toInt();
    int price = ui->lineEdit_2->text().toInt();
    TaxiStation& emp = driverDB->getDriver(id);
    emp.promote(price);
    this->close();
}


