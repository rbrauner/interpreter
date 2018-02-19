#pragma once

#include "utilities/number/number.h"
#include "gtest/gtest.h"
#include <memory>

using std::shared_ptr;
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
