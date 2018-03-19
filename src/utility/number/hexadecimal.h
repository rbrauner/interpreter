#pragma once

#include "numberimpl.h"

namespace utility {
namespace number {

class Binary;
class Decimal;

class Hexadecimal : public NumberImpl {
public:
  explicit Hexadecimal(std::string value);

  bool operator==(const Hexadecimal &hexadecimal) const;
  bool operator<(const Hexadecimal &hexadecimal) const;
  bool operator>(const Hexadecimal &hexadecimal) const;

  std::string getValue() const override;
  void setValue(std::string value) override;
};

using Hex = Hexadecimal;

Binary hexadecimalToBinary(const Hexadecimal &hexadecimal);
Decimal hexadecimalToDecimal(const Hexadecimal &hexadecimal);

} // namespace number
} // namespace utility
