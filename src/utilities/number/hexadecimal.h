#pragma once

#include "utilities/number/number.h"
#include <string>

namespace utilities {
namespace number {

class Hexadecimal : public Number {
public:
  Hexadecimal(std::string value) {}
  ~Hexadecimal() {}

  std::string getValue() { return ""; }
  void setValue(std::string) {}
};

using Hex = Hexadecimal;

} // namespace number
} // namespace utilities
