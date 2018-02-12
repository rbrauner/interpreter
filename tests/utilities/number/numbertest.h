#pragma once

#include "utilites/number/binary.h"
#include "utilites/number/decimal.h"
#include "utilites/number/hexadecimal.h"
#include "utilites/number/number.h"
#include "gtest/gtest.h"
#include <memory>

using std::shared_ptr;
using utilities::number::Bin;
using utilities::number::Dec;
using utilities::number::Hex;
using utilities::number::Number;

class NumberTest : public ::testing::Test {
public:
  NumberTest();
  virtual ~NumberTest();

protected:
  shared_ptr<Number> bin;
  shared_ptr<Number> dec;
  shared_ptr<Number> hex;
};
