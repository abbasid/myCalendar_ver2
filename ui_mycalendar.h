/********************************************************************************
** Form generated from reading UI file 'mycalendar.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCALENDAR_H
#define UI_MYCALENDAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyCalendar
{
public:
    QWidget *centralWidget;
    QTableWidget *scheduleTable;
    QLineEdit *searchName;
    QPushButton *searchButton;
    QPushButton *lastWeek;
    QPushButton *nextWeek;
    QLineEdit *currentTime;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyCalendar)
    {
        if (MyCalendar->objectName().isEmpty())
            MyCalendar->setObjectName(QStringLiteral("MyCalendar"));
        MyCalendar->resize(942, 541);
        centralWidget = new QWidget(MyCalendar);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scheduleTable = new QTableWidget(centralWidget);
        scheduleTable->setObjectName(QStringLiteral("scheduleTable"));
        scheduleTable->setGeometry(QRect(60, 60, 821, 421));
        scheduleTable->horizontalHeader()->setVisible(false);
        scheduleTable->verticalHeader()->setVisible(false);
        searchName = new QLineEdit(centralWidget);
        searchName->setObjectName(QStringLiteral("searchName"));
        searchName->setGeometry(QRect(660, 20, 161, 21));
        searchButton = new QPushButton(centralWidget);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setGeometry(QRect(820, 19, 61, 21));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        searchButton->setFont(font);
        lastWeek = new QPushButton(centralWidget);
        lastWeek->setObjectName(QStringLiteral("lastWeek"));
        lastWeek->setGeometry(QRect(10, 60, 41, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        lastWeek->setFont(font1);
        nextWeek = new QPushButton(centralWidget);
        nextWeek->setObjectName(QStringLiteral("nextWeek"));
        nextWeek->setGeometry(QRect(890, 60, 41, 31));
        nextWeek->setFont(font1);
        currentTime = new QLineEdit(centralWidget);
        currentTime->setObjectName(QStringLiteral("currentTime"));
        currentTime->setGeometry(QRect(60, 10, 201, 41));
        MyCalendar->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyCalendar);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 942, 21));
        MyCalendar->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyCalendar);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyCalendar->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyCalendar);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyCalendar->setStatusBar(statusBar);

        retranslateUi(MyCalendar);

        QMetaObject::connectSlotsByName(MyCalendar);
    } // setupUi

    void retranslateUi(QMainWindow *MyCalendar)
    {
        MyCalendar->setWindowTitle(QApplication::translate("MyCalendar", "MyCalendar", 0));
        searchButton->setText(QApplication::translate("MyCalendar", "Search", 0));
        lastWeek->setText(QApplication::translate("MyCalendar", "<-", 0));
        nextWeek->setText(QApplication::translate("MyCalendar", "->", 0));
    } // retranslateUi

};

namespace Ui {
    class MyCalendar: public Ui_MyCalendar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCALENDAR_H
