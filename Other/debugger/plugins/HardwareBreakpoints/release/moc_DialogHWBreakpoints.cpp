/****************************************************************************
** Meta object code from reading C++ file 'DialogHWBreakpoints.h'
**
** Created: Sat Sep 15 17:41:20 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DialogHWBreakpoints.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogHWBreakpoints.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogHWBreakpoints[] = {

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
      27,   21,   20,   20, 0x08,
      50,   21,   20,   20, 0x08,
      73,   21,   20,   20, 0x08,
      96,   21,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogHWBreakpoints[] = {
    "DialogHWBreakpoints\0\0index\0"
    "type1IndexChanged(int)\0type2IndexChanged(int)\0"
    "type3IndexChanged(int)\0type4IndexChanged(int)\0"
};

void DialogHWBreakpoints::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogHWBreakpoints *_t = static_cast<DialogHWBreakpoints *>(_o);
        switch (_id) {
        case 0: _t->type1IndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->type2IndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->type3IndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->type4IndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogHWBreakpoints::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogHWBreakpoints::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogHWBreakpoints,
      qt_meta_data_DialogHWBreakpoints, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogHWBreakpoints::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogHWBreakpoints::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogHWBreakpoints::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogHWBreakpoints))
        return static_cast<void*>(const_cast< DialogHWBreakpoints*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogHWBreakpoints::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
