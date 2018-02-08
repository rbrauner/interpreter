#pragma once

#include "utilites/number/number.h"
#include <string>

namespace interpreter {
namespace utilities {
namespace number {

class Decimal : public Number {
public:
  Decimal(std::string value);
  Decimal(int value);
  ~Decimal();

  std::string getValue();
  void setValue(std::string);
};

using Dec = Decimal;

} // namespace number
} // namespace utilities
} // namespace interpreter
