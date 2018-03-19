#include "valuetest.h"
#include "alias/number.h"

using alias::Binary;
using alias::Decimal;
using alias::Hexadecimal;
using brainfuck::memory::address::Value;
using brainfuck::memory::address::ValueTest;

ValueTest::ValueTest() : m_value{Decimal{20}} {}

TEST_F(ValueTest, InitializeProperlyWithDefaultMinAndMax) {
  try {
    Value binDefault{Binary{"1010"}};
    Value decDefault{Decimal{10}};
    Value hexDefault{Hexadecimal{"a"}};

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
    Value minusTenToMinusFive{Decimal{-7}, Decimal{-10}, Decimal{-5}};
    Value minusFiveToTen{Decimal{2}, Decimal{-5}, Decimal{10}};
    Value fiveToTwentyFive{Decimal{14}, Decimal{5}, Decimal{25}};

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
    Value minEqualsMax{Decimal{2}, Decimal{1}, alias::Decimal{1}};
    FAIL();
  } catch (...) {
  }
}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithMinGreaterThanMax) {
  try {
    Value minGreaterThanMax{Decimal{1}, Decimal{2}, Decimal{0}};
    FAIL();
  } catch (...) {
  }
}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithValueLesserThanMin) {
  try {
    Value valueLesserThanMin{Decimal{-1}, Decimal{0}, Decimal{2}};
    FAIL();
  } catch (...) {
  }
}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithValueGreaterThanMax) {
  try {
    Value valueGreaterThanMax{Decimal{3}, Decimal{0}, Decimal{2}};
    FAIL();
  } catch (...) {
  }
}

TEST_F(ValueTest, GettersWork) {
  EXPECT_EQ(Binary{"10100"}, m_value.toBin());
  EXPECT_EQ(Decimal{20}, m_value.toDec());
  EXPECT_EQ(Hexadecimal{"14"}, m_value.toHex());
}
