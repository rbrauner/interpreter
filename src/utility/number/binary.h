#pragma once

#include "utility/number/numberimpl.h"

namespace utility {
namespace number {

class Decimal;
class Hexadecimal;

class Binary : public NumberImpl {
public:
  Binary(std::string value);

  bool operator==(const Binary &b) const;

  std::string getValue() const override;
  void setValue(std::string value) override;
};

using Bin = Binary;

Decimal binaryToDecimal(const Binary &binary);
Hexadecimal binaryToHexadecimal(const Binary &binary);

} // namespace number
} // namespace utility
