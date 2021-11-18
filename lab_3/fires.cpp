#include "fires.h"
#include "ui_fires.h"
#include "Database.h"

using namespace std;
using namespace Records;

fires::fires(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fires)
{
    ui->setupUi(this);
}

fires::~fires()
{
    delete ui;
}

void fires::setDB(Database *db) {
    fires::driverDB = db;
}


void fires::on_pushButton_4_clicked()
{
    int id = ui->lineEdit_2->text().toInt();
    TaxiStation& emp = driverDB->getDriver(id);
    emp.fire();
    this->close();
}
