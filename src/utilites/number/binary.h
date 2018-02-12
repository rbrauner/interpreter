#pragma once

#include "utilites/number/number.h"
#include <string>

namespace utilities {
namespace number {

class Binary : public Number {
public:
  Binary(std::string value) {}
  ~Binary() {}

  std::string getValue() {}
  void setValue(std::string) {}
};

using Bin = Binary;

} // namespace number
} // namespace utilities
