#include "mainwindow.h"
#include "ui_mainwindow.h"

//This is to include the QDebug package.
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CancelButton_clicked()
{
    this->close();
}

void MainWindow::on_SubmitButton_clicked()
{
    DATA mydata;
    mydata.firstName = ui->FirstNameEdit->text();
    mydata.lastName = ui->LastNameEdit->text();
    mydata.address = ui->AddressInput->text();
    mydata.city = ui->CityEdit->text();
    mydata.state = ui->stateEdit->text();
    mydata.zip = ui->ZipEdit->text();
    mydata.DOB = ui->DOBEdit->text();
    QString address =
            mydata.firstName + " " + mydata.lastName + "\n"
            + mydata.city + ", " + mydata.state + " " + mydata.zip + "\n"
            + mydata.DOB;
    ui->printBrowser->setText(address);
}


