/****************************************************************************
** Meta object code from reading C++ file 'bookpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bookpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BookPage_t {
    QByteArrayData data[6];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookPage_t qt_meta_stringdata_BookPage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BookPage"
QT_MOC_LITERAL(1, 9, 11), // "CloseWindow"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "MinisizeWindow"
QT_MOC_LITERAL(4, 37, 8), // "BackMWnd"
QT_MOC_LITERAL(5, 46, 10) // "OpenBuyWnd"

    },
    "BookPage\0CloseWindow\0\0MinisizeWindow\0"
    "BackMWnd\0OpenBuyWnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    0,   36,    2, 0x09 /* Protected */,
       5,    0,   37,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BookPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookPage *_t = static_cast<BookPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseWindow(); break;
        case 1: _t->MinisizeWindow(); break;
        case 2: _t->BackMWnd(); break;
        case 3: _t->OpenBuyWnd(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BookPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BookPage.data,
      qt_meta_data_BookPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BookPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookPage.stringdata0))
        return static_cast<void*>(const_cast< BookPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int BookPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
