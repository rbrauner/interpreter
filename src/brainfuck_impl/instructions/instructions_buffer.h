#ifndef INSTRUCTIONS_BUFFER_H
#define INSTRUCTIONS_BUFFER_H

#include "brainfuck_impl/instructions/instruction.h"
#include "interpreter/instructions/instructions_buffer.h"
#include <memory>

namespace interpreter {
namespace brainfuck {
namespace instructions {

template <typename T = std::shared_ptr<Instruction>>
class Instructions_buffer
    : public ::interpreter::interpreter::instructions::Instructions_buffer<T> {
public:
  void push_back(T instruction);
  void push_back(std::initializer_list<T> instructions);
  std::initializer_list<T> pull_from_begin(int how_many);
};

} // namespace instructions
} // namespace brainfuck
} // namespace interpreter

#endif // INSTRUCTIONS_BUFFER_H
