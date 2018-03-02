TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += object_parallel_to_source

include(gtest.pri)
include(pthread.pri)

INCLUDEPATH += src

HEADERS += \
    src/brainfuck/address/address.h \
    src/brainfuck/address/position.h \
    src/brainfuck/address/value.h \
    src/brainfuck/instruction/instruction.h \
    src/brainfuck/instruction/instructionsbuffer.h \
    src/brainfuck/interpreter/interpreter.h \
    src/brainfuck/memory/memory.h \
    src/brainfuck/memory/memorypointer.h \
    src/interpreter/instruction/instruction.h \
    src/interpreter/instruction/instructionsbuffer.h \
    src/interpreter/interpreter/interpreter.h \
    src/utility/buffer/buffer.h \
    src/utility/charset/charset.h \
    src/utility/charset/exceptions.h \
    src/utility/number/binary.h \
    src/utility/number/decimal.h \
    src/utility/number/hexadecimal.h \
    src/utility/number/number.h \
    src/utility/number/numberexceptions.h \
    src/utility/number/numberimpl.h \
    tests/brainfuck/address/addresstest.h \
    tests/utility/charset/charsettest.h \
    tests/utility/number/numbertest.h

SOURCES += \
    src/brainfuck/address/address.cpp \
    src/brainfuck/address/position.cpp \
    src/brainfuck/address/value.cpp \
    src/brainfuck/instruction/instruction.cpp \
    src/brainfuck/instruction/instructionsbuffer.cpp \
    src/brainfuck/interpreter/interpreter.cpp \
    src/brainfuck/memory/memory.cpp \
    src/brainfuck/memory/memorypointer.cpp \
    src/utility/charset/charset.cpp \
    src/utility/charset/exceptions.cpp \
    src/utility/number/binary.cpp \
    src/utility/number/decimal.cpp \
    src/utility/number/hexadecimal.cpp \
    src/utility/number/number.cpp \
    src/utility/number/numberimpl.cpp \
    tests/brainfuck/address/addresstest.cpp \
    tests/utility/charset/charsettest.cpp \
    tests/utility/number/numbertest.cpp
