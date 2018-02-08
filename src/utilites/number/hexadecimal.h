#pragma once

#include "utilites/number/number.h"
#include <string>

namespace interpreter {
namespace utilities {
namespace number {

class Hexadecimal : public Number {
public:
  Hexadecimal(std::string value);
  std::string getValue();
  void setValue(std::string);
};

using Hex = Hexadecimal;

} // namespace number
} // namespace utilities
} // namespace interpreter
