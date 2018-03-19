#pragma once

#include "utility/charset/charset.h"
#include "gtest/gtest.h"

namespace utility {
namespace charset {

class CharSetTest : public ::testing::Test {
public:
  CharSetTest();

  void checkIfAllCharsFromScopeExists();
  void checkIfCharsOutOfScopeNotExists();

protected:
  CharSet bin;
  CharSet dec;
  CharSet hex;
};

} // namespace charset
} // namespace utility
