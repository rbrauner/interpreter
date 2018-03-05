#pragma once

#include "brainfuck/memory/memory.h"
#include "brainfuck/memory/memorypointer.h"
#include "gtest/gtest.h"
#include <vector>

namespace brainfuck {
namespace memory {

class MemoryTest : public ::testing::Test {
public:
  MemoryTest();

protected:
  Memory m_memory;
  std::vector<MemoryPointer> m_memoryPointers;
};

} // namespace memory
} // namespace brainfuck
