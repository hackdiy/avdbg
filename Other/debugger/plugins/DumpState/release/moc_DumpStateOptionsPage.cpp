/****************************************************************************
** Meta object code from reading C++ file 'DumpStateOptionsPage.h'
**
** Created: Sat Sep 15 17:41:14 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DumpStateOptionsPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DumpStateOptionsPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DumpStateOptionsPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   22,   21,   21, 0x0a,
      66,   22,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DumpStateOptionsPage[] = {
    "DumpStateOptionsPage\0\0i\0"
    "on_instructionsBeforeIP_valueChanged(int)\0"
    "on_instructionsAfterIP_valueChanged(int)\0"
};

void DumpStateOptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DumpStateOptionsPage *_t = static_cast<DumpStateOptionsPage *>(_o);
        switch (_id) {
        case 0: _t->on_instructionsBeforeIP_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_instructionsAfterIP_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DumpStateOptionsPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DumpStateOptionsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DumpStateOptionsPage,
      qt_meta_data_DumpStateOptionsPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DumpStateOptionsPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DumpStateOptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DumpStateOptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DumpStateOptionsPage))
        return static_cast<void*>(const_cast< DumpStateOptionsPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int DumpStateOptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
