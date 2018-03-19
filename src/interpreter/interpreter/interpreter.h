#pragma once

#include "interpreter/instruction/instructionsbuffer.h"

namespace interpreter {
namespace interpreter {

template <typename T> class Interpreter {
  using InstructionsBufferReference = instruction::InstructionsBuffer<T> &;
  using ConstInstructionsBufferReference = const InstructionsBufferReference;

public:
  virtual ~Interpreter() = 0;
  virtual void
  addInstructions(ConstInstructionsBufferReference instructions) = 0;
  virtual void interpret(int howMany) = 0;
  virtual void convert(int howMany) = 0;
  virtual void execute() = 0;
};

} // namespace interpreter
} // namespace interpreter
