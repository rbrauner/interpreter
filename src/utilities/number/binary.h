#pragma once

#include "utilities/number/number.h"
#include <string>

namespace utilities {
namespace number {

class Binary : public Number {
public:
  Binary(std::string value) {}
  ~Binary();

  std::string getValue() { return ""; }
  void setValue(std::string) {}
};

using Bin = Binary;

} // namespace number
} // namespace utilities
