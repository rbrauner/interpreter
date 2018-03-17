#pragma once

#include "alias/number.h"
#include "brainfuck/memory/address/type.h"
#include <cstdint>
#include <string>

namespace brainfuck {
namespace memory {
namespace address {

class Value {
public:
  Value(alias::Binary value, alias::Binary min = alias::Binary{"10000000"},
        alias::Binary max = alias::Binary{"01111111"});
  Value(alias::Decimal value,
        alias::Decimal min = alias::Decimal{std::to_string(INT8_MIN)},
        alias::Decimal max = alias::Decimal{std::to_string(INT8_MAX)});
  Value(alias::Hexadecimal value,
        alias::Hexadecimal min = alias::Hexadecimal{"-80"},
        alias::Hexadecimal max = alias::Hexadecimal{"7f"});

  alias::Binary toBin() const;
  alias::Decimal toDec() const;
  alias::Hexadecimal toHex() const;

  bool operator==(const Value &v) const;

private:
  alias::NumberPointer m_value;
  Type type;
};

} // namespace address
} // namespace memory
} // namespace brainfuck
