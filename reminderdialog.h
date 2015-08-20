#ifndef REMINDERDIALOG_H
#define REMINDERDIALOG_H

#include <QDialog>
#include <QDateTime>
#include <QTextCodec>

namespace Ui {
class reminderDialog;
}

class reminderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit reminderDialog(QString subject, QString location, QDateTime time, QString note, int index, bool search, QWidget *parent = 0);
    ~reminderDialog();

signals:
    void sendRemovedIndex(int index);
    void sendRemindMeLater(int index);

private slots:
    void on_deleteEvent_clicked();

    void on_addTime_clicked();

private:
    Ui::reminderDialog *ui;
    int removeIndex;
    QTextCodec *codec;
};

#endif // REMINDERDIALOG_H
