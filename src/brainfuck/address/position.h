#pragma once

#include "interpreter/address/position.h"
#include "utility/number/binary.h"
#include "utility/number/decimal.h"
#include "utility/number/hexadecimal.h"

namespace brainfuck {
namespace address {

class Position : public ::interpreter::address::Position {
public:
  using Binary = utility::number::Binary;
  using Decimal = utility::number::Decimal;
  using Hexadecimal = utility::number::Hexadecimal;
  using NumberPointer = std::shared_ptr<utility::number::Number>;

  Position(Binary position) {}
  Position(Decimal position) {}
  Position(Hexadecimal position) {}
  ~Position() override;

  NumberPointer toDec() override {}
  NumberPointer toHex() override {}
};

} // namespace address
} // namespace brainfuck
