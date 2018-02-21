#pragma once

#include "utilities/number/numberimpl.h"

namespace utilities {
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
} // namespace utilities
