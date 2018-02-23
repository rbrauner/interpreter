#pragma once

#include "brainfuck/instruction/instruction.h"
#include "interpreter/instruction/instructionsbuffer.h"

namespace brainfuck {
namespace instruction {

template <typename T = Instruction>
class InstructionsBuffer
    : public ::interpreter::instruction::InstructionsBuffer<T> {
public:
  InstructionsBuffer(T item) {}
  InstructionsBuffer(std::initializer_list<T> items) {}

  void pushBack(T item) override {}
  void pushBack(std::initializer_list<T> items) override {}
  std::initializer_list<T> pullFromBegin(int howMany) override {}
  int size() override {}
};

} // namespace instruction
} // namespace brainfuck
