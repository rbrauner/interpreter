#pragma once

#include "utilites/number/number.h"

namespace interpreter {
namespace utilities {
namespace number {

class Decimal : public Number {
public:
  std::string getValue();
  void setValue(std::string);
};

using Dec = Decimal;

} // namespace number
} // namespace utilities
} // namespace interpreter
