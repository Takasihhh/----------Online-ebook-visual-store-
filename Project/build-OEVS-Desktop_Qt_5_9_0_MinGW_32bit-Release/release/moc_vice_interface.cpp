/****************************************************************************
** Meta object code from reading C++ file 'vice_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OEVS/vice_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vice_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_vice_interface_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_vice_interface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_vice_interface_t qt_meta_stringdata_vice_interface = {
    {
QT_MOC_LITERAL(0, 0, 14), // "vice_interface"
QT_MOC_LITERAL(1, 15, 11), // "CloseWindow"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "MinisizeWindow"
QT_MOC_LITERAL(4, 43, 11), // "OpenViewWnd"
QT_MOC_LITERAL(5, 55, 10), // "UpdateBook"
QT_MOC_LITERAL(6, 66, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 83, 4), // "item"
QT_MOC_LITERAL(8, 88, 7) // "Openurl"

    },
    "vice_interface\0CloseWindow\0\0MinisizeWindow\0"
    "OpenViewWnd\0UpdateBook\0QListWidgetItem*\0"
    "item\0Openurl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_vice_interface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       8,    0,   45,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void vice_interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vice_interface *_t = static_cast<vice_interface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseWindow(); break;
        case 1: _t->MinisizeWindow(); break;
        case 2: _t->OpenViewWnd(); break;
        case 3: _t->UpdateBook((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->Openurl(); break;
        default: ;
        }
    }
}

const QMetaObject vice_interface::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_vice_interface.data,
      qt_meta_data_vice_interface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *vice_interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *vice_interface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_vice_interface.stringdata0))
        return static_cast<void*>(const_cast< vice_interface*>(this));
    return QWidget::qt_metacast(_clname);
}

int vice_interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
