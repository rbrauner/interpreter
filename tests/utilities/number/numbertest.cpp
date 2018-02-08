#include "numbertest.h"

NumberTest::NumberTest()
    : bin{new Bin{"111100"}}, dec{new Dec{60}}, hex{new Hex{"3c"}} {}

NumberTest::~NumberTest() {
  bin->~Number();
  dec->~Number();
  hex->~Number();
}

TEST_F(NumberTest, Constructors) {
  EXPECT_EQ("111100", bin->getValue());
  EXPECT_EQ("60", dec->getValue());
  EXPECT_EQ("3c", hex->getValue());
}

TEST_F(NumberTest, Destructors) {
  bin->~Number();
  dec->~Number();
  hex->~Number();

  EXPECT_EQ("0", bin->getValue());
  EXPECT_EQ("0", dec->getValue());
  EXPECT_EQ("0", hex->getValue());
}
