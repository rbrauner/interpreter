#pragma once

#include "alias/number.h"

namespace brainfuck {
namespace address {

class Value {
public:
  Value(alias::Binary value) {}
  Value(alias::Decimal value) {}
  Value(alias::Hexadecimal value) {}

  alias::Decimal toDec() {}
  alias::Hexadecimal toHex() {}
};

} // namespace address
} // namespace brainfuck
