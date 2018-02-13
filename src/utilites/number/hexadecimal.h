#pragma once

#include "utilites/number/number.h"
#include <string>

namespace utilities {
namespace number {

class Hexadecimal : public Number {
public:
  Hexadecimal(std::string value) {}
  ~Hexadecimal() {}

  std::string getValue() { return nullptr; }
  void setValue(std::string) {}
};

using Hex = Hexadecimal;

} // namespace number
} // namespace utilities
