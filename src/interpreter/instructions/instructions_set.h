#pragma once

#include "interpreter/instructions/instruction.h"
#include <memory>

namespace interpreter {
namespace interpreter {
namespace instructions {

template<typename T> class Instructions_set {
public:
  using Instruction_pointer = std::shared_ptr<Instruction>;
  using Instructions_set_pointer = std::shared_ptr<Instructions_set<T>>;

  virtual ~Instructions_set() = 0;
  virtual void add_instruction(T instruction) = 0;
  virtual void remove_instruction(int number) = 0;
  virtual void replace(int from, int to, Instructions_set_pointer Instructions_set, T blank) = 0;
  virtual void swap(int first, int second) = 0;
  virtual int size() = 0;
  virtual Instruction_pointer get_instruction(int number) = 0;
  virtual Instructions_set_pointer get_instructions_set(int from, int to) = 0;
};

}
}
}
