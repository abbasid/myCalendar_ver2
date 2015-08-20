#include "eventinfo.h"

eventInfo::eventInfo()
{

}

QString eventInfo::getSubject() const
{
    return subject;
}

void eventInfo::setSubject(const QString &value)
{
    subject = value;
}

int eventInfo::getDuration() const
{
    return duration;
}

void eventInfo::setDuration(int value)
{
    duration = value;
}
QString eventInfo::getLocation() const
{
    return location;
}

void eventInfo::setLocation(const QString &value)
{
    location = value;
}
int eventInfo::getReminder() const
{
    return reminder;
}

void eventInfo::setReminder(int value)
{
    reminder = value;
}
QString eventInfo::getNote() const
{
    return note;
}

void eventInfo::setNote(const QString &value)
{
    note = value;
}

void eventInfo::setEventTime(const QDateTime &value)
{
    eventTime = value;
}
QDateTime eventInfo::getEventTime() const
{
    return eventTime;
}














