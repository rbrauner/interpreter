#pragma once

#include "utility/buffer/buffer.h"

namespace interpreter {
namespace instructions {

template <typename T>
class InstructionsBuffer : public utility::buffer::FifoBuffer<T> {};

} // namespace instructions
} // namespace interpreter
