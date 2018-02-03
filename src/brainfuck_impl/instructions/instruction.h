#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "interpreter/instructions/instruction.h"

namespace interpreter {
namespace brainfuck {
namespace instructions {

class Instruction
    : public ::interpreter::interpreter::instructions::Instruction {
public:
  void exectute();
};

} // namespace instructions
} // namespace brainfuck
} // namespace interpreter

#endif // INSTRUCTION_H
