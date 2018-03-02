#include "addresstest.h"

#include "alias/number.h"

using brainfuck::address::Address;
using brainfuck::address::Position;
using brainfuck::address::Value;
using tests::brainfuck::address::AddressTest;

AddressTest::AddressTest() { emptyInitialize(); }

void AddressTest::emptyInitialize() {
  addresses.clear();
  for (auto i = 0; i < howMany; i++) {
    addresses.push_back(Address{Position{i}});
  }
}

void AddressTest::initializeWith(int number) {
  addresses.clear();
  for (auto i = 0; i < howMany; i++) {
    addresses.push_back(Address{Position{i}, Value{number}});
  }
}

void AddressTest::initializeWithSuccessiveNumbers() {
  addresses.clear();
  for (auto i = 0; i < howMany; i++) {
    addresses.push_back(Address{Position{i}, Value{i}});
  }
}

TEST_F(AddressTest, EmptyInitializeProperly) {
  emptyInitialize();

  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(998).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(999).getValue().toDec());
}

TEST_F(AddressTest, InitializeWith5Properly) {
  initializeWith(5);

  EXPECT_EQ(alias::Decimal{"5"}, addresses.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"5"}, addresses.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"5"}, addresses.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"9"}, addresses.at(998).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"9"}, addresses.at(999).getValue().toDec());
}

TEST_F(AddressTest, InitializeWithSuccessiveNumbersProperly) {
  initializeWithSuccessiveNumbers();

  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"1"}, addresses.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"500"}, addresses.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"998"}, addresses.at(998).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"999"}, addresses.at(999).getValue().toDec());
}

TEST_F(AddressTest, SetterWorks) {
  addresses.at(0).setValue(alias::Decimal{"5"});
  addresses.at(1).setValue(alias::Decimal{"5"});
  addresses.at(500).setValue(alias::Decimal{"5"});
  addresses.at(998).setValue(alias::Decimal{"5"});
  addresses.at(999).setValue(alias::Decimal{"5"});

  EXPECT_EQ(alias::Decimal{"5"}, addresses.at(0).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"5"}, addresses.at(1).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"5"}, addresses.at(500).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"9"}, addresses.at(998).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"9"}, addresses.at(999).getValue().toDec());

  // surrounding
  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(2).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(499).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(501).getValue().toDec());
  EXPECT_EQ(alias::Decimal{"0"}, addresses.at(997).getValue().toDec());
}
