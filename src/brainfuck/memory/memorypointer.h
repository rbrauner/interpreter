#pragma once

#include "brainfuck/memory/address/address.h"
#include "brainfuck/memory/memory.h"

namespace brainfuck {
namespace memory {

class MemoryPointer
    : public std::vector<brainfuck::memory::address::Address>::iterator {
public:
  MemoryPointer(brainfuck::memory::Memory &memory, std::uint32_t position = 0);
};

} // namespace memory
} // namespace brainfuck
