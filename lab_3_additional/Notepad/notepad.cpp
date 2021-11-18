#include "notepad.h"
#include "ui_notepad.h"

Notepad::Notepad(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

Notepad::~Notepad()
{
    delete ui;
}


void Notepad::on_operationNew_triggered()
{
    currentfile.clear();
    ui->textEdit->setText(QString());
}

void Notepad::on_operationOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(filename);

    currentfile= filename;
    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot open the file : " + file.errorString());
        return;
    }
    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);

    file.close();
}

void Notepad::on_operationSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save as");
    QFile file(filename);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot save the file : " + file.errorString());
        return;
    }
    currentfile= filename;
    setWindowTitle(filename);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out<<text;

    file.close();
}

void Notepad::on_operationPrint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("Printer Name");
    QPrintDialog pDialog(&printer, this);
    if (pDialog.exec()==QDialog::Rejected){
        QMessageBox::warning(this, "Warning", "Cannot Access Printer");
        return;
    }
    ui->textEdit->print(&printer);
}

void Notepad::on_operationExit_triggered()
{
    QApplication::quit();
}

void Notepad::on_operationCopy_triggered()
{
    ui->textEdit->copy();
}

void Notepad::on_operationPaste_triggered()
{
    ui->textEdit->paste();
}

void Notepad::on_operationCut_triggered()
{
    ui->textEdit->cut();
}

void Notepad::on_operationUndo_triggered()
{
    ui->textEdit->undo();
}

void Notepad::on_operationRedo_triggered()
{
    ui->textEdit->redo();
}
