#pragma once

#include "interpreter/instruction/instruction.h"
#include "utility/buffer/buffer.h"

namespace interpreter {
namespace instruction {

template <typename T = Instruction>
class InstructionsBuffer : public utility::buffer::FifoBuffer<T> {};

} // namespace instruction
} // namespace interpreter
