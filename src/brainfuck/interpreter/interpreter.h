#pragma once

#include "interpreter/interpreter/interpreter.h"

namespace brainfuck {
namespace interpreter {

template <typename T>
class Interpreter : public ::interpreter::interpreter::Interpreter<T> {
public:
  using InstructionsBufferReference =
      std::reference_wrapper<::interpreter::instruction::InstructionsBuffer<T>>;

  static void interpret(const InstructionsBufferReference instructions);

  Interpreter() {}
  Interpreter(InstructionsBufferReference instructions) {}

  void
  addInstructions(const InstructionsBufferReference instructions) override {}
  void interpret(int howMany) override {}
  void convert(int howMany) override {}
  void execute() override {}
};

} // namespace interpreter
} // namespace brainfuck
