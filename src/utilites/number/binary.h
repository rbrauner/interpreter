#pragma once

#include "utilites/number/number.h"
#include <string>

namespace interpreter {
namespace utilities {
namespace number {

class Binary : public Number {
public:
  Binary(std::string value);
  std::string getValue();
  void setValue(std::string);
};

using Bin = Binary;

} // namespace number
} // namespace utilities
} // namespace interpreter
