#include "mycalendar.h"
#include "ui_mycalendar.h"

MyCalendar::MyCalendar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyCalendar)
{
    ui->setupUi(this);
    clock = new QTimer;
    clock->setInterval(10000);
    file  = new QFile("userEvent.txt");
    ui->scheduleTable->setRowCount(24);
    ui->scheduleTable->setColumnCount(8);
    date = date.currentDateTime();
    updateDate();
    addTimeInterval();
    readHistory();
    updateCalendar();
    connect(clock, SIGNAL(timeout()),this, SLOT(updateTime()));
    connect(clock, SIGNAL(timeout()), this, SLOT(checkScheduleTime()));
    clock->start();
}

void MyCalendar::updateDate()
{
    QDateTime dateTmp;
    int currentDay;
    QLocale local = QLocale::English;
    if (local.toString(date, "ddd") == "Sun")
        currentDay = 0;
    else if (local.toString(date, "ddd") == "Mon")
        currentDay = 1;
    else if (local.toString(date, "ddd") == "Tue")
        currentDay = 2;
    else if (local.toString(date, "ddd") == "Wed")
        currentDay = 3;
    else if (local.toString(date, "ddd") == "Thu")
        currentDay = 4;
    else if (local.toString(date, "ddd") == "Fri")
        currentDay = 5;
    else if (local.toString(date, "ddd") == "Sat")
        currentDay = 6;

    for(int i = 0; i < 7; i++)
    {
        dateTmp = date.addDays(-currentDay + i);
        ui->scheduleTable->setItem(0, i + 1, new QTableWidgetItem(local.toString(dateTmp,"yy/MM/dd ddd.")));
    }
}

void MyCalendar::updateCalendar()
{
    qDebug() << mySubject.size() << myLocation.size() << myTime.size() << myDuration.size() << myReminder.size() << myNote.size() << myRow.size() << myColumn.size();

    for(int i = 0; i < myDuration.size(); i ++)
    {

        if(myDuration.at(i) == 0)
        {
            ui->scheduleTable->setItem(myRow.at(i), myColumn.at(i), new QTableWidgetItem(mySubject.at(i)));
            ui->scheduleTable->item(myRow.at(i), myColumn.at(i))->setBackground(Qt::red);
        }
        else if(myDuration.at(i) == 1)
        {
            for(int j = 0; j < 2; j++)
            {
                ui->scheduleTable->setItem(myRow.at(i) + j, myColumn.at(i), new QTableWidgetItem(mySubject.at(i)));
                ui->scheduleTable->item(myRow.at(i) + j, myColumn.at(i))->setBackground(Qt::red);
            }
        }
        else if(myDuration.at(i) == 2)
        {
            for(int j = 0; j < 3; j++)
            {
                ui->scheduleTable->setItem(myRow.at(i) + j, myColumn.at(i), new QTableWidgetItem(mySubject.at(i)));
                ui->scheduleTable->item(myRow.at(i) + j, myColumn.at(i))->setBackground(Qt::red);
            }
        }
    }
}

void MyCalendar::addTimeInterval()
{
    ui->scheduleTable->setItem( 1, 0, new QTableWidgetItem("0:00 ~ 1:00"));
    ui->scheduleTable->setItem( 2, 0, new QTableWidgetItem("1:00 ~ 2:00"));
    ui->scheduleTable->setItem( 3, 0, new QTableWidgetItem("2:00 ~ 3:00"));
    ui->scheduleTable->setItem( 4, 0, new QTableWidgetItem("3:00 ~ 4:00"));
    ui->scheduleTable->setItem( 5, 0, new QTableWidgetItem("4:00 ~ 5:00"));
    ui->scheduleTable->setItem( 6, 0, new QTableWidgetItem("5:00 ~ 6:00"));
    ui->scheduleTable->setItem( 7, 0, new QTableWidgetItem("6:00 ~ 7:00"));
    ui->scheduleTable->setItem( 8, 0, new QTableWidgetItem("7:00 ~ 8:00"));
    ui->scheduleTable->setItem( 9, 0, new QTableWidgetItem("8:00 ~ 9:00"));
    ui->scheduleTable->setItem( 10, 0, new QTableWidgetItem("9:00 ~ 10:00"));
    ui->scheduleTable->setItem( 11, 0, new QTableWidgetItem("10:00 ~ 11:00"));
    ui->scheduleTable->setItem( 12, 0, new QTableWidgetItem("11:00 ~ 12:00"));
    ui->scheduleTable->setItem( 13, 0, new QTableWidgetItem("12:00 ~ 13:00"));
    ui->scheduleTable->setItem( 14, 0, new QTableWidgetItem("13:00 ~ 14:00"));
    ui->scheduleTable->setItem( 15, 0, new QTableWidgetItem("14:00 ~ 15:00"));
    ui->scheduleTable->setItem( 16, 0, new QTableWidgetItem("15:00 ~ 16:00"));
    ui->scheduleTable->setItem( 17, 0, new QTableWidgetItem("16:00 ~ 17:00"));
    ui->scheduleTable->setItem( 18, 0, new QTableWidgetItem("17:00 ~ 18:00"));
    ui->scheduleTable->setItem( 19, 0, new QTableWidgetItem("18:00 ~ 19:00"));
    ui->scheduleTable->setItem( 20, 0, new QTableWidgetItem("19:00 ~ 20:00"));
    ui->scheduleTable->setItem( 21, 0, new QTableWidgetItem("20:00 ~ 21:00"));
    ui->scheduleTable->setItem( 22, 0, new QTableWidgetItem("21:00 ~ 22:00"));
    ui->scheduleTable->setItem( 23, 0, new QTableWidgetItem("22:00 ~ 23:00"));
    ui->scheduleTable->setItem( 24, 0, new QTableWidgetItem("23:00 ~ 24:00"));
}

