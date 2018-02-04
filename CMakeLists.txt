cmake_minimum_required(VERSION 3.9)
project(interpreter)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

add_executable(interpreter
  src/brainfuck/address/address.cpp
  src/brainfuck/address/address.h
  src/brainfuck/address/position.cpp
  src/brainfuck/address/position.h
  src/brainfuck/address/value.cpp
  src/brainfuck/address/value.h
  src/brainfuck/instructions/instruction.cpp
  src/brainfuck/instructions/instruction.h
  src/brainfuck/instructions/instructions_buffer.cpp
  src/brainfuck/instructions/instructions_buffer.h
  src/brainfuck/instructions/instructions_set.cpp
  src/brainfuck/instructions/instructions_set.h
  src/brainfuck/interpreter/interpreter.cpp
  src/brainfuck/interpreter/interpreter.h
  src/brainfuck/memory/memory.cpp
  src/brainfuck/memory/memory.h
  src/brainfuck/memory/memory_pointer.cpp
  src/brainfuck/memory/memory_pointer.h
  src/interpreter/address/address.h
  src/interpreter/address/position.h
  src/interpreter/address/value.h
  src/interpreter/buffer/buffer.h
  src/interpreter/instructions/instruction.h
  src/interpreter/instructions/instructions_buffer.h
  src/interpreter/instructions/instructions_set.h
  src/interpreter/interpreter/interpreter.h
  src/interpreter/memory/memory.h
  src/interpreter/memory/memory_pointer.h)

link_libraries(interpreter gtest_main)
