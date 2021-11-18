#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "demotes.h"
#include "fires.h"
#include "hires.h"
#include "lists.h"
#include "promotes.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setDB(Database& db);

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Database *driverDB;
    Ui::MainWindow *ui;
    hires *hir_win;
    fires *fir_win;
    promotes *pr_win;
    demotes *dm_win;
    lists *lists_win;
};
#endif // MAINWINDOW_H
