#pragma once

#include "utilites/buffer/buffer.h"

namespace interpreter {
namespace instructions {

template <typename T>
class InstructionsBuffer : public utilities::buffer::FifoBuffer<T> {};

} // namespace instructions
} // namespace interpreter
