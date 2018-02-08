#pragma once

#include "utilites/number/number.h"

namespace interpreter {
namespace utilities {
namespace number {

class Hexadecimal : public Number {
public:
  std::string getValue();
  void setValue(std::string);
};

using Hex = Hexadecimal;

} // namespace number
} // namespace utilities
} // namespace interpreter
