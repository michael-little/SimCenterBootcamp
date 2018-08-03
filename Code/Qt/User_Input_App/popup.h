#ifndef POPUP_H
#define POPUP_H

Popup1::Popup1(QWidget *parent):
QDialog(parent),
ui(new Ui::Popup1)
{
ui->setupUi(this);
}

Popup1::~Popup1()
{
delete ui;
}

#endif // POPUP_H
