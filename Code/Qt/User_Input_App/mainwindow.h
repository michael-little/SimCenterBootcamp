#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <dialog.h>
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

signals:
    void sendString(QString);

private slots:
    void on_CancelButton_clicked();
    void on_SubmitButton_clicked();


private:
    Ui::MainWindow *ui;
    DATA mydata;
    Dialog *dialog2;
};


#endif // MAINWINDOW_H
