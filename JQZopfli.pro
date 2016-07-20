QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

include($$PWD/Library/JQLibrary/JQLibrary.pri)

CONFIG += c++11

SOURCES += \
    $$PWD/cpp/main.cpp
