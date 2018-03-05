#include "memorytest.h"

using brainfuck::address::Value;
using std::make_shared;

namespace brainfuck {
namespace memory {

MemoryTest::MemoryTest() : m_memory{1000} {
  m_memoryPointers.push_back(MemoryPointer{m_memory});
  m_memoryPointers.push_back(MemoryPointer{m_memory, 100});
  m_memoryPointers.push_back(MemoryPointer{m_memory, 500});
}

TEST_F(MemoryTest, InitializeMemoryProperly) {
  EXPECT_THROW(m_memory.m_memory.at(-1).getValue().toDec(), std::out_of_range);
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(499).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(501).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(998).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(999).getValue().toDec());
  EXPECT_THROW(m_memory.m_memory.at(1000).getValue().toDec(),
               std::out_of_range);
}

TEST_F(MemoryTest, ClearWorks) {
  m_memory.m_memory.at(0).setValue(Value{alias::Decimal{"1"}});
  m_memory.m_memory.at(100).setValue(Value{alias::Decimal{"1"}});
  m_memory.m_memory.at(500).setValue(Value{alias::Decimal{"1"}});
  m_memory.m_memory.at(800).setValue(Value{alias::Decimal{"1"}});
  m_memory.m_memory.at(999).setValue(Value{alias::Decimal{"1"}});

  m_memory.clear();

  EXPECT_THROW(m_memory.m_memory.at(-1).getValue().toDec(), std::out_of_range);
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(99).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(100).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(101).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(499).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(501).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(799).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(800).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(801).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(998).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(999).getValue().toDec());
  EXPECT_THROW(m_memory.m_memory.at(1000).getValue().toDec(),
               std::out_of_range);
}

TEST_F(MemoryTest, InitializeMemoryPointerProperly) {
  EXPECT_EQ(m_memory.m_memory.at(0), *m_memoryPointers.at(0));
  EXPECT_EQ(m_memory.m_memory.at(100), *m_memoryPointers.at(1));
  EXPECT_EQ(m_memory.m_memory.at(500), *m_memoryPointers.at(2));
}

TEST_F(MemoryTest, MemoryPointerIsSetToCorrectPosition) {
  // move pointers 5 positions to right
  m_memoryPointers.at(0) += 5;
  m_memoryPointers.at(1) += 5;
  m_memoryPointers.at(2) += 5;

  EXPECT_EQ(m_memory.m_memory.at(5), *m_memoryPointers.at(0));
  EXPECT_EQ(m_memory.m_memory.at(105), *m_memoryPointers.at(1));
  EXPECT_EQ(m_memory.m_memory.at(505), *m_memoryPointers.at(2));

  // move pointers 1 positions to left
  m_memoryPointers.at(0)--;
  m_memoryPointers.at(1)--;
  m_memoryPointers.at(2)--;

  EXPECT_EQ(m_memory.m_memory.at(4), *m_memoryPointers.at(0));
  EXPECT_EQ(m_memory.m_memory.at(104), *m_memoryPointers.at(1));
  EXPECT_EQ(m_memory.m_memory.at(504), *m_memoryPointers.at(2));

  // move pointers out of range
  m_memoryPointers.at(0) -= 10;
  m_memoryPointers.at(1) += 900;

  // TODO set exception type
  EXPECT_ANY_THROW(*m_memoryPointers.at(0));
  EXPECT_ANY_THROW(*m_memoryPointers.at(1));
}

TEST_F(MemoryTest, MemoryPointerSetterWorksOnPositionWherePointerIsSet) {
  m_memoryPointers.at(0)->setValue(Value{alias::Decimal{"1"}});
  m_memoryPointers.at(1)->setValue(Value{alias::Decimal{"1"}});
  m_memoryPointers.at(2)->setValue(Value{alias::Decimal{"1"}});

  EXPECT_THROW(m_memory.m_memory.at(-1).getValue().toDec(), std::out_of_range);
  EXPECT_EQ(alias::Decimal{"1"}, m_memory.m_memory.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(99).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"1"}, m_memory.m_memory.at(100).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(101).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(499).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"1"}, m_memory.m_memory.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, m_memory.m_memory.at(501).getValue().toDec());
}

} // namespace memory
} // namespace brainfuck
