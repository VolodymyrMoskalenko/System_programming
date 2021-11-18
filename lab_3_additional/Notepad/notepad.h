#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>

QT_BEGIN_NAMESPACE
namespace Ui{ class Notepad; }
QT_END_NAMESPACE

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad(QWidget *parent = nullptr);
    ~Notepad();

private slots:
    void on_operationNew_triggered();

    void on_operationOpen_triggered();

    void on_operationSave_triggered();

    void on_operationPrint_triggered();

    void on_operationExit_triggered();

    void on_operationCopy_triggered();

    void on_operationPaste_triggered();

    void on_operationCut_triggered();

    void on_operationUndo_triggered();

    void on_operationRedo_triggered();

private:
    Ui::Notepad *ui;
    QString currentfile = "";
};
#endif // NOTEPAD_H
