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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *LastNameLabel;
    QLineEdit *AddressInput;
    QLineEdit *CityEdit;
    QPushButton *CancelButton;
    QLabel *StateLabel;
    QLabel *CityLabel;
    QLabel *TitleBarLabel;
    QLabel *ZipLabel;
    QLineEdit *FirstNameEdit;
    QLabel *FirstNameLabel;
    QLabel *DOBLabel;
    QLineEdit *ZipEdit;
    QLineEdit *LastNameEdit;
    QLineEdit *DOBEdit;
    QLabel *AddressLabe;
    QLabel *month_ex;
    QPushButton *SubmitButton;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(428, 399);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        LastNameLabel = new QLabel(centralWidget);
        LastNameLabel->setObjectName(QStringLiteral("LastNameLabel"));

        gridLayout->addWidget(LastNameLabel, 1, 3, 1, 1);

        AddressInput = new QLineEdit(centralWidget);
        AddressInput->setObjectName(QStringLiteral("AddressInput"));

        gridLayout->addWidget(AddressInput, 4, 0, 1, 6);

        CityEdit = new QLineEdit(centralWidget);
        CityEdit->setObjectName(QStringLiteral("CityEdit"));

        gridLayout->addWidget(CityEdit, 6, 0, 1, 3);

        CancelButton = new QPushButton(centralWidget);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CancelButton->sizePolicy().hasHeightForWidth());
        CancelButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(CancelButton, 10, 3, 1, 1);

        StateLabel = new QLabel(centralWidget);
        StateLabel->setObjectName(QStringLiteral("StateLabel"));

        gridLayout->addWidget(StateLabel, 5, 3, 1, 1);

        CityLabel = new QLabel(centralWidget);
        CityLabel->setObjectName(QStringLiteral("CityLabel"));

        gridLayout->addWidget(CityLabel, 5, 0, 1, 1);

        TitleBarLabel = new QLabel(centralWidget);
        TitleBarLabel->setObjectName(QStringLiteral("TitleBarLabel"));

        gridLayout->addWidget(TitleBarLabel, 0, 0, 1, 5);

        ZipLabel = new QLabel(centralWidget);
        ZipLabel->setObjectName(QStringLiteral("ZipLabel"));

        gridLayout->addWidget(ZipLabel, 5, 4, 1, 1);

        FirstNameEdit = new QLineEdit(centralWidget);
        FirstNameEdit->setObjectName(QStringLiteral("FirstNameEdit"));

        gridLayout->addWidget(FirstNameEdit, 2, 0, 1, 3);

        FirstNameLabel = new QLabel(centralWidget);
        FirstNameLabel->setObjectName(QStringLiteral("FirstNameLabel"));

        gridLayout->addWidget(FirstNameLabel, 1, 0, 1, 1);

        DOBLabel = new QLabel(centralWidget);
        DOBLabel->setObjectName(QStringLiteral("DOBLabel"));

        gridLayout->addWidget(DOBLabel, 7, 0, 1, 1);

        ZipEdit = new QLineEdit(centralWidget);
        ZipEdit->setObjectName(QStringLiteral("ZipEdit"));

        gridLayout->addWidget(ZipEdit, 6, 4, 1, 1);

        LastNameEdit = new QLineEdit(centralWidget);
        LastNameEdit->setObjectName(QStringLiteral("LastNameEdit"));

        gridLayout->addWidget(LastNameEdit, 2, 3, 1, 3);

        DOBEdit = new QLineEdit(centralWidget);
        DOBEdit->setObjectName(QStringLiteral("DOBEdit"));

        gridLayout->addWidget(DOBEdit, 8, 0, 1, 2);

        AddressLabe = new QLabel(centralWidget);
        AddressLabe->setObjectName(QStringLiteral("AddressLabe"));

        gridLayout->addWidget(AddressLabe, 3, 0, 1, 1);

        month_ex = new QLabel(centralWidget);
        month_ex->setObjectName(QStringLiteral("month_ex"));
        sizePolicy.setHeightForWidth(month_ex->sizePolicy().hasHeightForWidth());
        month_ex->setSizePolicy(sizePolicy);

        gridLayout->addWidget(month_ex, 8, 2, 1, 2);

        SubmitButton = new QPushButton(centralWidget);
        SubmitButton->setObjectName(QStringLiteral("SubmitButton"));
        sizePolicy.setHeightForWidth(SubmitButton->sizePolicy().hasHeightForWidth());
        SubmitButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(SubmitButton, 10, 1, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 6, 3, 1, 1);

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
        lineEdit->raise();
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
        QWidget::setTabOrder(FirstNameEdit, AddressInput);
        QWidget::setTabOrder(AddressInput, CityEdit);
        QWidget::setTabOrder(CityEdit, DOBEdit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        LastNameLabel->setText(QApplication::translate("MainWindow", "Last Name", nullptr));
        CancelButton->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        StateLabel->setText(QApplication::translate("MainWindow", "State", nullptr));
        CityLabel->setText(QApplication::translate("MainWindow", "City", nullptr));
        TitleBarLabel->setText(QApplication::translate("MainWindow", "Please Input Your User Information:", nullptr));
        ZipLabel->setText(QApplication::translate("MainWindow", "Zip Code", nullptr));
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
