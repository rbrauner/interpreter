#pragma once

#include "utility/charset/charset.h"
#include "gtest/gtest.h"

using utility::charset::CharSet;

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
