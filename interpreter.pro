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
    src/interpreter/buffer/buffer.h \
    src/interpreter/instructions/instruction.h \
    src/interpreter/instructions/instructions_buffer.h \
    src/interpreter/instructions/instructions_set.h \
    src/interpreter/interpreter/interpreter.h \
    src/interpreter/memory/memory.h \
    src/interpreter/memory/memory_pointer.h \
    src/brainfuck_impl/interpreter/interpreter.h \
    src/brainfuck_impl/address/address.h

SOURCES += \
    src/brainfuck_impl/interpreter/interpreter.cpp \
    src/brainfuck_impl/address/address.cpp
