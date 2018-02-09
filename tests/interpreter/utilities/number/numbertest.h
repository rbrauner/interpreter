#pragma once

#include "interpreter/utilites/number/binary.h"
#include "interpreter/utilites/number/decimal.h"
#include "interpreter/utilites/number/hexadecimal.h"
#include "interpreter/utilites/number/number.h"
#include "gtest/gtest.h"
#include <memory>

using interpreter::utilities::number::Bin;
using interpreter::utilities::number::Dec;
using interpreter::utilities::number::Hex;
using interpreter::utilities::number::Number;
using std::shared_ptr;

class NumberTest : public ::testing::Test {
public:
  NumberTest();
  virtual ~NumberTest();

protected:
  shared_ptr<Number> bin;
  shared_ptr<Number> dec;
  shared_ptr<Number> hex;
};
