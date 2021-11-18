#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "demotes.h"
#include "fires.h"
#include "hires.h"
#include "lists.h"
#include "promotes.h"
#include "Database.h"
#include <iostream>
#include <fstream>

using namespace std;
using namespace Records;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setDB(Database& db) {
    MainWindow::driverDB = &db;
}

void MainWindow::on_pushButton_clicked()
{
   hir_win = new hires();
   hir_win->setDB(driverDB);
   hir_win->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    fir_win = new fires();
    fir_win->setDB(driverDB);
    fir_win->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    pr_win = new promotes();
    pr_win->setDB(driverDB);
    pr_win->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    dm_win = new demotes();
    dm_win->setDB(driverDB);
    dm_win->show();
}

void MainWindow::on_pushButton_6_clicked()
{
    ofstream file;
    string recordPath = "/Users/yanavasko/VMoskalenko/System_programming_IA_z91_Moskalenko/lab_3/data.txt";
    file.open(recordPath);
    vector<string> all = driverDB->displayAll();
    for(unsigned int i=0; i<all.size(); i++) {
        cout << all[i] << endl;
        if(file.is_open()) {
            file << all[i] << endl;
        }
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    lists_win = new lists();
    lists_win->setDB(driverDB);
    lists_win->show();
}
