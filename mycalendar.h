#ifndef MYCALENDAR_H
#define MYCALENDAR_H

#include <QMainWindow>
#include <QDateTime>
#include <qDebug>
#include <QLocale>
#include <QTimer>
#include <QVector>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include <QByteArray>
#include "singleeventdialog.h"
#include "reminderdialog.h"
#include "eventinfo.h"

namespace Ui {
class MyCalendar;
}

class MyCalendar : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyCalendar(QWidget *parent = 0);
    void updateDate();
    void updateCalendar();
    void addTimeInterval();
    int getDuration() const;
    void setDuration(int value);
    void readHistory();
    void flushHistory();
    ~MyCalendar();


private slots:
    void on_lastWeek_clicked();
    void on_nextWeek_clicked();
    void on_scheduleTable_cellClicked(int row, int column);
    void receiveDuration(int duration);
    void receiveSubject(QString subject);
    void receiveEventTime(QDateTime time);
    void receiveReminder(int reminder);
    void receiveLocationandNote(QString location, QString note);
    void receiveRemovedIndex(int index);
    void receiveReminderMeLater(int index);
    void checkScheduleTime();
    void updateTime();

    void on_searchButton_clicked();

private:
    Ui::MyCalendar *ui;
    QDateTime date;
    QDateTime currentTime;
    QVector<QDateTime> myTime;
    QVector<QString> mySubject;
    QVector<QString> myLocation;
    QVector<QString> myNote;
    QVector<int> myDuration;
    QVector<int> myReminder;
    QVector<int> myRow;
    QVector<int> myColumn;
    QTimer *clock;
    QFile *file;
    QTextCodec *codec;
};

#endif // MYCALENDAR_H
