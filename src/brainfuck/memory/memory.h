#pragma once

#include "brainfuck/address/address.h"
#include "gtest/gtest_prod.h"
#include <cstdint>
#include <vector>

namespace brainfuck {
namespace memory {

class Memory {
public:
  Memory(std::uint32_t size);

  void clear();

private:
  friend class MemoryTest;
  friend class MemoryPointer;
  FRIEND_TEST(MemoryTest, InitializeMemoryProperly);
  FRIEND_TEST(MemoryTest, ClearWorks);
  FRIEND_TEST(MemoryTest, InitializeMemoryPointerProperly);
  FRIEND_TEST(MemoryTest, MemoryPointerIsSetToCorrectPosition);
  FRIEND_TEST(MemoryTest, MemoryPointerSetterWorksOnPositionWherePointerIsSet);

  std::vector<brainfuck::address::Address> m_memory;
};

} // namespace memory
} // namespace brainfuck
