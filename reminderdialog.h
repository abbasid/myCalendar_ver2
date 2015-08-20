#ifndef REMINDERDIALOG_H
#define REMINDERDIALOG_H

#include <QDialog>
#include <QDateTime>

namespace Ui {
class reminderDialog;
}

class reminderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit reminderDialog(QString subject, QString location, QDateTime time, QString note, int index, QWidget *parent = 0);
    ~reminderDialog();

signals:
    void sendRemovedIndex(int index);

private slots:
    void on_deleteEvent_clicked();

private:
    Ui::reminderDialog *ui;
    int removeIndex;
};

#endif // REMINDERDIALOG_H
