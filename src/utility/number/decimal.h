#pragma once

#include "numberimpl.h"

namespace utility {
namespace number {

class Binary;
class Hexadecimal;

class Decimal : public NumberImpl {
public:
  explicit Decimal(std::string value);
  explicit Decimal(int64_t value);

  bool operator==(const Decimal &decimal) const;
  bool operator<(const Decimal &decimal) const;
  bool operator>(const Decimal &decimal) const;

  std::string getValue() const override;
  void setValue(std::string value) override;
};

using Dec = Decimal;

Binary decimalToBinary(const Decimal &decimal);
Hexadecimal decimalToHexadecimal(const Decimal &decimal);

} // namespace number
} // namespace utility
