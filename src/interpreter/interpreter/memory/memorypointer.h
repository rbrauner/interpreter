#pragma once

#include "interpreter/interpreter/address/position.h"
#include "interpreter/interpreter/address/value.h"
#include <memory>

namespace interpreter {
namespace interpreter {
namespace memory {

class MemoryPointer {
public:
  virtual ~MemoryPointer() = 0;
  virtual std::shared_ptr<address::Value> getValue() = 0;
  virtual std::shared_ptr<address::Position> getPosition() = 0;
};

} // namespace memory
} // namespace interpreter
} // namespace interpreter
