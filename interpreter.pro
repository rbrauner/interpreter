TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

unix|win32: LIBS += -lgtest
unix|win32: LIBS += -lgtest_main

HEADERS += \
    src/interpreter.h

SOURCES +=
