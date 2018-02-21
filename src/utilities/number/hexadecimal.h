#pragma once

#include "utilities/number/numberimpl.h"

namespace utilities {
namespace number {

class Hexadecimal : public NumberImpl {
public:
  Hexadecimal(std::string value);

  std::string getValue() override;
  void setValue(std::string value) override;
};

using Hex = Hexadecimal;

} // namespace number
} // namespace utilities
