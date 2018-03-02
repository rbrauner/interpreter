#pragma once

#include "brainfuck/address/position.h"
#include "brainfuck/address/value.h"
#include "interpreter/address/address.h"

namespace brainfuck {
namespace address {

class Address : public ::interpreter::address::Address {
public:
  Address(Position position, Value value = "0");

  interpreter::address::Position getPosition() override;
  interpreter::address::Value getValue() override;
  void setValue(interpreter::address::Value value) override;

private:
  Position m_position;
  Value m_value;
};

} // namespace address
} // namespace brainfuck
