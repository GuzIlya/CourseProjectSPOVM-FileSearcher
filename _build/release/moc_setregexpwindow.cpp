/****************************************************************************
** Meta object code from reading C++ file 'setregexpwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../setregexpwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setregexpwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SetRegExpWindow_t {
    QByteArrayData data[14];
    char stringdata0[325];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetRegExpWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetRegExpWindow_t qt_meta_stringdata_SetRegExpWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SetRegExpWindow"
QT_MOC_LITERAL(1, 16, 23), // "on_symbolButton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 26), // "on_anyLetterButton_clicked"
QT_MOC_LITERAL(4, 68, 26), // "on_anyNumberButton_clicked"
QT_MOC_LITERAL(5, 95, 26), // "on_anySymbolButton_clicked"
QT_MOC_LITERAL(6, 122, 34), // "on_startCountOfSymbols_textCh..."
QT_MOC_LITERAL(7, 157, 4), // "arg1"
QT_MOC_LITERAL(8, 162, 32), // "on_endCountOfSymbols_textChanged"
QT_MOC_LITERAL(9, 195, 30), // "on_enterSymbolLine_textChanged"
QT_MOC_LITERAL(10, 226, 24), // "on_englishButton_clicked"
QT_MOC_LITERAL(11, 251, 24), // "on_russianButton_clicked"
QT_MOC_LITERAL(12, 276, 24), // "on_addElemButton_clicked"
QT_MOC_LITERAL(13, 301, 23) // "on_finishButton_clicked"

    },
    "SetRegExpWindow\0on_symbolButton_clicked\0"
    "\0on_anyLetterButton_clicked\0"
    "on_anyNumberButton_clicked\0"
    "on_anySymbolButton_clicked\0"
    "on_startCountOfSymbols_textChanged\0"
    "arg1\0on_endCountOfSymbols_textChanged\0"
    "on_enterSymbolLine_textChanged\0"
    "on_englishButton_clicked\0"
    "on_russianButton_clicked\0"
    "on_addElemButton_clicked\0"
    "on_finishButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetRegExpWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SetRegExpWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetRegExpWindow *_t = static_cast<SetRegExpWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_symbolButton_clicked(); break;
        case 1: _t->on_anyLetterButton_clicked(); break;
        case 2: _t->on_anyNumberButton_clicked(); break;
        case 3: _t->on_anySymbolButton_clicked(); break;
        case 4: _t->on_startCountOfSymbols_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_endCountOfSymbols_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_enterSymbolLine_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_englishButton_clicked(); break;
        case 8: _t->on_russianButton_clicked(); break;
        case 9: _t->on_addElemButton_clicked(); break;
        case 10: _t->on_finishButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject SetRegExpWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SetRegExpWindow.data,
      qt_meta_data_SetRegExpWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SetRegExpWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetRegExpWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SetRegExpWindow.stringdata0))
        return static_cast<void*>(const_cast< SetRegExpWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int SetRegExpWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
