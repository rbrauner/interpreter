#include "valuetest.h"
#include "alias/number.h"

using brainfuck::memory::address::Value;
using brainfuck::memory::address::ValueTest;

ValueTest::ValueTest() : m_value{alias::Decimal{0}} {}

TEST_F(ValueTest, InitializeProperlyWithDefaultMinAndMax) {}

TEST_F(ValueTest, InitializeProperlyWithCorrectMinAndMax) {}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithIncorrectMinAndMax) {}

TEST_F(ValueTest, ReportsErrorDuringInitializationWithOutOfRageValue) {}

TEST_F(ValueTest, GettersWork) {}
