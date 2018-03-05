#pragma once

#include "utility/number/number.h"
#include "gtest/gtest.h"
#include <memory>

using std::shared_ptr;
using utility::number::Number;

namespace utility {
namespace number {

class NumberTest : public ::testing::Test {
public:
  NumberTest();
  virtual ~NumberTest();

protected:
  shared_ptr<Number> bin;
  shared_ptr<Number> dec;
  shared_ptr<Number> hex;
};

} // namespace number
} // namespace utility
