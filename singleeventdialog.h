#ifndef SINGLEEVENTDIALOG_H
#define SINGLEEVENTDIALOG_H

#include <QDialog>
#include <QVector>
#include <QDateTime>
#include <QLocale>
#include <QFile>
#include <QTextStream>
#include "eventinfo.h"
#include "mycalendar.h"

namespace Ui {
class singleEventDialog;
}

class singleEventDialog : public QDialog
{
    Q_OBJECT

public:
    explicit singleEventDialog(int row, int column, QDateTime date, QWidget *parent = 0);
    void updateDateColumn();
    void updateDateRow();
    QString toString();
    ~singleEventDialog();

signals:
    void sendDuration(int duration);
    void sendSubject(QString subject);
    void sendEventTime(QDateTime eventTime);
    void sendReminder(int reminder);
    void sendLocationandNote(QString,QString);
    void sendRowAndColumn(int, int);

private slots:
    void on_saveButton_clicked();

    void on_note_textChanged();

    void on_quitButton_clicked();

private:
    Ui::singleEventDialog *ui;
    eventInfo *Event;
    QDateTime currentDate;
    QFile *file;
    int schedule_row;
    int schedule_column;
    int currentDateColumn;
    QLocale local = QLocale::English;
};

#endif // SINGLEEVENTDIALOG_H
