#include "charsettest.h"

CharSetTest::CharSetTest()
    : bin{{'0', '1'}}, dec{"9081726354"}, hex{"0123456789abcdef"} {}

CharSetTest::~CharSetTest() {
  bin.~CharSet();
  dec.~CharSet();
  hex.~CharSet();
}

void CharSetTest::checkIfAllCharsFromScopeExists() {
  EXPECT_TRUE(bin.checkIfExistsInCharSet('0'));
  EXPECT_TRUE(bin.checkIfExistsInCharSet('1'));

  EXPECT_TRUE(dec.checkIfExistsInCharSet('0'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('1'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('2'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('3'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('4'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('5'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('6'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('7'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('8'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('9'));

  EXPECT_TRUE(hex.checkIfExistsInCharSet('0'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('1'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('2'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('3'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('4'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('5'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('6'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('7'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('8'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('9'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('a'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('b'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('c'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('d'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('e'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('f'));
}

void CharSetTest::checkIfCharsOutOfScopeNotExists() {
  EXPECT_FALSE(bin.checkIfExistsInCharSet('2'));
  EXPECT_FALSE(bin.checkIfExistsInCharSet('a'));
  EXPECT_FALSE(bin.checkIfExistsInCharSet('-'));
  EXPECT_FALSE(bin.checkIfExistsInCharSet(' '));

  EXPECT_FALSE(dec.checkIfExistsInCharSet('a'));
  EXPECT_FALSE(dec.checkIfExistsInCharSet('-'));
  EXPECT_FALSE(dec.checkIfExistsInCharSet(' '));

  EXPECT_FALSE(hex.checkIfExistsInCharSet('g'));
  EXPECT_FALSE(hex.checkIfExistsInCharSet('-'));
  EXPECT_FALSE(hex.checkIfExistsInCharSet(' '));
}

TEST_F(CharSetTest, CreateProperly) {
  checkIfAllCharsFromScopeExists();
  checkIfCharsOutOfScopeNotExists();
}

TEST_F(CharSetTest, TeardownProperly) {
  bin.~CharSet();
  dec.~CharSet();
  hex.~CharSet();

  EXPECT_FALSE(bin.checkIfExistsInCharSet('0'));
  EXPECT_FALSE(bin.checkIfExistsInCharSet('1'));
  EXPECT_FALSE(bin.checkIfExistsInCharSet('2'));
  EXPECT_FALSE(bin.checkIfExistsInCharSet('a'));

  EXPECT_FALSE(dec.checkIfExistsInCharSet('0'));
  EXPECT_FALSE(dec.checkIfExistsInCharSet('4'));
  EXPECT_FALSE(dec.checkIfExistsInCharSet('9'));
  EXPECT_FALSE(dec.checkIfExistsInCharSet('a'));

  EXPECT_FALSE(hex.checkIfExistsInCharSet('0'));
  EXPECT_FALSE(hex.checkIfExistsInCharSet('7'));
  EXPECT_FALSE(hex.checkIfExistsInCharSet('f'));
  EXPECT_FALSE(hex.checkIfExistsInCharSet('g'));
}

TEST_F(CharSetTest, SetterWorks) {
  bin.setCharSet("3216549870abcdef");              // 16
  dec.setCharSet({'2', '3', '1', '0'});            // 4
  hex.setCharSet({'1', '9', '3', 'a', '-', '\n'}); // 6

  EXPECT_TRUE(bin.checkIfExistsInCharSet('a'));
  EXPECT_TRUE(bin.checkIfExistsInCharSet('3'));
  EXPECT_TRUE(bin.checkIfExistsInCharSet('f'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('2'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('1'));
  EXPECT_TRUE(dec.checkIfExistsInCharSet('3'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('9'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('-'));
  EXPECT_TRUE(hex.checkIfExistsInCharSet('\n'));

  EXPECT_FALSE(bin.checkIfExistsInCharSet('g'));
  EXPECT_FALSE(bin.checkIfExistsInCharSet('\r'));
  EXPECT_FALSE(bin.checkIfExistsInCharSet(' '));
  EXPECT_FALSE(dec.checkIfExistsInCharSet('5'));
  EXPECT_FALSE(dec.checkIfExistsInCharSet('a'));
  EXPECT_FALSE(dec.checkIfExistsInCharSet('\\'));
  EXPECT_FALSE(hex.checkIfExistsInCharSet('2'));
  EXPECT_FALSE(hex.checkIfExistsInCharSet('b'));
  EXPECT_FALSE(hex.checkIfExistsInCharSet('\x1'));
}
