/****************************************************************************
** Meta object code from reading C++ file 'protocoldeal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Protocol_test/protocoldeal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocoldeal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProducerFromBottom_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProducerFromBottom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProducerFromBottom_t qt_meta_stringdata_ProducerFromBottom = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ProducerFromBottom"
QT_MOC_LITERAL(1, 19, 14), // "ReadyreadSlots"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "ProducerFromBottom\0ReadyreadSlots\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProducerFromBottom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ProducerFromBottom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProducerFromBottom *_t = static_cast<ProducerFromBottom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReadyreadSlots(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ProducerFromBottom::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ProducerFromBottom.data,
      qt_meta_data_ProducerFromBottom,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProducerFromBottom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProducerFromBottom::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProducerFromBottom.stringdata0))
        return static_cast<void*>(const_cast< ProducerFromBottom*>(this));
    return QThread::qt_metacast(_clname);
}

int ProducerFromBottom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_WriteDataToBottom_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WriteDataToBottom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WriteDataToBottom_t qt_meta_stringdata_WriteDataToBottom = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WriteDataToBottom"
QT_MOC_LITERAL(1, 18, 14), // "FillDataSignal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "char*"
QT_MOC_LITERAL(4, 40, 4), // "wstr"
QT_MOC_LITERAL(5, 45, 3), // "src"
QT_MOC_LITERAL(6, 49, 15), // "WriteDataSignal"
QT_MOC_LITERAL(7, 65, 15), // "WriteDataSerial"
QT_MOC_LITERAL(8, 81, 18) // "ConstructWriteData"

    },
    "WriteDataToBottom\0FillDataSignal\0\0"
    "char*\0wstr\0src\0WriteDataSignal\0"
    "WriteDataSerial\0ConstructWriteData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WriteDataToBottom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   40,    2, 0x0a /* Public */,
       8,    2,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void WriteDataToBottom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WriteDataToBottom *_t = static_cast<WriteDataToBottom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->FillDataSignal((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2]))); break;
        case 1: _t->WriteDataSignal(); break;
        case 2: _t->WriteDataSerial(); break;
        case 3: _t->ConstructWriteData((*reinterpret_cast< char*(*)>(_a[1])),(*reinterpret_cast< char*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WriteDataToBottom::*_t)(char * , char * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WriteDataToBottom::FillDataSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (WriteDataToBottom::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WriteDataToBottom::WriteDataSignal)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject WriteDataToBottom::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WriteDataToBottom.data,
      qt_meta_data_WriteDataToBottom,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WriteDataToBottom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WriteDataToBottom::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WriteDataToBottom.stringdata0))
        return static_cast<void*>(const_cast< WriteDataToBottom*>(this));
    return QThread::qt_metacast(_clname);
}

int WriteDataToBottom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WriteDataToBottom::FillDataSignal(char * _t1, char * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WriteDataToBottom::WriteDataSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_UpdateData_t {
    QByteArrayData data[3];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateData_t qt_meta_stringdata_UpdateData = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UpdateData"
QT_MOC_LITERAL(1, 11, 8), // "Updating"
QT_MOC_LITERAL(2, 20, 0) // ""

    },
    "UpdateData\0Updating\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void UpdateData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpdateData *_t = static_cast<UpdateData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Updating(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject UpdateData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UpdateData.data,
      qt_meta_data_UpdateData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UpdateData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateData.stringdata0))
        return static_cast<void*>(const_cast< UpdateData*>(this));
    return QObject::qt_metacast(_clname);
}

int UpdateData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_Protocoldeal_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Protocoldeal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Protocoldeal_t qt_meta_stringdata_Protocoldeal = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Protocoldeal"
QT_MOC_LITERAL(1, 13, 20), // "AcceptDataFormBottom"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 1), // "s"
QT_MOC_LITERAL(4, 37, 17) // "AcceptDataFormTop"

    },
    "Protocoldeal\0AcceptDataFormBottom\0\0s\0"
    "AcceptDataFormTop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Protocoldeal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void,

       0        // eod
};

void Protocoldeal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Protocoldeal *_t = static_cast<Protocoldeal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AcceptDataFormBottom((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 1: _t->AcceptDataFormTop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Protocoldeal::*_t)(unsigned char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Protocoldeal::AcceptDataFormBottom)) {
                *result = 0;
            }
        }
        {
            typedef void (Protocoldeal::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Protocoldeal::AcceptDataFormTop)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Protocoldeal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Protocoldeal.data,
      qt_meta_data_Protocoldeal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Protocoldeal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Protocoldeal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Protocoldeal.stringdata0))
        return static_cast<void*>(const_cast< Protocoldeal*>(this));
    return QObject::qt_metacast(_clname);
}

int Protocoldeal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Protocoldeal::AcceptDataFormBottom(unsigned char _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Protocoldeal::AcceptDataFormTop()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE