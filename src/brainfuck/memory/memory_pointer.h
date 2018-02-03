#ifndef MEMORY_POINTER_H
#define MEMORY_POINTER_H

#include "interpreter/memory/memory_pointer.h"

namespace interpreter {
namespace brainfuck {
namespace memory {

class Memory_pointer
    : public ::interpreter::interpreter::memory::Memory_pointer {
public:
  interpreter::address::Value *get_value();
  interpreter::address::Position *get_position();
};

} // namespace memory
} // namespace brainfuck
} // namespace interpreter

#endif // MEMORY_POINTER_H