void MyCalendar::readHistory()
{
    QString subjectTmp;
    QString locationTmp;
    QString timeTmp;
    QString noteTmp;
    int durationTmp;
    int reminderTmp;
    int rowTmp;
    int columnTmp;
    file->open(QIODevice::ReadOnly);
    QTextStream in(file);
    while (!in.atEnd()) {
        in >> subjectTmp >> locationTmp >> noteTmp >> timeTmp >> durationTmp >> reminderTmp >> rowTmp >> columnTmp;
        mySubject.append(subjectTmp);
        myLocation.append(locationTmp);
        myTime.append(QDateTime::fromString(timeTmp, "yyyyMMddhhmm"));
        myDuration.append(durationTmp);
        myReminder.append(reminderTmp);
        myNote.append(noteTmp);
        myRow.append(rowTmp);
        myColumn.append(columnTmp);
    }
}

MyCalendar::~MyCalendar()
{
    delete clock;
    delete ui;
}

void MyCalendar::checkScheduleTime()
{
    QDateTime myTimeTmp;
    for(int i = 0; i < myTime.size(); i++)
    {
        myTimeTmp = myTime.at(i);
        if(myReminder.at(i) == 3)
            myTimeTmp.addSecs(-3600);
        else if(myReminder.at(i) == 2)
            myTimeTmp.addSecs(-1800);
        else if(myReminder.at(i) == 1)
            myTimeTmp.addSecs(-600);
        if(currentTime.toString("yyyyMMddhhmm") == myTimeTmp.toString("yyyyMMddhhmm"))
        {
              reminderDialog reminderdialog(mySubject.at(i), myLocation.at(i), myTime.at(i), myNote.at(i), i);
              reminderdialog.setModal(true);
              connect(&reminderdialog, SIGNAL(sendRemovedIndex(int)), this, SLOT(receiveRemovedIndex(int)));
              reminderdialog.exec();
        }
    }
     updateCalendar();
}

void MyCalendar::updateTime()
{
    currentTime = currentTime.currentDateTime();
}

void MyCalendar::on_lastWeek_clicked()
{
    date = date.addDays(-7);
    updateDate();
}

void MyCalendar::on_nextWeek_clicked()
{
    date = date.addDays(7);
    updateDate();
}

void MyCalendar::on_scheduleTable_cellClicked(int row, int column)
{
   myRow.append(row);
   myColumn.append(column);
   singleEventDialog myEvent(row, column, date);
   myEvent.setModal(true);
   connect(&myEvent, SIGNAL(sendDuration(int)), this, SLOT(receiveDuration(int)));
   connect(&myEvent, SIGNAL(sendSubject(QString)), this, SLOT(receiveSubject(QString)));
   connect(&myEvent, SIGNAL(sendEventTime(QDateTime)), this, SLOT(receiveEventTime(QDateTime)));
   connect(&myEvent, SIGNAL(sendReminder(int)), this, SLOT(receiveReminder(int)));
   connect(&myEvent, SIGNAL(sendLocationandNote(QString, QString)), this, SLOT(receiveLocationandNote(QString,QString)));
   myEvent.exec();
   updateCalendar();

}

void MyCalendar::receiveDuration(int duration)
{
    myDuration.append(duration);
}

void MyCalendar::receiveSubject(QString subject)
{
    mySubject.append(subject);
}

void MyCalendar::receiveEventTime(QDateTime time)
{
    myTime.append(time);
}

void MyCalendar::receiveReminder(int reminder)
{
    myReminder.append(reminder);
}

void MyCalendar::receiveLocationandNote(QString location, QString note)
{
    myLocation.append(location);
    myNote.append(note);
}

void MyCalendar::receiveRemovedIndex(int index)
{
    qDebug() << "Hello";
    ui->scheduleTable->clear();
    mySubject.remove(index);
    myLocation.remove(index);
    myTime.remove(index);
    myNote.remove(index);
    myDuration.remove(index);
    myReminder.remove(index);
    myRow.remove(index);
    myColumn.remove(index);ui->scheduleTable->setRowCount(24);
    ui->scheduleTable->setColumnCount(8);
    updateDate();
    addTimeInterval();
    updateCalendar();
}
