#include "numbertest.h"
#include "alias/number.h"
#include "utility/number/binary.h"
#include "utility/number/decimal.h"
#include "utility/number/hexadecimal.h"

using std::make_shared;
using utility::number::NumberTest;

NumberTest::NumberTest()
    : bin{make_shared<Binary>("111100")}, dec{make_shared<Decimal>(60)},
      hex{make_shared<Hexadecimal>("3c")}, negativeBin{make_shared<Binary>(
                                               "-111100")},
      negativeDec{make_shared<Decimal>(-60)},
      negativeHex{make_shared<Hexadecimal>("-3c")} {}

TEST_F(NumberTest, CreateProperly) {
  EXPECT_EQ("111100", bin->getValue());
  EXPECT_EQ("60", dec->getValue());
  EXPECT_EQ("3c", hex->getValue());

  EXPECT_EQ("-111100", negativeBin->getValue());
  EXPECT_EQ("-60", negativeDec->getValue());
  EXPECT_EQ("-3c", negativeHex->getValue());
}

TEST_F(NumberTest, SetterWorks) {
  bin->setValue("00010110");
  dec->setValue("0022");
  hex->setValue("0016");
  negativeBin->setValue("-00010110");
  negativeDec->setValue("-0022");
  negativeHex->setValue("-0016");

  EXPECT_EQ("10110", bin->getValue());
  EXPECT_EQ("22", dec->getValue());
  EXPECT_EQ("16", hex->getValue());
  EXPECT_EQ("-10110", negativeBin->getValue());
  EXPECT_EQ("-22", negativeDec->getValue());
  EXPECT_EQ("-16", negativeHex->getValue());

  bin->setValue("0b01011010");
  dec->setValue("090");
  hex->setValue("0x09C");
  negativeBin->setValue("-0b01011010");
  negativeDec->setValue("-090");
  negativeHex->setValue("-0x09C");

  EXPECT_EQ("1011010", bin->getValue());
  EXPECT_EQ("90", dec->getValue());
  EXPECT_EQ("9c", hex->getValue());
  EXPECT_EQ("-1011010", negativeBin->getValue());
  EXPECT_EQ("-90", negativeDec->getValue());
  EXPECT_EQ("-9c", negativeHex->getValue());

  bin->setValue("0x01110000");
  dec->setValue("0x0112");
  hex->setValue("070");
  negativeBin->setValue("-0x01110000");
  negativeDec->setValue("-0x0112");
  negativeHex->setValue("-070");

  EXPECT_EQ("1110000", bin->getValue());
  EXPECT_EQ("112", dec->getValue());
  EXPECT_EQ("70", hex->getValue());
  EXPECT_EQ("-1110000", negativeBin->getValue());
  EXPECT_EQ("-112", negativeDec->getValue());
  EXPECT_EQ("-70", negativeHex->getValue());
}

TEST_F(NumberTest, BinaryConversionsWork) {
  alias::Binary twentyFive = alias::Binary{"11001"};

  EXPECT_EQ(alias::Decimal{"25"}, binaryToDecimal(twentyFive));
  EXPECT_EQ(alias::Hexadecimal{"19"}, binaryToHexadecimal(twentyFive));
}

TEST_F(NumberTest, DecimalConversionsWork) {
  alias::Decimal twentyFive = alias::Decimal{"25"};

  EXPECT_EQ(alias::Binary{"11001"}, decimalToBinary(twentyFive));
  EXPECT_EQ(alias::Hexadecimal{"19"}, decimalToHexadecimal(twentyFive));
}

TEST_F(NumberTest, HexadecimalConversionsWork) {
  alias::Hexadecimal twentyFive = alias::Hexadecimal{"19"};

  EXPECT_EQ(alias::Binary{"11001"}, hexadecimalToBinary(twentyFive));
  EXPECT_EQ(alias::Decimal{"25"}, hexadecimalToDecimal(twentyFive));
}
