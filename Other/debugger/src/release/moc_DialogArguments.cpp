/****************************************************************************
** Meta object code from reading C++ file 'DialogArguments.h'
**
** Created: Sat Sep 15 17:40:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DialogArguments.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogArguments.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogArguments[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      37,   16,   16,   16, 0x0a,
      57,   16,   16,   16, 0x0a,
      76,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DialogArguments[] = {
    "DialogArguments\0\0on_btnAdd_clicked()\0"
    "on_btnDel_clicked()\0on_btnUp_clicked()\0"
    "on_btnDown_clicked()\0"
};

void DialogArguments::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogArguments *_t = static_cast<DialogArguments *>(_o);
        switch (_id) {
        case 0: _t->on_btnAdd_clicked(); break;
        case 1: _t->on_btnDel_clicked(); break;
        case 2: _t->on_btnUp_clicked(); break;
        case 3: _t->on_btnDown_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DialogArguments::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogArguments::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogArguments,
      qt_meta_data_DialogArguments, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogArguments::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogArguments::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogArguments::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogArguments))
        return static_cast<void*>(const_cast< DialogArguments*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogArguments::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
