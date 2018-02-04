#ifndef INTERPRETER_INSTRUCTIONS_BUFFER_H
#define INTERPRETER_INSTRUCTIONS_BUFFER_H

#include "interpreter/buffer/buffer.h"

namespace interpreter {
namespace interpreter {
namespace instructions {

template<typename T>
class Instructions_buffer : public buffer::FIFO_buffer<T> {};

} // namespace instructions
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_INSTRUCTIONS_BUFFER_H
