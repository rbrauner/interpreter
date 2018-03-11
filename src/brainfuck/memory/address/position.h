#pragma once

#include "alias/number.h"

namespace brainfuck {
namespace memory {
namespace address {

class Position {
public:
  Position(alias::Binary position);
  Position(alias::Decimal position);
  Position(alias::Hexadecimal position);

  alias::Decimal toDec() const;
  alias::Hexadecimal toHex() const;

  bool operator==(const Position &p) const;

private:
  alias::NumberPointer m_position;
};

} // namespace address
} // namespace memory
} // namespace brainfuck