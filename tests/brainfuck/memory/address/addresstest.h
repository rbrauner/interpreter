#pragma once

#include "brainfuck/memory/address/address.h"
#include "gtest/gtest.h"
#include <vector>

namespace brainfuck {
namespace memory {
namespace address {

class AddressTest : public ::testing::Test {
public:
  AddressTest();
  void emptyInitialize();
  void initializeWith(int number);
  void initializeWithSuccessiveNumbers();

protected:
  static constexpr int howMany = 1000;
  std::vector<Address> addresses;
};

} // namespace address
} // namespace memory
} // namespace brainfuck
