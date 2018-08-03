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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *AddressInput;
    QPushButton *CancelButton;
    QLabel *ZipLabel;
    QLabel *TitleBarLabel;
    QLabel *CityLabel;
    QLabel *StateLabel;
    QLabel *AddressLabe;
    QPushButton *SubmitButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *DOBLabel;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *DOBEdit;
    QLabel *month_ex;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *CityEdit;
    QComboBox *cbx_state;
    QLineEdit *ZipEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *FirstNameEdit;
    QLineEdit *LastNameEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *FirstNameLabel;
    QLabel *LastNameLabel;
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
        AddressInput = new QLineEdit(centralWidget);
        AddressInput->setObjectName(QStringLiteral("AddressInput"));
        AddressInput->setGeometry(QRect(11, 120, 411, 22));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddressInput->sizePolicy().hasHeightForWidth());
        AddressInput->setSizePolicy(sizePolicy);
        CancelButton = new QPushButton(centralWidget);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(240, 310, 93, 28));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CancelButton->sizePolicy().hasHeightForWidth());
        CancelButton->setSizePolicy(sizePolicy1);
        ZipLabel = new QLabel(centralWidget);
        ZipLabel->setObjectName(QStringLiteral("ZipLabel"));
        ZipLabel->setGeometry(QRect(320, 150, 50, 16));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ZipLabel->sizePolicy().hasHeightForWidth());
        ZipLabel->setSizePolicy(sizePolicy2);
        TitleBarLabel = new QLabel(centralWidget);
        TitleBarLabel->setObjectName(QStringLiteral("TitleBarLabel"));
        TitleBarLabel->setGeometry(QRect(11, 11, 205, 16));
        sizePolicy.setHeightForWidth(TitleBarLabel->sizePolicy().hasHeightForWidth());
        TitleBarLabel->setSizePolicy(sizePolicy);
        CityLabel = new QLabel(centralWidget);
        CityLabel->setObjectName(QStringLiteral("CityLabel"));
        CityLabel->setGeometry(QRect(12, 150, 21, 16));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(6);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(CityLabel->sizePolicy().hasHeightForWidth());
        CityLabel->setSizePolicy(sizePolicy3);
        StateLabel = new QLabel(centralWidget);
        StateLabel->setObjectName(QStringLiteral("StateLabel"));
        StateLabel->setGeometry(QRect(240, 150, 30, 16));
        sizePolicy2.setHeightForWidth(StateLabel->sizePolicy().hasHeightForWidth());
        StateLabel->setSizePolicy(sizePolicy2);
        AddressLabe = new QLabel(centralWidget);
        AddressLabe->setObjectName(QStringLiteral("AddressLabe"));
        AddressLabe->setGeometry(QRect(11, 97, 46, 16));
        sizePolicy.setHeightForWidth(AddressLabe->sizePolicy().hasHeightForWidth());
        AddressLabe->setSizePolicy(sizePolicy);
        SubmitButton = new QPushButton(centralWidget);
        SubmitButton->setObjectName(QStringLiteral("SubmitButton"));
        SubmitButton->setGeometry(QRect(90, 310, 119, 28));
        sizePolicy1.setHeightForWidth(SubmitButton->sizePolicy().hasHeightForWidth());
        SubmitButton->setSizePolicy(sizePolicy1);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 210, 228, 49));
        sizePolicy1.setHeightForWidth(layoutWidget->sizePolicy().hasHeightForWidth());
        layoutWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        DOBLabel = new QLabel(layoutWidget);
        DOBLabel->setObjectName(QStringLiteral("DOBLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(DOBLabel->sizePolicy().hasHeightForWidth());
        DOBLabel->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(DOBLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        DOBEdit = new QLineEdit(layoutWidget);
        DOBEdit->setObjectName(QStringLiteral("DOBEdit"));
        sizePolicy.setHeightForWidth(DOBEdit->sizePolicy().hasHeightForWidth());
        DOBEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(DOBEdit);

        month_ex = new QLabel(layoutWidget);
        month_ex->setObjectName(QStringLiteral("month_ex"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(3);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(month_ex->sizePolicy().hasHeightForWidth());
        month_ex->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(month_ex);


        verticalLayout->addLayout(horizontalLayout_5);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(11, 174, 411, 24));
        sizePolicy1.setHeightForWidth(layoutWidget1->sizePolicy().hasHeightForWidth());
        layoutWidget1->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        CityEdit = new QLineEdit(layoutWidget1);
        CityEdit->setObjectName(QStringLiteral("CityEdit"));
        sizePolicy.setHeightForWidth(CityEdit->sizePolicy().hasHeightForWidth());
        CityEdit->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(CityEdit);

        cbx_state = new QComboBox(layoutWidget1);
        cbx_state->setObjectName(QStringLiteral("cbx_state"));
        sizePolicy4.setHeightForWidth(cbx_state->sizePolicy().hasHeightForWidth());
        cbx_state->setSizePolicy(sizePolicy4);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        cbx_state->setPalette(palette);

        horizontalLayout_3->addWidget(cbx_state);

        ZipEdit = new QLineEdit(layoutWidget1);
        ZipEdit->setObjectName(QStringLiteral("ZipEdit"));
        sizePolicy2.setHeightForWidth(ZipEdit->sizePolicy().hasHeightForWidth());
        ZipEdit->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(ZipEdit);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 66, 411, 24));
        sizePolicy1.setHeightForWidth(layoutWidget2->sizePolicy().hasHeightForWidth());
        layoutWidget2->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        FirstNameEdit = new QLineEdit(layoutWidget2);
        FirstNameEdit->setObjectName(QStringLiteral("FirstNameEdit"));
        sizePolicy.setHeightForWidth(FirstNameEdit->sizePolicy().hasHeightForWidth());
        FirstNameEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(FirstNameEdit);

        LastNameEdit = new QLineEdit(layoutWidget2);
        LastNameEdit->setObjectName(QStringLiteral("LastNameEdit"));
        sizePolicy.setHeightForWidth(LastNameEdit->sizePolicy().hasHeightForWidth());
        LastNameEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(LastNameEdit);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(11, 41, 411, 18));
        sizePolicy1.setHeightForWidth(layoutWidget3->sizePolicy().hasHeightForWidth());
        layoutWidget3->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FirstNameLabel = new QLabel(layoutWidget3);
        FirstNameLabel->setObjectName(QStringLiteral("FirstNameLabel"));
        sizePolicy.setHeightForWidth(FirstNameLabel->sizePolicy().hasHeightForWidth());
        FirstNameLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(FirstNameLabel);

        LastNameLabel = new QLabel(layoutWidget3);
        LastNameLabel->setObjectName(QStringLiteral("LastNameLabel"));
        sizePolicy.setHeightForWidth(LastNameLabel->sizePolicy().hasHeightForWidth());
        LastNameLabel->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(LastNameLabel);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        AddressLabe->raise();
        AddressInput->raise();
        CityLabel->raise();
        TitleBarLabel->raise();
        ZipLabel->raise();
        CancelButton->raise();
        StateLabel->raise();
        SubmitButton->raise();
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
        QWidget::setTabOrder(CityEdit, cbx_state);
        QWidget::setTabOrder(cbx_state, ZipEdit);
        QWidget::setTabOrder(ZipEdit, DOBEdit);
        QWidget::setTabOrder(DOBEdit, SubmitButton);
        QWidget::setTabOrder(SubmitButton, CancelButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        CancelButton->setText(QApplication::translate("MainWindow", "Cancel", nullptr));
        ZipLabel->setText(QApplication::translate("MainWindow", "Zip Code", nullptr));
        TitleBarLabel->setText(QApplication::translate("MainWindow", "Please Input Your User Information:", nullptr));
        CityLabel->setText(QApplication::translate("MainWindow", "City", nullptr));
        StateLabel->setText(QApplication::translate("MainWindow", "State", nullptr));
        AddressLabe->setText(QApplication::translate("MainWindow", "Address", nullptr));
        SubmitButton->setText(QApplication::translate("MainWindow", "Print Address Label", nullptr));
        DOBLabel->setText(QApplication::translate("MainWindow", "Date of Birth", nullptr));
        month_ex->setText(QApplication::translate("MainWindow", "(mm/dd/yyyy)", nullptr));
        FirstNameLabel->setText(QApplication::translate("MainWindow", "First Name", nullptr));
        LastNameLabel->setText(QApplication::translate("MainWindow", "Last Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
