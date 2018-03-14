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
  Value m_value;
};

} // namespace address
} // namespace memory
} // namespace brainfuck
