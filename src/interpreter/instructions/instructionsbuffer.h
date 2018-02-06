#pragma once

#include "interpreter/buffer/buffer.h"

namespace interpreter {
namespace interpreter {
namespace instructions {

template <typename T>
class InstructionsBuffer : public buffer::FifoBuffer<T> {};

} // namespace instructions
} // namespace interpreter
} // namespace interpreter
