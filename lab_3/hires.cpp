#include "hires.h"
#include "ui_hires.h"
#include "Database.h"

using namespace std;
using namespace Records;

hires::hires(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hires)
{
    ui->setupUi(this);
}

hires::~hires()
{
    delete ui;
}

void hires::setDB(Database *db) {
    hires::driverDB = db;
}

void hires::on_pushButton_2_clicked()
{
    QString f_name = ui->lineEdit->text();
    QString s_name = ui->lineEdit_2->text();
    driverDB->addDriver(f_name.toStdString(),s_name.toStdString());
    this->close();
}
