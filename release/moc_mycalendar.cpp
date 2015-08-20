/****************************************************************************
** Meta object code from reading C++ file 'mycalendar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mycalendar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycalendar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyCalendar_t {
    QByteArrayData data[24];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyCalendar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyCalendar_t qt_meta_stringdata_MyCalendar = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyCalendar"
QT_MOC_LITERAL(1, 11, 19), // "on_lastWeek_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "on_nextWeek_clicked"
QT_MOC_LITERAL(4, 52, 28), // "on_scheduleTable_cellClicked"
QT_MOC_LITERAL(5, 81, 3), // "row"
QT_MOC_LITERAL(6, 85, 6), // "column"
QT_MOC_LITERAL(7, 92, 15), // "receiveDuration"
QT_MOC_LITERAL(8, 108, 8), // "duration"
QT_MOC_LITERAL(9, 117, 14), // "receiveSubject"
QT_MOC_LITERAL(10, 132, 7), // "subject"
QT_MOC_LITERAL(11, 140, 16), // "receiveEventTime"
QT_MOC_LITERAL(12, 157, 4), // "time"
QT_MOC_LITERAL(13, 162, 15), // "receiveReminder"
QT_MOC_LITERAL(14, 178, 8), // "reminder"
QT_MOC_LITERAL(15, 187, 22), // "receiveLocationandNote"
QT_MOC_LITERAL(16, 210, 8), // "location"
QT_MOC_LITERAL(17, 219, 4), // "note"
QT_MOC_LITERAL(18, 224, 19), // "receiveRemovedIndex"
QT_MOC_LITERAL(19, 244, 5), // "index"
QT_MOC_LITERAL(20, 250, 22), // "receiveReminderMeLater"
QT_MOC_LITERAL(21, 273, 17), // "checkScheduleTime"
QT_MOC_LITERAL(22, 291, 10), // "updateTime"
QT_MOC_LITERAL(23, 302, 23) // "on_searchButton_clicked"

    },
    "MyCalendar\0on_lastWeek_clicked\0\0"
    "on_nextWeek_clicked\0on_scheduleTable_cellClicked\0"
    "row\0column\0receiveDuration\0duration\0"
    "receiveSubject\0subject\0receiveEventTime\0"
    "time\0receiveReminder\0reminder\0"
    "receiveLocationandNote\0location\0note\0"
    "receiveRemovedIndex\0index\0"
    "receiveReminderMeLater\0checkScheduleTime\0"
    "updateTime\0on_searchButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyCalendar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    2,   81,    2, 0x08 /* Private */,
       7,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      11,    1,   92,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      15,    2,   98,    2, 0x08 /* Private */,
      18,    1,  103,    2, 0x08 /* Private */,
      20,    1,  106,    2, 0x08 /* Private */,
      21,    0,  109,    2, 0x08 /* Private */,
      22,    0,  110,    2, 0x08 /* Private */,
      23,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QDateTime,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyCalendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyCalendar *_t = static_cast<MyCalendar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lastWeek_clicked(); break;
        case 1: _t->on_nextWeek_clicked(); break;
        case 2: _t->on_scheduleTable_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->receiveDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->receiveSubject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->receiveEventTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 6: _t->receiveReminder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->receiveLocationandNote((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->receiveRemovedIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->receiveReminderMeLater((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->checkScheduleTime(); break;
        case 11: _t->updateTime(); break;
        case 12: _t->on_searchButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MyCalendar::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MyCalendar.data,
      qt_meta_data_MyCalendar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyCalendar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyCalendar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyCalendar.stringdata0))
        return static_cast<void*>(const_cast< MyCalendar*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MyCalendar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
