#pragma once

#include "utility/number/numberimpl.h"

namespace utility {
namespace number {

class Binary;
class Decimal;

class Hexadecimal : public NumberImpl {
public:
  Hexadecimal(std::string value);

  bool operator==(const Hexadecimal &h) const;
  bool operator<(const Hexadecimal &h) const;
  bool operator>(const Hexadecimal &h) const;

  std::string getValue() const override;
  void setValue(std::string value) override;
};

using Hex = Hexadecimal;

Binary hexadecimalToBinary(const Hexadecimal &hexadecimal);
Decimal hexadecimalToDecimal(const Hexadecimal &hexadecimal);

} // namespace number
} // namespace utility
