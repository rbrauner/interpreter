#pragma once

#include "brainfuck/instructions/instruction.h"
#include "interpreter/instructions/instructions_set.h"

namespace interpreter {
namespace brainfuck {
namespace instructions {

template<typename T = std::shared_ptr<Instruction>>
class Instructions_set : public ::interpreter::interpreter::instructions::Instructions_set<T> {
  using Instruction_pointer = std::shared_ptr<Instruction>;
  using Instructions_set_pointer = std::shared_ptr<Instructions_set<T>>;

public:
  void add_instruction(T instruction);
  void remove_instruction(int number);
  void replace(int from, int to, Instructions_set_pointer Instructions_set,
               T blank);
  void swap(int first, int second);
  int size();
  Instruction_pointer get_instruction(int number);
  Instructions_set_pointer get_instructions_set(int from, int to);
};

}
}
}
