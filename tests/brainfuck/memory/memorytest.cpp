#include "memorytest.h"

using brainfuck::address::Value;
using brainfuck::memory::MemoryPointer;
using tests::brainfuck::memory::MemoryTest;

MemoryTest::MemoryTest() : memory{1000} {
  memoryPointers.push_back(MemoryPointer{&memory, 0});
  memoryPointers.push_back(MemoryPointer{&memory, 100});
  memoryPointers.push_back(MemoryPointer{&memory, 500});
}

TEST_F(MemoryTest, InitializeMemoryProperly) {
  EXPECT_THROW(memory.m_memory.at(-1).getValue().toDec(), std::out_of_range);
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(499).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(501).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(998).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(999).getValue().toDec());
  EXPECT_THROW(memory.m_memory.at(1000).getValue().toDec(), std::out_of_range);
}

TEST_F(MemoryTest, ClearWorks) {
  memory.m_memory.at(0).setValue(Value{alias::Decimal{"1"}});
  memory.m_memory.at(100).setValue(Value{alias::Decimal{"1"}});
  memory.m_memory.at(500).setValue(Value{alias::Decimal{"1"}});
  memory.m_memory.at(800).setValue(Value{alias::Decimal{"1"}});
  memory.m_memory.at(999).setValue(Value{alias::Decimal{"1"}});

  memory.clear();

  EXPECT_THROW(memory.m_memory.at(-1).getValue().toDec(), std::out_of_range);
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(99).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(100).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(101).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(499).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(501).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(799).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(800).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(801).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(998).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(999).getValue().toDec());
  EXPECT_THROW(memory.m_memory.at(1000).getValue().toDec(), std::out_of_range);
}

TEST_F(MemoryTest, InitializeMemoryPointerProperly) {
  EXPECT_EQ(memory.m_memory.at(0), *memoryPointers.at(0));
  EXPECT_EQ(memory.m_memory.at(100), *memoryPointers.at(1));
  EXPECT_EQ(memory.m_memory.at(500), *memoryPointers.at(2));
}

TEST_F(MemoryTest, MemoryPointerIsSetToCorrectPosition) {
  // move pointers 5 positions to right
  memoryPointers.at(0) += 5;
  memoryPointers.at(1) += 5;
  memoryPointers.at(2) += 5;

  EXPECT_EQ(memory.m_memory.at(5), *memoryPointers.at(0));
  EXPECT_EQ(memory.m_memory.at(105), *memoryPointers.at(1));
  EXPECT_EQ(memory.m_memory.at(505), *memoryPointers.at(2));

  // move pointers 1 positions to left
  memoryPointers.at(0)--;
  memoryPointers.at(1)--;
  memoryPointers.at(2)--;

  EXPECT_EQ(memory.m_memory.at(4), *memoryPointers.at(0));
  EXPECT_EQ(memory.m_memory.at(104), *memoryPointers.at(1));
  EXPECT_EQ(memory.m_memory.at(504), *memoryPointers.at(2));

  // move pointers out of range
  memoryPointers.at(0) -= 10;
  memoryPointers.at(1) += 900;

  // TODO set exception type
  EXPECT_ANY_THROW(*memoryPointers.at(0));
  EXPECT_ANY_THROW(*memoryPointers.at(1));
}

TEST_F(MemoryTest, MemoryPointerSetterWorksOnPositionWherePointerIsSet) {
  memoryPointers.at(0)->setValue(Value{alias::Decimal{"1"}});
  memoryPointers.at(1)->setValue(Value{alias::Decimal{"1"}});
  memoryPointers.at(2)->setValue(Value{alias::Decimal{"1"}});

  EXPECT_THROW(memory.m_memory.at(-1).getValue().toDec(), std::out_of_range);
  EXPECT_EQ(alias::Decimal{"1"}, memory.m_memory.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(99).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"1"}, memory.m_memory.at(100).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(101).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(499).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"1"}, memory.m_memory.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, memory.m_memory.at(501).getValue().toDec());
}
