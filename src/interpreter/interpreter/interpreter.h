#pragma once

#include "interpreter/instructions/instructionsbuffer.h"
#include <memory>

namespace interpreter {
namespace interpreter {

template <typename T> class Interpreter {
public:
  using InstructionsBufferReference =
      std::reference_wrapper<instructions::InstructionsBuffer<T>>;

  virtual ~Interpreter() = 0;
  virtual void
  addInstructions(const InstructionsBufferReference instructions) = 0;
  virtual void interpret(int howMany) = 0;
  virtual void convert(int howMany) = 0;
  virtual void execute() = 0;
};

} // namespace interpreter
} // namespace interpreter
