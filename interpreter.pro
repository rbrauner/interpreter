TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

unix|win32: LIBS += -lgtest
unix|win32: LIBS += -lgtest_main

HEADERS += \
    src/interpreter/address.h \
    src/interpreter/buffer.h \
    src/interpreter/interpreter.h \
    src/interpreter/memory.h \
    src/interpreter/instructions.h
