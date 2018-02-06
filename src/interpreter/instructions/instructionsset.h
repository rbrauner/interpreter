#pragma once

#include "interpreter/instructions/instruction.h"
#include <memory>

namespace interpreter {
namespace interpreter {
namespace instructions {

template <typename T> class InstructionsSet {
public:
  using InstructionPointer = std::shared_ptr<Instruction>;
  using InstructionsSetPointer = std::shared_ptr<InstructionsSet<T>>;

  virtual ~InstructionsSet() = 0;
  virtual void addInstruction(T instruction) = 0;
  virtual void removeInstruction(int number) = 0;
  virtual void replace(int from, int to, InstructionsSetPointer instructionsSet,
                       T blank) = 0;
  virtual void swap(int first, int second) = 0;
  virtual int size() = 0;
  virtual InstructionPointer getInstruction(int number) = 0;
  virtual InstructionsSetPointer getInstructionsSet(int from, int to) = 0;
};

} // namespace instructions
} // namespace interpreter
} // namespace interpreter
