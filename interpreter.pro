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
    src/interpreter/interpreter/interpreter.h \
    src/interpreter/memory/memory.h \
    src/brainfuck/address/address.h \
    src/brainfuck/address/position.h \
    src/brainfuck/address/value.h \
    src/brainfuck/instructions/instruction.h \
    src/brainfuck/instructions/instructions_buffer.h \
    src/brainfuck/instructions/instructions_set.h \
    src/brainfuck/interpreter/interpreter.h \
    src/brainfuck/memory/memory.h \
    src/brainfuck/memory/memory_pointer.h \
    src/interpreter/instructions/instructionsbuffer.h \
    src/interpreter/instructions/instructionsset.h \
    src/interpreter/memory/memorypointer.h

SOURCES += \
    src/brainfuck/address/address.cpp \
    src/brainfuck/address/position.cpp \
    src/brainfuck/address/value.cpp \
    src/brainfuck/instructions/instruction.cpp \
    src/brainfuck/instructions/instructions_buffer.cpp \
    src/brainfuck/instructions/instructions_set.cpp \
    src/brainfuck/interpreter/interpreter.cpp \
    src/brainfuck/memory/memory.cpp \
    src/brainfuck/memory/memory_pointer.cpp
