/****************************************************************************
** Meta object code from reading C++ file 'editstudbook.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../intshop/editstudbook.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editstudbook.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditStudBook_t {
    uint offsetsAndSizes[18];
    char stringdata0[13];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[6];
    char stringdata5[16];
    char stringdata6[16];
    char stringdata7[22];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_EditStudBook_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_EditStudBook_t qt_meta_stringdata_EditStudBook = {
    {
        QT_MOC_LITERAL(0, 12),  // "EditStudBook"
        QT_MOC_LITERAL(13, 4),  // "back"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 21),  // "on_editName_activated"
        QT_MOC_LITERAL(41, 5),  // "index"
        QT_MOC_LITERAL(47, 15),  // "on_save_clicked"
        QT_MOC_LITERAL(63, 15),  // "on_back_clicked"
        QT_MOC_LITERAL(79, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(101, 23)   // "on_editName_highlighted"
    },
    "EditStudBook",
    "back",
    "",
    "on_editName_activated",
    "index",
    "on_save_clicked",
    "on_back_clicked",
    "on_pushButton_clicked",
    "on_editName_highlighted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditStudBook[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   51,    2, 0x08,    2 /* Private */,
       5,    0,   54,    2, 0x08,    4 /* Private */,
       6,    0,   55,    2, 0x08,    5 /* Private */,
       7,    0,   56,    2, 0x08,    6 /* Private */,
       8,    1,   57,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void EditStudBook::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditStudBook *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->on_editName_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_save_clicked(); break;
        case 3: _t->on_back_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_editName_highlighted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditStudBook::*)();
            if (_t _q_method = &EditStudBook::back; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject EditStudBook::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EditStudBook.offsetsAndSizes,
    qt_meta_data_EditStudBook,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_EditStudBook_t
, QtPrivate::TypeAndForceComplete<EditStudBook, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *EditStudBook::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditStudBook::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditStudBook.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EditStudBook::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void EditStudBook::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
