TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

unix|win32: LIBS += -lgtest
unix|win32: LIBS += -lgtest_main

INCLUDEPATH += src

HEADERS += \
    src/interpreter/address/address.h \
    src/interpreter/address/position.h \
    src/interpreter/address/value.h \
    src/interpreter/instructions/instruction.h \
    src/interpreter/instructions/instructionsbuffer.h \
    src/interpreter/interpreter/interpreter.h \
    src/interpreter/memory/memory.h \
    src/interpreter/memory/memorypointer.h \
    src/utilites/buffer/buffer.h \
    src/utilites/number/number.h \
    src/utilites/number/binary.h \
    src/utilites/number/decimal.h \
    src/utilites/number/hexadecimal.h

SOURCES += \
    src/utilites/number/number.cpp \
    src/utilites/number/binary.cpp \
    src/utilites/number/decimal.cpp \
    src/utilites/number/hexadecimal.cpp
