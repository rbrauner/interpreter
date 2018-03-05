#pragma once

#include "brainfuck/address/position.h"
#include "brainfuck/address/value.h"

namespace brainfuck {
namespace address {

class Address {
public:
  Address(Position position, Value value = alias::Decimal{"0"});

  Position getPosition() const;
  Value getValue() const;
  void setValue(Value value);

  bool operator==(const Address &a) const;

private:
  Position m_position;
  Value m_value;
};

} // namespace address
} // namespace brainfuck
