TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

unix|win32: LIBS += -lgtest
unix|win32: LIBS += -lgtest_main

INCLUDEPATH += src

HEADERS += \
    src/interpreter/interpreter/address/address.h \
    src/interpreter/interpreter/address/position.h \
    src/interpreter/interpreter/address/value.h \
    src/interpreter/interpreter/instructions/instruction.h \
    src/interpreter/interpreter/instructions/instructionsbuffer.h \
    src/interpreter/interpreter/interpreter/interpreter.h \
    src/interpreter/interpreter/memory/memory.h \
    src/interpreter/interpreter/memory/memorypointer.h \
    src/interpreter/utilites/buffer/buffer.h \
    src/interpreter/utilites/charset/charset.h \
    src/interpreter/utilites/number/binary.h \
    src/interpreter/utilites/number/decimal.h \
    src/interpreter/utilites/number/hexadecimal.h \
    src/interpreter/utilites/number/number.h \
    tests/interpreter/utilities/charset/charsettest.h \
    tests/interpreter/utilities/number/numbertest.h

SOURCES += \
    src/interpreter/utilites/charset/charset.cpp \
    src/interpreter/utilites/number/binary.cpp \
    src/interpreter/utilites/number/decimal.cpp \
    src/interpreter/utilites/number/hexadecimal.cpp \
    tests/interpreter/utilities/charset/charsettest.cpp \
    tests/interpreter/utilities/number/numbertest.cpp
