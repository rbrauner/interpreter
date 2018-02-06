#pragma once

#include "interpreter/instructions/instructionsset.h"
#include <memory>

namespace interpreter {
namespace interpreter {
namespace interpreter {

template <typename T> class Interpreter {
public:
  using InstructionsSetPointer =
      std::shared_ptr<instructions::InstructionsSet<T>>;

  virtual ~Interpreter() = 0;
  virtual void addInstructionsSet(InstructionsSetPointer instructionsSet) = 0;
  virtual void interpret(int howMany) = 0;
  virtual void interpret(InstructionsSetPointer instructionsSet) = 0;
};

} // namespace interpreter
} // namespace interpreter
} // namespace interpreter
