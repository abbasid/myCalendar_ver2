#include "reminderdialog.h"
#include "ui_reminderdialog.h"

reminderDialog::reminderDialog(QString subject, QString location, QDateTime time, QString note, int index, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reminderDialog)
{
    ui->setupUi(this);
    ui->eventInfo->append("標題");
    ui->eventInfo->append("\t" + subject);
    ui->eventInfo->append("位置");
    ui->eventInfo->append("\t" + location);
    ui->eventInfo->append("時間");
    ui->eventInfo->append("\t" + time.toString("yyyy/MM/dd hh:mm"));
    ui->eventInfo->append("備註");
    ui->eventInfo->append("\t" + note);
    removeIndex = index;
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
