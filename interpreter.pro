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
    src/utility/buffer/buffer.h \
    src/utility/charset/charset.h \
    src/utility/charset/exceptions.h \
    src/utility/number/binary.h \
    src/utility/number/decimal.h \
    src/utility/number/hexadecimal.h \
    src/utility/number/number.h \
    src/utility/number/numberexceptions.h \
    src/utility/number/numberimpl.h \
    tests/utility/charset/charsettest.h \
    tests/utility/number/numbertest.h

SOURCES += \
    src/utility/charset/charset.cpp \
    src/utility/charset/exceptions.cpp \
    src/utility/number/binary.cpp \
    src/utility/number/decimal.cpp \
    src/utility/number/hexadecimal.cpp \
    src/utility/number/number.cpp \
    src/utility/number/numberimpl.cpp \
    tests/utility/charset/charsettest.cpp \
    tests/utility/number/numbertest.cpp
