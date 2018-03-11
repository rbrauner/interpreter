#pragma once

#include "brainfuck/memory/address/position.h"
#include "brainfuck/memory/address/value.h"

namespace brainfuck {
namespace memory {
namespace address {

class Address {
public:
  Address(Position position, Value value = Value{alias::Decimal{"0"}});

  Position getPosition() const;
  Value getValue() const;
  void setValue(Value value);

  bool operator==(const Address &a) const;

private:
  Position m_position;
  Value m_value;
};

} // namespace address
} // namespace memory
} // namespace brainfuck
