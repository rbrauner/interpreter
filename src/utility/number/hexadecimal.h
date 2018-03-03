#pragma once

#include "utility/number/numberimpl.h"

namespace utility {
namespace number {

class Hexadecimal : public NumberImpl {
public:
  Hexadecimal(std::string value);

  bool operator==(const Hexadecimal &h) const;

  std::string getValue() const override;
  void setValue(std::string value) override;
};

using Hex = Hexadecimal;

} // namespace number
} // namespace utility
