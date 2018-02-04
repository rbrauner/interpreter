#pragma once

#include "interpreter/instructions/instruction.h"

namespace interpreter {
namespace brainfuck {
namespace instructions {

class Instruction : public ::interpreter::interpreter::instructions::Instruction {
public:
  void exectute();
};

}
}
}
