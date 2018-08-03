#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //auto generated part that creates the ui
    ui->setupUi(this);

    QStringList theStates = {
        "AL", "AK", "AZ", "AR", "CA", "CO", "CT", "DE" , "FL", "GA", "HI", "ID", "IL",
        "IN", "IA", "KS", "KY", "LA", "ME", "MD", "MA", "MI", "MN", "MS", "MO", "MT",
        "NE", "NV", "NH", "NJ", "NM", "NY", "NC", "ND", "OH", "OK", "OR", "PA", "RI",
        "SC", "SD", "TN", "TX", "UT", "VT", "VA", "WA", "WV", "WI", "WY"
    };
    ui->cbx_state->addItems(theStates);

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
    mydata.firstName = ui->FirstNameEdit->text();
    mydata.lastName = ui->LastNameEdit->text();
    mydata.address = ui->AddressInput->text();
    mydata.city = ui->CityEdit->text();
    mydata.state = ui->cbx_state->currentText();
    mydata.zip = ui->ZipEdit->text();
    mydata.DOB = ui->DOBEdit->text();
    QString PRINT =
            mydata.firstName + " " + mydata.lastName + "\n"
            + mydata.address + "\n"
            + mydata.city + ", " + mydata.state + " " + mydata.zip + "\n"
            + "DOB:  " + mydata.DOB;
    //ui->printBrowser->setText(PRINT);

    dialog2 = new Dialog(this);
    connect(this,SIGNAL(sendString(QString)),dialog2,SLOT(showString(QString)));
    emit sendString(PRINT);
    dialog2->setModal(true);
    dialog2->show();
}


