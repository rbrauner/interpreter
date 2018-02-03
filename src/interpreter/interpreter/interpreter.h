#ifndef INTERPRETER_INTERPRETER_H
#define INTERPRETER_INTERPRETER_H

#include "interpreter/instructions/instructions_set.h"
#include <memory>

namespace interpreter {
namespace interpreter {
namespace interpreter {

template <typename T> class Interpreter {
  using Instructions_set_pointer =
      std::shared_ptr<instructions::Instructions_set<T>>;

public:
  virtual ~Interpreter() = 0;
  virtual void
  add_instructions_set(Instructions_set_pointer instructions_set) = 0;
  virtual void interpret(int how_many) = 0;
  virtual void interpret(Instructions_set_pointer instructions_set) = 0;
};

} // namespace interpreter
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_INTERPRETER_H
