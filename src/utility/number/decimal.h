#pragma once

#include "utility/number/numberimpl.h"

namespace utility {
namespace number {

class Binary;
class Hexadecimal;

class Decimal : public NumberImpl {
public:
  Decimal(std::string value);
  Decimal(int64_t value);

  bool operator==(const Decimal &d) const;

  std::string getValue() const override;
  void setValue(std::string value) override;
};

using Dec = Decimal;

Binary decToBin(const Decimal &decimal);
Hexadecimal decToHex(const Decimal &decimal);

} // namespace number
} // namespace utility
