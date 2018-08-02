/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *DOBEdit;
    QLineEdit *AddressInput;
    QLineEdit *CityEdit;
    QPushButton *CancelButton;
    QLabel *LastNameLabel;
    QLabel *ZipLabel;
    QLabel *TitleBarLabel;
    QLabel *CityLabel;
    QLabel *StateLabel;
    QLineEdit *LastNameEdit;
    QLineEdit *FirstNameEdit;
    QLabel *FirstNameLabel;
    QLineEdit *ZipEdit;
    QLabel *DOBLabel;
    QLabel *AddressLabe;
    QLabel *month_ex;
    QPushButton *SubmitButton;
    QLineEdit *stateEdit;
    QTextBrowser *printBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(428, 399);
        MainWindow->setWindowOpacity(1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DOBEdit = new QLineEdit(centralWidget);
        DOBEdit->setObjectName(QStringLiteral("DOBEdit"));
        DOBEdit->setGeometry(QRect(10, 230, 137, 22));
        AddressInput = new QLineEdit(centralWidget);
        AddressInput->setObjectName(QStringLiteral("AddressInput"));
        AddressInput->setGeometry(QRect(10, 100, 411, 22));
        CityEdit = new QLineEdit(centralWidget);
        CityEdit->setObjectName(QStringLiteral("CityEdit"));
        CityEdit->setGeometry(QRect(10, 160, 271, 22));
        CancelButton = new QPushButton(centralWidget);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(247, 295, 93, 28));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CancelButton->sizePolicy().hasHeightForWidth());
        CancelButton->setSizePolicy(sizePolicy);
        LastNameLabel = new QLabel(centralWidget);
        LastNameLabel->setObjectName(QStringLiteral("LastNameLabel"));
        LastNameLabel->setGeometry(QRect(220, 40, 60, 16));
        ZipLabel = new QLabel(centralWidget);
        ZipLabel->setObjectName(QStringLiteral("ZipLabel"));
        ZipLabel->setGeometry(QRect(340, 140, 50, 16));
        TitleBarLabel = new QLabel(centralWidget);
        TitleBarLabel->setObjectName(QStringLiteral("TitleBarLabel"));
        TitleBarLabel->setGeometry(QRect(11, 11, 205, 16));
        CityLabel = new QLabel(centralWidget);
        CityLabel->setObjectName(QStringLiteral("CityLabel"));
        CityLabel->setGeometry(QRect(10, 140, 21, 16));
        StateLabel = new QLabel(centralWidget);
        StateLabel->setObjectName(QStringLiteral("StateLabel"));
        StateLabel->setGeometry(QRect(300, 140, 30, 16));
        LastNameEdit = new QLineEdit(centralWidget);
        LastNameEdit->setObjectName(QStringLiteral("LastNameEdit"));
        LastNameEdit->setGeometry(QRect(217, 57, 201, 22));
        FirstNameEdit = new QLineEdit(centralWidget);
        FirstNameEdit->setObjectName(QStringLiteral("FirstNameEdit"));
        FirstNameEdit->setGeometry(QRect(11, 57, 191, 22));
        FirstNameLabel = new QLabel(centralWidget);
        FirstNameLabel->setObjectName(QStringLiteral("FirstNameLabel"));
        FirstNameLabel->setGeometry(QRect(10, 40, 62, 16));
        ZipEdit = new QLineEdit(centralWidget);
        ZipEdit->setObjectName(QStringLiteral("ZipEdit"));
        ZipEdit->setGeometry(QRect(340, 160, 81, 22));
        DOBLabel = new QLabel(centralWidget);
        DOBLabel->setObjectName(QStringLiteral("DOBLabel"));
        DOBLabel->setGeometry(QRect(10, 210, 71, 16));
        AddressLabe = new QLabel(centralWidget);
        AddressLabe->setObjectName(QStringLiteral("AddressLabe"));
        AddressLabe->setGeometry(QRect(11, 86, 46, 16));
        month_ex = new QLabel(centralWidget);
        month_ex->setObjectName(QStringLiteral("month_ex"));
        month_ex->setGeometry(QRect(150, 230, 80, 16));
        sizePolicy.setHeightForWidth(month_ex->sizePolicy().hasHeightForWidth());
        month_ex->setSizePolicy(sizePolicy);
        SubmitButton = new QPushButton(centralWidget);
        SubmitButton->setObjectName(QStringLiteral("SubmitButton"));
        SubmitButton->setGeometry(QRect(89, 295, 119, 28));
        sizePolicy.setHeightForWidth(SubmitButton->sizePolicy().hasHeightForWidth());
        SubmitButton->setSizePolicy(sizePolicy);
        stateEdit = new QLineEdit(centralWidget);
        stateEdit->setObjectName(QStringLiteral("stateEdit"));
        stateEdit->setGeometry(QRect(300, 160, 31, 22));
        printBrowser = new QTextBrowser(centralWidget);
        printBrowser->setObjectName(QStringLiteral("printBrowser"));
        printBrowser->setGeometry(QRect(240, 200, 181, 81));
        QPalette palette;
        QBrush brush(QColor(240, 240, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        printBrowser->setPalette(palette);
        MainWindow->setCentralWidget(centralWidget);
        AddressLabe->raise();
        AddressInput->raise();
        CityLabel->raise();
        CityEdit->raise();
        DOBLabel->raise();
        DOBEdit->raise();
        month_ex->raise();
        FirstNameLabel->raise();
        FirstNameEdit->raise();
        TitleBarLabel->raise();
        ZipEdit->raise();
        ZipLabel->raise();
        LastNameEdit->raise();
        CancelButton->raise();
        StateLabel->raise();
        LastNameLabel->raise();
        SubmitButton->raise();
        stateEdit->raise();
        printBrowser->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 428, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(FirstNameEdit, LastNameEdit);
        QWidget::setTabOrder(LastNameEdit, AddressInput);
        QWidget::setTabOrder(AddressInput, CityEdit);
        QWidget::setTabOrder(CityEdit, stateEdit);
        QWidget::setTabOrder(stateEdit, ZipEdit);
        QWidget::setTabOrder(ZipEdit, DOBEdit);
        QWidget::setTabOrder(DOBEdit, SubmitButton);
        QWidget::setTabOrder(SubmitButton, CancelButton);
        QWidget::setTabOrder(CancelButton, printBrowser);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        CancelButton->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        LastNameLabel->setText(QApplication::translate("MainWindow", "Last Name", nullptr));
        ZipLabel->setText(QApplication::translate("MainWindow", "Zip Code", nullptr));
        TitleBarLabel->setText(QApplication::translate("MainWindow", "Please Input Your User Information:", nullptr));
        CityLabel->setText(QApplication::translate("MainWindow", "City", nullptr));
        StateLabel->setText(QApplication::translate("MainWindow", "State", nullptr));
        FirstNameLabel->setText(QApplication::translate("MainWindow", "First Name", nullptr));
        DOBLabel->setText(QApplication::translate("MainWindow", "Date of Birth", nullptr));
        AddressLabe->setText(QApplication::translate("MainWindow", "Address", nullptr));
        month_ex->setText(QApplication::translate("MainWindow", "(mm/dd/yyyy)", nullptr));
        SubmitButton->setText(QApplication::translate("MainWindow", "Print Address Label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
