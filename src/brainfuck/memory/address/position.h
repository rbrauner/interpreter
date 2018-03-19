#pragma once

#include "alias/number.h"

namespace brainfuck {
namespace memory {
namespace address {

class Position {
public:
  explicit Position(alias::Binary position);
  explicit Position(alias::Decimal position);
  explicit Position(alias::Hexadecimal position);

  alias::Binary toBin() const;
  alias::Decimal toDec() const;
  alias::Hexadecimal toHex() const;

  bool operator==(const Position &position) const;

private:
  alias::NumberPointer m_position;
};

} // namespace address
} // namespace memory
} // namespace brainfuck
