#pragma once

#include "utility/number/binary.h"
#include "utility/number/decimal.h"
#include "utility/number/hexadecimal.h"
#include <memory>

namespace brainfuck {
namespace address {

class Position {
public:
  using Binary = utility::number::Binary;
  using Decimal = utility::number::Decimal;
  using Hexadecimal = utility::number::Hexadecimal;
  using NumberPointer = std::shared_ptr<utility::number::Number>;

  Position(Binary position) {}
  Position(Decimal position) {}
  Position(Hexadecimal position) {}

  NumberPointer toDec() {}
  NumberPointer toHex() {}
};

} // namespace address
} // namespace brainfuck
