#pragma once

#include "alias/number.h"

namespace brainfuck {
namespace memory {
namespace address {

class Value {
public:
  Value(alias::Binary value, alias::Binary min, alias::Binary max);
  Value(alias::Decimal value, alias::Decimal min, alias::Decimal max);
  Value(alias::Hexadecimal value, alias::Hexadecimal min,
        alias::Hexadecimal max);

  alias::Binary toBin() const;
  alias::Decimal toDec() const;
  alias::Hexadecimal toHex() const;

  bool operator==(const Value &v) const;

private:
  alias::NumberPointer m_value;
};

} // namespace address
} // namespace memory
} // namespace brainfuck
