/********************************************************************************
** Form generated from reading UI file 'reminderdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMINDERDIALOG_H
#define UI_REMINDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_reminderDialog
{
public:
    QTextBrowser *eventInfo;
    QPushButton *addTime;
    QPushButton *deleteEvent;

    void setupUi(QDialog *reminderDialog)
    {
        if (reminderDialog->objectName().isEmpty())
            reminderDialog->setObjectName(QStringLiteral("reminderDialog"));
        reminderDialog->resize(400, 300);
        eventInfo = new QTextBrowser(reminderDialog);
        eventInfo->setObjectName(QStringLiteral("eventInfo"));
        eventInfo->setGeometry(QRect(20, 10, 361, 211));
        addTime = new QPushButton(reminderDialog);
        addTime->setObjectName(QStringLiteral("addTime"));
        addTime->setGeometry(QRect(40, 240, 111, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        addTime->setFont(font);
        deleteEvent = new QPushButton(reminderDialog);
        deleteEvent->setObjectName(QStringLiteral("deleteEvent"));
        deleteEvent->setGeometry(QRect(250, 240, 101, 41));
        deleteEvent->setFont(font);

        retranslateUi(reminderDialog);

        QMetaObject::connectSlotsByName(reminderDialog);
    } // setupUi

    void retranslateUi(QDialog *reminderDialog)
    {
        reminderDialog->setWindowTitle(QApplication::translate("reminderDialog", "Dialog", 0));
        addTime->setText(QApplication::translate("reminderDialog", "Remind me later", 0));
        deleteEvent->setText(QApplication::translate("reminderDialog", "\346\234\225\347\237\245\351\201\223\344\272\206", 0));
    } // retranslateUi

};

namespace Ui {
    class reminderDialog: public Ui_reminderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMINDERDIALOG_H
