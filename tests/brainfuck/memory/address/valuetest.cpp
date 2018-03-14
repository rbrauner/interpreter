#include "valuetest.h"
#include "alias/number.h"

using brainfuck::memory::address::Value;
using brainfuck::memory::address::ValueTest;

ValueTest::ValueTest()
    : binDefault{alias::Binary{"1010"}}, decDefault{alias::Decimal{10}},
      hexDefault{alias::Hexadecimal{"a"}},
      minusTenToMinusFive{alias::Decimal{-7}, alias::Decimal{-10},
                          alias::Decimal{-5}},
      minusFiveToTen{alias::Decimal{2}, alias::Decimal{-5}, alias::Decimal{10}},
      fiveToTwentyFive{alias::Decimal{14}, alias::Decimal{5},
                       alias::Decimal{25}} {}

TEST_F(ValueTest, InitializeProperlyWithDefaultMinAndMax) {}

TEST_F(ValueTest, InitializeProperlyWithCorrectMinAndMax) {}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithIncorrectMinAndMax) {}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithOutOfRageValue) {}

TEST_F(ValueTest, GettersWork) {}
