#pragma once

#include "utilities/number/number.h"
#include <string>

namespace utilities {
namespace number {

class Decimal : public Number {
public:
  Decimal(std::string value) {}
  Decimal(int value) {}
  ~Decimal();

  std::string getValue() { return ""; }
  void setValue(std::string) {}
};

using Dec = Decimal;

} // namespace number
} // namespace utilities
