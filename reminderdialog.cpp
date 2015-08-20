#include "reminderdialog.h"
#include "ui_reminderdialog.h"

reminderDialog::reminderDialog(QString subject, QString location, QDateTime time, QString note, int index, bool search, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reminderDialog)
{
    codec = QTextCodec::codecForName("Big5");
    ui->setupUi(this);
    ui->eventInfo->append(codec->toUnicode("標題"));
    ui->eventInfo->append("\t" + subject);
    ui->eventInfo->append(codec->toUnicode("位置"));
    ui->eventInfo->append("\t" + location);
    ui->eventInfo->append(codec->toUnicode("時間"));
    ui->eventInfo->append("\t" + time.toString("yyyy/MM/dd hh:mm"));
    ui->eventInfo->append(codec->toUnicode("備註"));
    ui->eventInfo->append("\t" + note);
    removeIndex = index;
    if(search)
    {
        ui->addTime->setEnabled(false);
        ui->deleteEvent->setEnabled(false);
    }
}

reminderDialog::~reminderDialog()
{
    delete ui;
}

void reminderDialog::on_deleteEvent_clicked()
{
    emit sendRemovedIndex(removeIndex);
    this->close();
}

void reminderDialog::on_addTime_clicked()
{
    emit sendRemindMeLater(removeIndex);
    this->close();
}
