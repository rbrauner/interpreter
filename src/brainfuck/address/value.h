#pragma once

#include "interpreter/address/value.h"
#include "utility/number/binary.h"
#include "utility/number/decimal.h"
#include "utility/number/hexadecimal.h"

namespace brainfuck {
namespace address {

class Value : public ::interpreter::address::Value {
public:
  using Binary = utility::number::Binary;
  using Decimal = utility::number::Decimal;
  using Hexadecimal = utility::number::Hexadecimal;
  using NumberPointer = std::shared_ptr<utility::number::Number>;

  Value(Binary value) {}
  Value(Decimal value) {}
  Value(Hexadecimal value) {}
  ~Value() override;

  NumberPointer toDec() override {}
  NumberPointer toHex() override {}
};

} // namespace address
} // namespace brainfuck
