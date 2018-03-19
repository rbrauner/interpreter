#pragma once

#include "alias/number.h"
#include "brainfuck/memory/address/type.h"

namespace brainfuck {
namespace memory {
namespace address {

class Value {
public:
  explicit Value(alias::Binary value,
                 alias::Binary min = alias::Binary{"-1111111"},
                 alias::Binary max = alias::Binary{"1111111"});
  explicit Value(alias::Decimal value,
                 alias::Decimal min = alias::Decimal{std::to_string(INT8_MIN)},
                 alias::Decimal max = alias::Decimal{std::to_string(INT8_MAX)});
  explicit Value(alias::Hexadecimal value,
                 alias::Hexadecimal min = alias::Hexadecimal{"-80"},
                 alias::Hexadecimal max = alias::Hexadecimal{"7f"});

  alias::Binary toBin() const;
  alias::Decimal toDec() const;
  alias::Hexadecimal toHex() const;

  bool operator==(const Value &value) const;

private:
  alias::NumberPointer m_value;
  Type type;
};

} // namespace address
} // namespace memory
} // namespace brainfuck
