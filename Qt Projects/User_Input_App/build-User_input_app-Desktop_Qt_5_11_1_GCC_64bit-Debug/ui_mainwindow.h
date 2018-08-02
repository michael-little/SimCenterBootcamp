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
#include <QtWidgets/QComboBox>
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
    QLineEdit *DOBEdit;
    QLineEdit *AddressInput;
    QLineEdit *CityEdit;
    QLabel *month_ex;
    QPushButton *CancelButton;
    QLabel *LastNameLabel;
    QComboBox *StatecomboBox;
    QLabel *ZipLabel;
    QLabel *TitleBarLabel;
    QLabel *CityLabel;
    QPushButton *ConfirmButton;
    QLabel *StateLabel;
    QLineEdit *LastNameEdit;
    QLineEdit *FirstNameEdit;
    QLabel *FirstNameLabel;
    QLineEdit *ZipEdit;
    QLabel *DOBLabel;
    QLabel *AddressLabe;
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
        DOBEdit = new QLineEdit(centralWidget);
        DOBEdit->setObjectName(QStringLiteral("DOBEdit"));

        gridLayout->addWidget(DOBEdit, 8, 0, 1, 2);

        AddressInput = new QLineEdit(centralWidget);
        AddressInput->setObjectName(QStringLiteral("AddressInput"));

        gridLayout->addWidget(AddressInput, 4, 0, 1, 6);

        CityEdit = new QLineEdit(centralWidget);
        CityEdit->setObjectName(QStringLiteral("CityEdit"));

        gridLayout->addWidget(CityEdit, 6, 0, 1, 3);

        month_ex = new QLabel(centralWidget);
        month_ex->setObjectName(QStringLiteral("month_ex"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(month_ex->sizePolicy().hasHeightForWidth());
        month_ex->setSizePolicy(sizePolicy);

        gridLayout->addWidget(month_ex, 8, 2, 1, 3);

        CancelButton = new QPushButton(centralWidget);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        sizePolicy.setHeightForWidth(CancelButton->sizePolicy().hasHeightForWidth());
        CancelButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(CancelButton, 10, 3, 1, 1);

        LastNameLabel = new QLabel(centralWidget);
        LastNameLabel->setObjectName(QStringLiteral("LastNameLabel"));

        gridLayout->addWidget(LastNameLabel, 1, 3, 1, 1);

        StatecomboBox = new QComboBox(centralWidget);
        StatecomboBox->setObjectName(QStringLiteral("StatecomboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(StatecomboBox->sizePolicy().hasHeightForWidth());
        StatecomboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(StatecomboBox, 6, 3, 1, 1);

        ZipLabel = new QLabel(centralWidget);
        ZipLabel->setObjectName(QStringLiteral("ZipLabel"));

        gridLayout->addWidget(ZipLabel, 5, 4, 1, 1);

        TitleBarLabel = new QLabel(centralWidget);
        TitleBarLabel->setObjectName(QStringLiteral("TitleBarLabel"));

        gridLayout->addWidget(TitleBarLabel, 0, 0, 1, 5);

        CityLabel = new QLabel(centralWidget);
        CityLabel->setObjectName(QStringLiteral("CityLabel"));

        gridLayout->addWidget(CityLabel, 5, 0, 1, 1);

        ConfirmButton = new QPushButton(centralWidget);
        ConfirmButton->setObjectName(QStringLiteral("ConfirmButton"));
        sizePolicy.setHeightForWidth(ConfirmButton->sizePolicy().hasHeightForWidth());
        ConfirmButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ConfirmButton, 10, 2, 1, 1);

        StateLabel = new QLabel(centralWidget);
        StateLabel->setObjectName(QStringLiteral("StateLabel"));

        gridLayout->addWidget(StateLabel, 5, 3, 1, 1);

        LastNameEdit = new QLineEdit(centralWidget);
        LastNameEdit->setObjectName(QStringLiteral("LastNameEdit"));

        gridLayout->addWidget(LastNameEdit, 2, 3, 1, 3);

        FirstNameEdit = new QLineEdit(centralWidget);
        FirstNameEdit->setObjectName(QStringLiteral("FirstNameEdit"));

        gridLayout->addWidget(FirstNameEdit, 2, 0, 1, 3);

        FirstNameLabel = new QLabel(centralWidget);
        FirstNameLabel->setObjectName(QStringLiteral("FirstNameLabel"));

        gridLayout->addWidget(FirstNameLabel, 1, 0, 1, 1);

        ZipEdit = new QLineEdit(centralWidget);
        ZipEdit->setObjectName(QStringLiteral("ZipEdit"));

        gridLayout->addWidget(ZipEdit, 6, 4, 1, 1);

        DOBLabel = new QLabel(centralWidget);
        DOBLabel->setObjectName(QStringLiteral("DOBLabel"));

        gridLayout->addWidget(DOBLabel, 7, 0, 1, 1);

        AddressLabe = new QLabel(centralWidget);
        AddressLabe->setObjectName(QStringLiteral("AddressLabe"));

        gridLayout->addWidget(AddressLabe, 3, 0, 1, 1);

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
        StatecomboBox->raise();
        ZipEdit->raise();
        ZipLabel->raise();
        LastNameEdit->raise();
        ConfirmButton->raise();
        CancelButton->raise();
        StateLabel->raise();
        LastNameLabel->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 428, 22));
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
        month_ex->setText(QApplication::translate("MainWindow", "(mm/dd/yyyy)", nullptr));
        CancelButton->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        LastNameLabel->setText(QApplication::translate("MainWindow", "Last Name", nullptr));
        ZipLabel->setText(QApplication::translate("MainWindow", "Zip Code", nullptr));
        TitleBarLabel->setText(QApplication::translate("MainWindow", "Please Input Your User Information:", nullptr));
        CityLabel->setText(QApplication::translate("MainWindow", "City", nullptr));
        ConfirmButton->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        StateLabel->setText(QApplication::translate("MainWindow", "State", nullptr));
        FirstNameLabel->setText(QApplication::translate("MainWindow", "First Name", nullptr));
        DOBLabel->setText(QApplication::translate("MainWindow", "Date of Birth", nullptr));
        AddressLabe->setText(QApplication::translate("MainWindow", "Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
