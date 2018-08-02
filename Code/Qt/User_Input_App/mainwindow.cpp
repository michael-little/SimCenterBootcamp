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
    qDebug() << "entering on_CancelButton_clicked()";
    this->close();
    qDebug() << "leaving on_CancelButton_clicked()";
}

void MainWindow::on_SubmitButton_clicked()
{
    qDebug() << "entering on_SubmitButton_clicked()";
    int a;
    a = 35;
    qDebug() << "leaving on_SubmitButton_clicked()";
}
