#pragma once

#include "utility/buffer/buffer.h"

namespace interpreter {
namespace instruction {

template <typename T>
class InstructionsBuffer : public utility::buffer::FifoBuffer<T> {};

} // namespace instruction
} // namespace interpreter
