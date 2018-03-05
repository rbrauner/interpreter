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
  Memory memory;
  std::vector<MemoryPointer> memoryPointers;
};

} // namespace memory
} // namespace brainfuck
