#pragma once

#include "utility/number/numberimpl.h"

namespace utility {
namespace number {

class Decimal : public NumberImpl {
public:
  Decimal(std::string value);
  Decimal(size_t value);

  std::string getValue() override;
  void setValue(std::string value) override;
};

using Dec = Decimal;

} // namespace number
} // namespace utility
