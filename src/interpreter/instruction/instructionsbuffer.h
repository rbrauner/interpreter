#pragma once

#include "interpreter/instruction/instruction.h"
#include <stack>

namespace interpreter {
namespace instruction {

template <typename T = Instruction>
class InstructionsBuffer : public std::stack<T> {};

} // namespace instruction
} // namespace interpreter
