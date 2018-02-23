#pragma once

#include "interpreter/instruction/instruction.h"

namespace brainfuck {
namespace instruction {

class Instruction : public ::interpreter::instruction::Instruction {
public:
  void exectute() override {}
};

} // namespace instruction
} // namespace brainfuck
