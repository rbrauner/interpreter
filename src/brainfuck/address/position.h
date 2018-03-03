#pragma once

#include "alias/number.h"

namespace brainfuck {
namespace address {

class Position {
public:
  Position(alias::Binary position) {}
  Position(alias::Decimal position) {}
  Position(alias::Hexadecimal position) {}

  alias::Decimal toDec() {}
  alias::Hexadecimal toHex() {}
};

} // namespace address
} // namespace brainfuck
