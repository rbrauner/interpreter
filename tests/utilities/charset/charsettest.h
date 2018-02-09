#pragma once

#include "utilites/charset/charset.h"
#include "gtest/gtest.h"

using interpreter::utilities::charset::CharSet;

class CharSetTest : public ::testing::Test {
public:
  CharSetTest();
  virtual ~CharSetTest();

  void checkIfAllCharsFromScopeExists();
  void checkIfCharsOutOfScopeNotExists();

protected:
  CharSet bin;
  CharSet dec;
  CharSet hex;
};
