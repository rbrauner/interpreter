#include "numbertest.h"
#include "utility/number/binary.h"
#include "utility/number/decimal.h"
#include "utility/number/hexadecimal.h"

using std::make_shared;
using utility::number::Bin;
using utility::number::Dec;
using utility::number::Hex;
using utility::number::NumberTest;

NumberTest::NumberTest()
    : bin{make_shared<Bin>("111100")}, dec{make_shared<Dec>(60)},
      hex{make_shared<Hex>("3c")}, negativeBin{make_shared<Bin>("-111100")},
      negativeDec{make_shared<Dec>(-60)}, negativeHex{make_shared<Hex>("-3c")} {
}

NumberTest::~NumberTest() {}

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
  bin->setValue("-0x01110000");
  dec->setValue("-0x0112");
  hex->setValue("-070");

  EXPECT_EQ("1110000", bin->getValue());
  EXPECT_EQ("112", dec->getValue());
  EXPECT_EQ("70", hex->getValue());
  EXPECT_EQ("-1110000", negativeBin->getValue());
  EXPECT_EQ("-112", negativeDec->getValue());
  EXPECT_EQ("-70", negativeHex->getValue());
}
