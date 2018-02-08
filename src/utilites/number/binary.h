#pragma once

#include "utilites/number/number.h"

namespace interpreter {
namespace utilities {
namespace number {

class Binary : public Number {
public:
  std::string getValue();
  void setValue(std::string);
};

using Bin = Binary;

} // namespace number
} // namespace utilities
} // namespace interpreter
