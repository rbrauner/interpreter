TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

unix|win32: LIBS += -lgtest
unix|win32: LIBS += -lgtest_main

INCLUDEPATH += src

HEADERS += \
    src/brainfuck_impl/interpreter.h \
    src/interpreter/address.h \
    src/interpreter/buffer.h \
    src/interpreter/instructions.h \
    src/interpreter/interpreter.h \
    src/interpreter/memory.h

SOURCES += \
    src/brainfuck_impl/interpreter.cpp
