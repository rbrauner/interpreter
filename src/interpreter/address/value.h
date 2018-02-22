#pragma once

#include "utility/number/number.h"
#include <memory>

namespace interpreter {
namespace address {

class Value {
public:
  virtual ~Value() = 0;
  virtual std::shared_ptr<utility::number::Number> toDec() = 0;
  virtual std::shared_ptr<utility::number::Number> toHex() = 0;
};

} // namespace address
} // namespace interpreter
