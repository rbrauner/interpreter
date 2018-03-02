#pragma once

#include "brainfuck/address/position.h"
#include "brainfuck/address/value.h"

namespace brainfuck {
namespace address {

class Address {
public:
  Address(Position position, Value value = "0");

  Position getPosition();
  Value getValue();
  void setValue(Value value);

private:
  Position m_position;
  Value m_value;
};

} // namespace address
} // namespace brainfuck
