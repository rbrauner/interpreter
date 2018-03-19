#pragma once

#include "alias/number.h"
#include "gtest/gtest.h"

namespace utility {
namespace number {

class NumberTest : public ::testing::Test {
public:
  NumberTest();

protected:
  alias::NumberPointer bin;
  alias::NumberPointer dec;
  alias::NumberPointer hex;

  alias::NumberPointer negativeBin;
  alias::NumberPointer negativeDec;
  alias::NumberPointer negativeHex;
};

} // namespace number
} // namespace utility
