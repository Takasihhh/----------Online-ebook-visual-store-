/****************************************************************************
** Meta object code from reading C++ file 'main_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OEVS/main_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_main_interface_t {
    QByteArrayData data[16];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_main_interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_main_interface_t qt_meta_stringdata_main_interface = {
    {
QT_MOC_LITERAL(0, 0, 14), // "main_interface"
QT_MOC_LITERAL(1, 15, 11), // "CloseWindow"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "MinisizeWindow"
QT_MOC_LITERAL(4, 43, 8), // "NextPage"
QT_MOC_LITERAL(5, 52, 8), // "LastPage"
QT_MOC_LITERAL(6, 61, 14), // "SearchNextPage"
QT_MOC_LITERAL(7, 76, 14), // "SearchLastPage"
QT_MOC_LITERAL(8, 91, 6), // "Bind01"
QT_MOC_LITERAL(9, 98, 6), // "Bind02"
QT_MOC_LITERAL(10, 105, 6), // "Bind03"
QT_MOC_LITERAL(11, 112, 6), // "Bind04"
QT_MOC_LITERAL(12, 119, 6), // "Bind05"
QT_MOC_LITERAL(13, 126, 6), // "Bind06"
QT_MOC_LITERAL(14, 133, 6), // "Search"
QT_MOC_LITERAL(15, 140, 15) // "OpenPersonalWnd"

    },
    "main_interface\0CloseWindow\0\0MinisizeWindow\0"
    "NextPage\0LastPage\0SearchNextPage\0"
    "SearchLastPage\0Bind01\0Bind02\0Bind03\0"
    "Bind04\0Bind05\0Bind06\0Search\0OpenPersonalWnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_main_interface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x09 /* Protected */,
       3,    0,   85,    2, 0x09 /* Protected */,
       4,    0,   86,    2, 0x09 /* Protected */,
       5,    0,   87,    2, 0x09 /* Protected */,
       6,    0,   88,    2, 0x09 /* Protected */,
       7,    0,   89,    2, 0x09 /* Protected */,
       8,    0,   90,    2, 0x09 /* Protected */,
       9,    0,   91,    2, 0x09 /* Protected */,
      10,    0,   92,    2, 0x09 /* Protected */,
      11,    0,   93,    2, 0x09 /* Protected */,
      12,    0,   94,    2, 0x09 /* Protected */,
      13,    0,   95,    2, 0x09 /* Protected */,
      14,    0,   96,    2, 0x09 /* Protected */,
      15,    0,   97,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void main_interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        main_interface *_t = static_cast<main_interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseWindow(); break;
        case 1: _t->MinisizeWindow(); break;
        case 2: _t->NextPage(); break;
        case 3: _t->LastPage(); break;
        case 4: _t->SearchNextPage(); break;
        case 5: _t->SearchLastPage(); break;
        case 6: _t->Bind01(); break;
        case 7: _t->Bind02(); break;
        case 8: _t->Bind03(); break;
        case 9: _t->Bind04(); break;
        case 10: _t->Bind05(); break;
        case 11: _t->Bind06(); break;
        case 12: _t->Search(); break;
        case 13: _t->OpenPersonalWnd(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject main_interface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_main_interface.data,
      qt_meta_data_main_interface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *main_interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *main_interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_main_interface.stringdata0))
        return static_cast<void*>(const_cast< main_interface*>(this));
    return QWidget::qt_metacast(_clname);
}

int main_interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
