#pragma once

#include "alias/number.h"

namespace brainfuck {
namespace address {

class Value {
public:
  Value(alias::Binary value);
  Value(alias::Decimal value);
  Value(alias::Hexadecimal value);

  alias::Decimal toDec() const;
  alias::Hexadecimal toHex() const;

  bool operator==(const Value &v) const;

private:
  alias::NumberPointer m_value;
};

} // namespace address
} // namespace brainfuck
