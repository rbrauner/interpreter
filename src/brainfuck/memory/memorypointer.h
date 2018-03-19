#pragma once

#include "brainfuck/memory/address/address.h"
#include "brainfuck/memory/memory.h"

namespace brainfuck {
namespace memory {

class MemoryPointer : public std::vector<address::Address>::iterator {
public:
  explicit MemoryPointer(Memory &memory, std::uint32_t position = 0);
};

} // namespace memory
} // namespace brainfuck
