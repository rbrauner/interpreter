#pragma once

#include "interpreter/address/position.h"
#include "interpreter/address/value.h"

namespace interpreter {
namespace interpreter {
namespace memory {

class MemoryPointer {
public:
  virtual ~MemoryPointer() = 0;
  virtual address::Value *getValue() = 0;
  virtual address::Position *getPosition() = 0;
};

} // namespace memory
} // namespace interpreter
} // namespace interpreter
