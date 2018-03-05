#pragma once

#include "brainfuck/address/address.h"
#include "gtest/gtest.h"
#include <vector>

namespace brainfuck {
namespace address {

class AddressTest : public ::testing::Test {
public:
  AddressTest();
  void emptyInitialize();
  void initializeWith(int number);
  void initializeWithSuccessiveNumbers();

protected:
  static constexpr int howMany = 1000;
  std::vector<::brainfuck::address::Address> addresses;
};

} // namespace address
} // namespace brainfuck
