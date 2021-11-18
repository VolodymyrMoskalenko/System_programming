#include "lists.h"
#include "ui_lists.h"
#include "Database.h"
#include "QStringListModel"
#include "QVector"

using namespace std;
using namespace Records;

lists::lists(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lists)
{
    ui->setupUi(this);
}

lists::~lists()
{
    delete ui;
}

void lists::setDB(Database *db) {
    lists::driverDB = db;
}


void lists::on_pushButton_7_clicked()
{
    vector<string> all = driverDB->displayCurrent();
     QVector<QString> qVec;
    for (auto i : all) {
        qVec.push_back(QString::fromStdString(i));
    }
    ui->listView->setModel(new QStringListModel(QList<QString>::fromVector(qVec)));
}

void lists::on_pushButton_6_clicked()
{
    vector<string> all = driverDB->displayFormer();
     QVector<QString> qVec;
    for (auto i : all) {
        qVec.push_back(QString::fromStdString(i));
    }
    ui->listView->setModel(new QStringListModel(QList<QString>::fromVector(qVec)));
}

void lists::on_pushButton_5_clicked()
{


    vector<string> all = driverDB->displayAll();
     QVector<QString> qVec;
    for (auto i : all) {
        qVec.push_back(QString::fromStdString(i));
    }
    ui->listView->setModel(new QStringListModel(QList<QString>::fromVector(qVec)));
}
