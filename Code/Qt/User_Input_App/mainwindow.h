#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
};

#endif // MAINWINDOW_H
