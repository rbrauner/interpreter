#pragma once

#include "brainfuck/address/address.h"
#include "interpreter/memory/memorypointer.h"

namespace brainfuck {
namespace memory {

class MemoryPointer : public ::interpreter::memory::MemoryPointer<
                          ::brainfuck::address::Address> {
public:
  MemoryPointer() {}
};

} // namespace memory
} // namespace brainfuck
