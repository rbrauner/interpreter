#include "addresstest.h"

#include "alias/number.h"

using alias::Binary;
using alias::Decimal;
using alias::Hexadecimal;
using brainfuck::memory::address::Address;
using brainfuck::memory::address::AddressTest;
using brainfuck::memory::address::Position;
using brainfuck::memory::address::Value;

AddressTest::AddressTest() { emptyInitialize(); }

void AddressTest::emptyInitialize() {
  Address a{Position{Decimal{1}}, Value{Decimal{1}}};
  addresses.clear();
  for (auto i = 0; i < howMany; i++) {
    addresses.push_back(Address{Position{Decimal{i}}});
  }
}

void AddressTest::initializeWith(int number) {
  addresses.clear();
  for (auto i = 0; i < howMany; i++) {
    addresses.push_back(Address{Position{Decimal{i}}, Value{Decimal{number}}});
  }
}

void AddressTest::initializeWithSuccessiveNumbers() {
  addresses.clear();
  for (auto i = 0; i < howMany; i++) {
    addresses.push_back(Address{Position{Decimal{i}}, Value{Decimal{i}}});
  }
}

TEST_F(AddressTest, EmptyInitializeProperly) {
  emptyInitialize();

  EXPECT_EQ(Decimal{0}, addresses.at(0).getValue().toDec());
  EXPECT_EQ(Decimal{0}, addresses.at(1).getValue().toDec());
  EXPECT_EQ(Decimal{0}, addresses.at(500).getValue().toDec());
  EXPECT_EQ(Decimal{0}, addresses.at(998).getValue().toDec());
  EXPECT_EQ(Decimal{0}, addresses.at(999).getValue().toDec());
}

TEST_F(AddressTest, InitializeWith5Properly) {
  initializeWith(5);

  EXPECT_EQ(Decimal{5}, addresses.at(0).getValue().toDec());
  EXPECT_EQ(Decimal{5}, addresses.at(1).getValue().toDec());
  EXPECT_EQ(Decimal{5}, addresses.at(500).getValue().toDec());
  EXPECT_EQ(Decimal{5}, addresses.at(998).getValue().toDec());
  EXPECT_EQ(Decimal{5}, addresses.at(999).getValue().toDec());
}

TEST_F(AddressTest, InitializeWithSuccessiveNumbersProperly) {
  initializeWithSuccessiveNumbers();

  EXPECT_EQ(Decimal{0}, addresses.at(0).getValue().toDec());
  EXPECT_EQ(Decimal{1}, addresses.at(1).getValue().toDec());
  EXPECT_EQ(Decimal{500}, addresses.at(500).getValue().toDec());
  EXPECT_EQ(Decimal{998}, addresses.at(998).getValue().toDec());
  EXPECT_EQ(Decimal{999}, addresses.at(999).getValue().toDec());
}

TEST_F(AddressTest, SetterWorks) {
  addresses.at(0).setValue(Value{Decimal{5}});
  addresses.at(1).setValue(Value{Decimal{5}});
  addresses.at(500).setValue(Value{Decimal{5}});
  addresses.at(998).setValue(Value{Decimal{5}});
  addresses.at(999).setValue(Value{Decimal{5}});

  EXPECT_EQ(Decimal{5}, addresses.at(0).getValue().toDec());
  EXPECT_EQ(Decimal{5}, addresses.at(1).getValue().toDec());
  EXPECT_EQ(Decimal{5}, addresses.at(500).getValue().toDec());
  EXPECT_EQ(Decimal{5}, addresses.at(998).getValue().toDec());
  EXPECT_EQ(Decimal{5}, addresses.at(999).getValue().toDec());

  // surrounding
  EXPECT_EQ(Decimal{0}, addresses.at(2).getValue().toDec());
  EXPECT_EQ(Decimal{0}, addresses.at(499).getValue().toDec());
  EXPECT_EQ(Decimal{0}, addresses.at(501).getValue().toDec());
  EXPECT_EQ(Decimal{0}, addresses.at(997).getValue().toDec());
}
