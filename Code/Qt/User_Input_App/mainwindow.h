#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

typedef struct data {
    QString firstName;
    QString lastName;
    QString address;
    QString city;
    QString state;
    QString zip;
    QString DOB;
} DATA;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_SubmitButton_clicked();
    void on_CancelButton_clicked();

private:
    Ui::MainWindow *ui;
    DATA mydata;
};


#endif // MAINWINDOW_H
