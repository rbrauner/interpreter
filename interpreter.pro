TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

include(gtest.pri)
include(pthread.pri)

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
    src/utilities/buffer/buffer.h \
    src/utilities/charset/charset.h \
    src/utilities/number/binary.h \
    src/utilities/number/decimal.h \
    src/utilities/number/hexadecimal.h \
    src/utilities/number/number.h \
    tests/utilities/charset/charsettest.h \
    tests/utilities/number/numbertest.h

SOURCES += \
    src/utilities/charset/charset.cpp \
    src/utilities/number/binary.cpp \
    src/utilities/number/decimal.cpp \
    src/utilities/number/hexadecimal.cpp \
    src/utilities/number/number.cpp \
    tests/utilities/charset/charsettest.cpp \
    tests/utilities/number/numbertest.cpp
