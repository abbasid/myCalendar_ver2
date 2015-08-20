#include "singleeventdialog.h"
#include "ui_singleeventdialog.h"

singleEventDialog::singleEventDialog(int row, int column, QDateTime date, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::singleEventDialog)
{
    ui->setupUi(this);
    Event = new eventInfo();
    schedule_row = row;
    schedule_column = column;
    currentDate = date;
    updateDateColumn();
    updateDateRow();
    file = new QFile("userEvent.txt");
    file->open(QIODevice::WriteOnly | QIODevice::Append);
}

void singleEventDialog::updateDateColumn()
{
    QDateTime dateTmp;
    if (local.toString(currentDate, "ddd") == "Sun")
        currentDateColumn = 0;
    else if (local.toString(currentDate, "ddd") == "Mon")
        currentDateColumn = 1;
    else if (local.toString(currentDate, "ddd") == "Tue")
        currentDateColumn = 2;
    else if (local.toString(currentDate, "ddd") == "Wed")
        currentDateColumn = 3;
    else if (local.toString(currentDate, "ddd") == "Thu")
        currentDateColumn = 4;
    else if (local.toString(currentDate, "ddd") == "Fri")
        currentDateColumn = 5;
    else if (local.toString(currentDate, "ddd") == "Sat")
        currentDateColumn = 6;
    dateTmp = currentDate.addDays(schedule_column - currentDateColumn - 1);
    ui->time_year->setText(currentDate.toString("yyyy"));
    ui->time_month->setText(dateTmp.toString("MM"));
    ui->time_date->setText(dateTmp.toString("dd"));
}

void singleEventDialog::updateDateRow()
{
    switch (schedule_row){
    case 1:
        ui->start_time->setText("00:00");
        break;
    case 2:
        ui->start_time->setText("01:00");
        break;
    case 3:
        ui->start_time->setText("02:00");
        break;
    case 4:
        ui->start_time->setText("03:00");
        break;
    case 5:
        ui->start_time->setText("04:00");
        break;
    case 6:
        ui->start_time->setText("05:00");
        break;
    case 7:
        ui->start_time->setText("06:00");
        break;
    case 8:
        ui->start_time->setText("07:00");
        break;
    case 9:
        ui->start_time->setText("08:00");
        break;
    case 10:
        ui->start_time->setText("09:00");
        break;
    case 11:
        ui->start_time->setText("10:00");
        break;
    case 12:
        ui->start_time->setText("11:00");
        break;
    case 13:
        ui->start_time->setText("12:00");
        break;
    case 14:
        ui->start_time->setText("13:00");
        break;
    case 15:
        ui->start_time->setText("14:00");
        break;
    case 16:
        ui->start_time->setText("15:00");
        break;
    case 17:
        ui->start_time->setText("16:00");
        break;
    case 18:
        ui->start_time->setText("17:00");
        break;
    case 19:
        ui->start_time->setText("18:00");
        break;
    case 20:
        ui->start_time->setText("19:00");
        break;
    case 21:
        ui->start_time->setText("20:00");
        break;
    case 22:
        ui->start_time->setText("21:00");
        break;
    case 23:
        ui->start_time->setText("22:00");
        break;
    case 24:
        ui->start_time->setText("23:00");
        break;
    }
}

QString singleEventDialog::toString()
{
    QString eventString = Event->getSubject() + "\t" + Event->getLocation() + "\t" + Event->getNote() + "\t" + Event->getEventTime().toString("yyyyMMddhhmm") + "\t" + QString::number(Event->getDuration()) + "\t" + QString::number(Event->getReminder()) + "\t" + QString::number(schedule_row) + "\t" + QString::number(schedule_column);
    return eventString;
}

singleEventDialog::~singleEventDialog()
{
    file->close();
    delete Event;
    delete file;
    delete ui;
}

void singleEventDialog::on_saveButton_clicked()
{
    QDateTime dateTimeTmp = QDateTime::fromString((ui->time_year->text() + ui->time_month->text() + ui->time_date->text() + ui->start_time->text()), "yyyyMMddhh:mm");
    Event->setSubject(ui->subject->text());
    Event->setReminder(ui->reminder->currentRow());
    Event->setDuration(ui->duration->currentRow() + 1);
    Event->setEventTime(dateTimeTmp);
    Event->setLocation(ui->location->text());
    Event->setNote(ui->note->toPlainText());
    emit sendDuration(ui->duration->currentRow());
    emit sendSubject(ui->subject->text());
    emit sendEventTime(Event->getEventTime());
    emit sendReminder(Event->getReminder());
    emit sendLocationandNote(Event->getLocation(), Event->getNote());
    QTextStream out(file);
    out << "\r\n" << this->toString();
    this->close();
}

void singleEventDialog::on_note_textChanged()
{
    ui->saveButton->setEnabled(true);
}
