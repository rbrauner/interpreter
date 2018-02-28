#pragma once

#include "interpreter/interpreter/interpreter.h"
#include <iostream>

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

  Interpreter(std::istream &istream, std::ostream &ostream = std::cout) {}
  Interpreter(InstructionsBufferReference instructions, std::istream &istream,
              std::ostream &ostream = std::cout) {}

  Interpreter(std::ostream &ostream, std::istream &istream = std::cin) {}
  Interpreter(InstructionsBufferReference instructions, std::ostream &ostream,
              std::istream &istream = std::cin) {}

  void
  addInstructions(const InstructionsBufferReference instructions) override {}
  void interpret(int howMany) override {}
  void convert(int howMany) override {}
  void execute() override {}
};

} // namespace interpreter
} // namespace brainfuck
