#pragma once

#include "utilities/number/numberimpl.h"

namespace utilities {
namespace number {

class Binary : public NumberImpl {
public:
  Binary(std::string value);

  std::string getValue() override;
  void setValue(std::string value) override;
};

using Bin = Binary;

} // namespace number
} // namespace utilities
