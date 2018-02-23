#pragma once

#include "interpreter/memory/memory.h"
#include <cstddef>

namespace brainfuck {
namespace memory {

template <typename T> class Memory : public ::interpreter::memory::Memory {
public:
  Memory(size_t size) {}

  void clear() override {}
};

} // namespace memory
} // namespace brainfuck
