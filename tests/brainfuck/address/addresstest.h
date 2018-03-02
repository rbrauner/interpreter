#pragma once

#include "brainfuck/address/address.h"
#include "gtest/gtest.h"
#include <vector>

namespace tests {
namespace brainfuck {
namespace address {

class AddressTest : public ::testing::Test {
public:
  AddressTest();
  void emptyInitialize();
  void initializeWith(int number);
  void initializeWithSuccessiveNumbers();

protected:
  int howMany = 1000;
  std::vector<::brainfuck::address::Address> addresses;
};

} // namespace address
} // namespace brainfuck
} // namespace tests
