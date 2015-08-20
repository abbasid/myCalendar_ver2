/****************************************************************************
** Meta object code from reading C++ file 'singleeventdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../singleeventdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singleeventdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_singleEventDialog_t {
    QByteArrayData data[13];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_singleEventDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_singleEventDialog_t qt_meta_stringdata_singleEventDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "singleEventDialog"
QT_MOC_LITERAL(1, 18, 12), // "sendDuration"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "duration"
QT_MOC_LITERAL(4, 41, 11), // "sendSubject"
QT_MOC_LITERAL(5, 53, 7), // "subject"
QT_MOC_LITERAL(6, 61, 13), // "sendEventTime"
QT_MOC_LITERAL(7, 75, 9), // "eventTime"
QT_MOC_LITERAL(8, 85, 12), // "sendReminder"
QT_MOC_LITERAL(9, 98, 8), // "reminder"
QT_MOC_LITERAL(10, 107, 19), // "sendLocationandNote"
QT_MOC_LITERAL(11, 127, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(12, 149, 19) // "on_note_textChanged"

    },
    "singleEventDialog\0sendDuration\0\0"
    "duration\0sendSubject\0subject\0sendEventTime\0"
    "eventTime\0sendReminder\0reminder\0"
    "sendLocationandNote\0on_saveButton_clicked\0"
    "on_note_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_singleEventDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
      10,    2,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QDateTime,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void singleEventDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        singleEventDialog *_t = static_cast<singleEventDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendSubject((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendEventTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 3: _t->sendReminder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendLocationandNote((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->on_saveButton_clicked(); break;
        case 6: _t->on_note_textChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (singleEventDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&singleEventDialog::sendDuration)) {
                *result = 0;
            }
        }
        {
            typedef void (singleEventDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&singleEventDialog::sendSubject)) {
                *result = 1;
            }
        }
        {
            typedef void (singleEventDialog::*_t)(QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&singleEventDialog::sendEventTime)) {
                *result = 2;
            }
        }
        {
            typedef void (singleEventDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&singleEventDialog::sendReminder)) {
                *result = 3;
            }
        }
        {
            typedef void (singleEventDialog::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&singleEventDialog::sendLocationandNote)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject singleEventDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_singleEventDialog.data,
      qt_meta_data_singleEventDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *singleEventDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *singleEventDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_singleEventDialog.stringdata0))
        return static_cast<void*>(const_cast< singleEventDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int singleEventDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void singleEventDialog::sendDuration(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void singleEventDialog::sendSubject(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void singleEventDialog::sendEventTime(QDateTime _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void singleEventDialog::sendReminder(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void singleEventDialog::sendLocationandNote(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
