/****************************************************************************
** Meta object code from reading C++ file 'choose.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../intshop/choose.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choose.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Choose_t {
    uint offsetsAndSizes[18];
    char stringdata0[7];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[16];
    char stringdata5[16];
    char stringdata6[18];
    char stringdata7[18];
    char stringdata8[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Choose_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Choose_t qt_meta_stringdata_Choose = {
    {
        QT_MOC_LITERAL(0, 6),  // "Choose"
        QT_MOC_LITERAL(7, 4),  // "back"
        QT_MOC_LITERAL(12, 0),  // ""
        QT_MOC_LITERAL(13, 15),  // "on_back_clicked"
        QT_MOC_LITERAL(29, 15),  // "on_open_clicked"
        QT_MOC_LITERAL(45, 15),  // "on_edit_clicked"
        QT_MOC_LITERAL(61, 17),  // "on_create_clicked"
        QT_MOC_LITERAL(79, 17),  // "on_spisok_clicked"
        QT_MOC_LITERAL(97, 15)   // "on_logi_clicked"
    },
    "Choose",
    "back",
    "",
    "on_back_clicked",
    "on_open_clicked",
    "on_edit_clicked",
    "on_create_clicked",
    "on_spisok_clicked",
    "on_logi_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Choose[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Choose::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Choose *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->back(); break;
        case 1: _t->on_back_clicked(); break;
        case 2: _t->on_open_clicked(); break;
        case 3: _t->on_edit_clicked(); break;
        case 4: _t->on_create_clicked(); break;
        case 5: _t->on_spisok_clicked(); break;
        case 6: _t->on_logi_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Choose::*)();
            if (_t _q_method = &Choose::back; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject Choose::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Choose.offsetsAndSizes,
    qt_meta_data_Choose,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Choose_t
, QtPrivate::TypeAndForceComplete<Choose, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Choose::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Choose::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Choose.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Choose::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Choose::back()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
