#pragma once

#include "utilities/number/number.h"

namespace utilities {
namespace number {

class NumberImpl : public Number {
public:
  ~NumberImpl() override = 0;
  std::string getValue() override = 0;
  void setValue(std::string value) override = 0;
};

} // namespace number
} // namespace utilities
