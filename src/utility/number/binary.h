#pragma once

#include "utility/number/numberimpl.h"

namespace utility {
namespace number {

class Binary : public NumberImpl {
public:
  Binary(std::string value);

  bool operator==(const Binary &b) const;

  std::string getValue() const override;
  void setValue(std::string value) override;
};

using Bin = Binary;

} // namespace number
} // namespace utility
