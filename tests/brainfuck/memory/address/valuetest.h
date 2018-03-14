#pragma once

#include "brainfuck/memory/address/value.h"
#include "gtest/gtest.h"

namespace brainfuck {
namespace memory {
namespace address {

class ValueTest : public ::testing::Test {
public:
  ValueTest();

protected:
  Value binDefault;
  Value decDefault;
  Value hexDefault;

  Value minusTenToMinusFive;
  Value minusFiveToTen;
  Value fiveToTwentyFive;
};

} // namespace address
} // namespace memory
} // namespace brainfuck
