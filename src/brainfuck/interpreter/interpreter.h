#pragma once

#include "interpreter/interpreter/interpreter.h"
#include <iostream>

namespace brainfuck {
namespace interpreter {

template <typename T>
class Interpreter : public ::interpreter::interpreter::Interpreter<T> {
  using InstructionsBufferReference =
      ::interpreter::instruction::InstructionsBuffer<T> &;
  using ConstInstructionsBufferReference = const InstructionsBufferReference;

public:
  static void interpret(const InstructionsBufferReference instructions);

  explicit Interpreter() {}
  explicit Interpreter(InstructionsBufferReference instructions) {}

  explicit Interpreter(std::istream &istream,
                       std::ostream &ostream = std::cout) {}
  explicit Interpreter(InstructionsBufferReference instructions,
                       std::istream &istream,
                       std::ostream &ostream = std::cout) {}

  explicit Interpreter(std::ostream &ostream,
                       std::istream &istream = std::cin) {}
  explicit Interpreter(InstructionsBufferReference instructions,
                       std::ostream &ostream,
                       std::istream &istream = std::cin) {}

  void addInstructions(ConstInstructionsBufferReference instructions) override {
  }
  void interpret(int howMany) override {}
  void convert(int howMany) override {}
  void execute() override {}
};

} // namespace interpreter
} // namespace brainfuck
