#ifndef MEMORY_H
#define MEMORY_H

#include "interpreter/memory/memory.h"

namespace interpreter {
namespace brainfuck {
namespace memory {

class Memory : public ::interpreter::interpreter::memory::Memory {
public:
  void clear();
};

} // namespace memory
} // namespace brainfuck
} // namespace interpreter

#endif // MEMORY_H
