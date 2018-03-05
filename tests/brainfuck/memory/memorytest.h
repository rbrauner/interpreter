#pragma once

#include "brainfuck/memory/memory.h"
#include "brainfuck/memory/memorypointer.h"
#include "gtest/gtest.h"
#include <vector>

namespace tests {
namespace brainfuck {
namespace memory {

class MemoryTest : public ::testing::Test {
public:
  MemoryTest();

protected:
  ::brainfuck::memory::Memory memory;
  std::vector<::brainfuck::memory::MemoryPointer> memoryPointers;
};

} // namespace memory
} // namespace brainfuck
} // namespace tests
