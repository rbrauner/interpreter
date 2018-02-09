#pragma once

#include "interpreter/utilites/buffer/buffer.h"

namespace interpreter {
namespace interpreter {
namespace instructions {

template <typename T>
class InstructionsBuffer : public utilities::buffer::FifoBuffer<T> {};

} // namespace instructions
} // namespace interpreter
} // namespace interpreter
