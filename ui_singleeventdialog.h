/********************************************************************************
** Form generated from reading UI file 'singleeventdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEEVENTDIALOG_H
#define UI_SINGLEEVENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_singleEventDialog
{
public:
    QLabel *label_subject;
    QLabel *label_time;
    QLabel *label_reminder;
    QLabel *label_location;
    QLabel *label_note;
    QLineEdit *subject;
    QLineEdit *time_year;
    QLineEdit *time_month;
    QLineEdit *time_date;
    QLabel *label_year;
    QLabel *label_month;
    QLabel *label_date;
    QLabel *label_duration;
    QListWidget *duration;
    QLineEdit *location;
    QListWidget *reminder;
    QTextEdit *note;
    QPushButton *saveButton;
    QPushButton *quitButton;
    QLabel *label_start_time;
    QLineEdit *start_time;

    void setupUi(QDialog *singleEventDialog)
    {
        if (singleEventDialog->objectName().isEmpty())
            singleEventDialog->setObjectName(QStringLiteral("singleEventDialog"));
        singleEventDialog->resize(254, 376);
        label_subject = new QLabel(singleEventDialog);
        label_subject->setObjectName(QStringLiteral("label_subject"));
        label_subject->setGeometry(QRect(10, 20, 59, 21));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(14);
        label_subject->setFont(font);
        label_time = new QLabel(singleEventDialog);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(10, 50, 59, 31));
        label_time->setFont(font);
        label_reminder = new QLabel(singleEventDialog);
        label_reminder->setObjectName(QStringLiteral("label_reminder"));
        label_reminder->setGeometry(QRect(10, 195, 59, 31));
        label_reminder->setFont(font);
        label_location = new QLabel(singleEventDialog);
        label_location->setObjectName(QStringLiteral("label_location"));
        label_location->setGeometry(QRect(10, 160, 59, 31));
        label_location->setFont(font);
        label_note = new QLabel(singleEventDialog);
        label_note->setObjectName(QStringLiteral("label_note"));
        label_note->setGeometry(QRect(10, 250, 59, 31));
        label_note->setFont(font);
        subject = new QLineEdit(singleEventDialog);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(60, 10, 161, 31));
        time_year = new QLineEdit(singleEventDialog);
        time_year->setObjectName(QStringLiteral("time_year"));
        time_year->setGeometry(QRect(60, 50, 41, 31));
        time_month = new QLineEdit(singleEventDialog);
        time_month->setObjectName(QStringLiteral("time_month"));
        time_month->setGeometry(QRect(120, 50, 31, 31));
        time_date = new QLineEdit(singleEventDialog);
        time_date->setObjectName(QStringLiteral("time_date"));
        time_date->setGeometry(QRect(170, 50, 31, 31));
        label_year = new QLabel(singleEventDialog);
        label_year->setObjectName(QStringLiteral("label_year"));
        label_year->setGeometry(QRect(100, 45, 21, 31));
        label_year->setFont(font);
        label_month = new QLabel(singleEventDialog);
        label_month->setObjectName(QStringLiteral("label_month"));
        label_month->setGeometry(QRect(150, 45, 21, 31));
        label_month->setFont(font);
        label_date = new QLabel(singleEventDialog);
        label_date->setObjectName(QStringLiteral("label_date"));
        label_date->setGeometry(QRect(200, 45, 21, 31));
        label_date->setFont(font);
        label_duration = new QLabel(singleEventDialog);
        label_duration->setObjectName(QStringLiteral("label_duration"));
        label_duration->setGeometry(QRect(10, 130, 81, 31));
        label_duration->setFont(font);
        duration = new QListWidget(singleEventDialog);
        new QListWidgetItem(duration);
        new QListWidgetItem(duration);
        new QListWidgetItem(duration);
        duration->setObjectName(QStringLiteral("duration"));
        duration->setGeometry(QRect(100, 130, 121, 31));
        location = new QLineEdit(singleEventDialog);
        location->setObjectName(QStringLiteral("location"));
        location->setGeometry(QRect(60, 170, 161, 31));
        reminder = new QListWidget(singleEventDialog);
        new QListWidgetItem(reminder);
        new QListWidgetItem(reminder);
        new QListWidgetItem(reminder);
        new QListWidgetItem(reminder);
        reminder->setObjectName(QStringLiteral("reminder"));
        reminder->setGeometry(QRect(60, 210, 161, 31));
        note = new QTextEdit(singleEventDialog);
        note->setObjectName(QStringLiteral("note"));
        note->setGeometry(QRect(60, 250, 161, 61));
        saveButton = new QPushButton(singleEventDialog);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setEnabled(false);
        saveButton->setGeometry(QRect(10, 320, 101, 32));
        quitButton = new QPushButton(singleEventDialog);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(134, 320, 101, 32));
        label_start_time = new QLabel(singleEventDialog);
        label_start_time->setObjectName(QStringLiteral("label_start_time"));
        label_start_time->setGeometry(QRect(10, 90, 81, 31));
        label_start_time->setFont(font);
        start_time = new QLineEdit(singleEventDialog);
        start_time->setObjectName(QStringLiteral("start_time"));
        start_time->setGeometry(QRect(100, 90, 121, 31));

        retranslateUi(singleEventDialog);

        QMetaObject::connectSlotsByName(singleEventDialog);
    } // setupUi

    void retranslateUi(QDialog *singleEventDialog)
    {
        singleEventDialog->setWindowTitle(QApplication::translate("singleEventDialog", "Dialog", 0));
        label_subject->setText(QApplication::translate("singleEventDialog", "\344\270\273\346\227\250", 0));
        label_time->setText(QApplication::translate("singleEventDialog", "\346\231\202\351\226\223", 0));
        label_reminder->setText(QApplication::translate("singleEventDialog", "\346\217\220\351\206\222", 0));
        label_location->setText(QApplication::translate("singleEventDialog", "\345\234\260\351\273\236", 0));
        label_note->setText(QApplication::translate("singleEventDialog", "\345\202\231\350\250\273", 0));
        label_year->setText(QApplication::translate("singleEventDialog", "\345\271\264", 0));
        label_month->setText(QApplication::translate("singleEventDialog", "\346\234\210", 0));
        label_date->setText(QApplication::translate("singleEventDialog", "\346\227\245", 0));
        label_duration->setText(QApplication::translate("singleEventDialog", "\346\214\201\347\272\214\346\231\202\351\226\223", 0));

        const bool __sortingEnabled = duration->isSortingEnabled();
        duration->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = duration->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("singleEventDialog", "1 hr ", 0));
        QListWidgetItem *___qlistwidgetitem1 = duration->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("singleEventDialog", "2 hr", 0));
        QListWidgetItem *___qlistwidgetitem2 = duration->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("singleEventDialog", "3 hr", 0));
        duration->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = reminder->isSortingEnabled();
        reminder->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = reminder->item(0);
        ___qlistwidgetitem3->setText(QApplication::translate("singleEventDialog", "\347\225\266\344\272\213\344\273\266\347\231\274\347\224\237\346\231\202", 0));
        QListWidgetItem *___qlistwidgetitem4 = reminder->item(1);
        ___qlistwidgetitem4->setText(QApplication::translate("singleEventDialog", "10 min before", 0));
        QListWidgetItem *___qlistwidgetitem5 = reminder->item(2);
        ___qlistwidgetitem5->setText(QApplication::translate("singleEventDialog", "30 min before", 0));
        QListWidgetItem *___qlistwidgetitem6 = reminder->item(3);
        ___qlistwidgetitem6->setText(QApplication::translate("singleEventDialog", "1 hr before", 0));
        reminder->setSortingEnabled(__sortingEnabled1);

        saveButton->setText(QApplication::translate("singleEventDialog", "save", 0));
        quitButton->setText(QApplication::translate("singleEventDialog", "quit", 0));
        label_start_time->setText(QApplication::translate("singleEventDialog", "\351\226\213\345\247\213\346\231\202\351\226\223", 0));
    } // retranslateUi

};

namespace Ui {
    class singleEventDialog: public Ui_singleEventDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEEVENTDIALOG_H
