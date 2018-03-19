#pragma once

#include "brainfuck/memory/address/address.h"
#include "gtest/gtest_prod.h"
#include <vector>

namespace brainfuck {
namespace memory {

class Memory {
public:
  explicit Memory(std::uint32_t size) {}

  void clear();

private:
  friend class MemoryTest;
  friend class MemoryPointer;
  FRIEND_TEST(MemoryTest, InitializeMemoryProperly);
  FRIEND_TEST(MemoryTest, ClearWorks);
  FRIEND_TEST(MemoryTest, InitializeMemoryPointerProperly);
  FRIEND_TEST(MemoryTest, MemoryPointerIsSetToCorrectPosition);
  FRIEND_TEST(MemoryTest, MemoryPointerSetterWorksOnPositionWherePointerIsSet);

  std::vector<address::Address> m_memory;
};

} // namespace memory
} // namespace brainfuck
