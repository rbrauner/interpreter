#include "valuetest.h"
#include "alias/number.h"

using brainfuck::memory::address::Value;
using brainfuck::memory::address::ValueTest;

ValueTest::ValueTest() : m_value{alias::Decimal{20}} {}

TEST_F(ValueTest, InitializeProperlyWithDefaultMinAndMax) {
  try {
    Value binDefault{alias::Binary{"1010"}};
    Value decDefault{alias::Decimal{10}};
    Value hexDefault{alias::Hexadecimal{"a"}};

    EXPECT_LE(INT8_MIN, stoi(binDefault.toDec().getValue()));
    EXPECT_LE(INT8_MIN, stoi(decDefault.toDec().getValue()));
    EXPECT_LE(INT8_MIN, stoi(hexDefault.toDec().getValue()));

    EXPECT_GE(INT8_MAX, stoi(binDefault.toDec().getValue()));
    EXPECT_GE(INT8_MAX, stoi(decDefault.toDec().getValue()));
    EXPECT_GE(INT8_MAX, stoi(hexDefault.toDec().getValue()));
  } catch (...) {
    FAIL();
  }
}

TEST_F(ValueTest, InitializeProperlyWithCorrectMinAndMax) {
  try {
    Value minusTenToMinusFive{alias::Decimal{-7}, alias::Decimal{-10},
                              alias::Decimal{-5}};
    Value minusFiveToTen{alias::Decimal{2}, alias::Decimal{-5},
                         alias::Decimal{10}};
    Value fiveToTwentyFive{alias::Decimal{14}, alias::Decimal{5},
                           alias::Decimal{25}};

    EXPECT_LE(-10, stoi(minusTenToMinusFive.toDec().getValue()));
    EXPECT_LE(-5, stoi(minusFiveToTen.toDec().getValue()));
    EXPECT_LE(5, stoi(fiveToTwentyFive.toDec().getValue()));

    EXPECT_GE(-5, stoi(minusTenToMinusFive.toDec().getValue()));
    EXPECT_GE(10, stoi(minusFiveToTen.toDec().getValue()));
    EXPECT_GE(25, stoi(fiveToTwentyFive.toDec().getValue()));
  } catch (...) {
    FAIL();
  }
}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithMinEqualToMax) {
  try {
    Value minEqualsMax{alias::Decimal{2}, alias::Decimal{1}, alias::Decimal{1}};
    FAIL();
  } catch (...) {
  }
}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithMinGreaterThanMax) {
  try {
    Value minGreaterThanMax{alias::Decimal{1}, alias::Decimal{2},
                            alias::Decimal{0}};
    FAIL();
  } catch (...) {
  }
}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithValueLesserThanMin) {
  try {
    Value valueLesserThanMin{alias::Decimal{-1}, alias::Decimal{0},
                             alias::Decimal{2}};
    FAIL();
  } catch (...) {
  }
}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithValueGreaterThanMax) {
  try {
    Value valueGreaterThanMax{alias::Decimal{3}, alias::Decimal{0},
                              alias::Decimal{2}};
    FAIL();
  } catch (...) {
  }
}

TEST_F(ValueTest, GettersWork) {
  EXPECT_EQ(alias::Binary{"10100"}, m_value.toBin());
  EXPECT_EQ(alias::Decimal{20}, m_value.toDec());
  EXPECT_EQ(alias::Hexadecimal{"14"}, m_value.toHex());
}
