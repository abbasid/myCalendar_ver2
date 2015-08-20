#ifndef EVENTINFO_H
#define EVENTINFO_H

#include <QString>
#include <QDateTime>

class eventInfo
{
public:
    eventInfo();
    QString getSubject() const;
    void setSubject(const QString &value);

    int getDuration() const;
    void setDuration(int value);

    QString getLocation() const;
    void setLocation(const QString &value);

    int getReminder() const;
    void setReminder(int value);

    QString getNote() const;
    void setNote(const QString &value);

    void setEventTime(const QDateTime &value);
    QDateTime getEventTime() const;

private:
    QString subject;
    QString location;
    QString note;
    QDateTime eventTime;
    int duration;
    int reminder;

};

#endif // EVENTINFO_H
