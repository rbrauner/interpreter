#pragma once

#include "utility/number/number.h"
#include <memory>

namespace interpreter {
namespace address {

class Position {
public:
  virtual ~Position() = 0;
  virtual std::shared_ptr<utility::number::Number> toDec() = 0;
  virtual std::shared_ptr<utility::number::Number> toHex() = 0;
};

} // namespace address
} // namespace interpreter
