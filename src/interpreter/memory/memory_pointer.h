#ifndef INTERPRETER_MEMORY_POINTER_H
#define INTERPRETER_MEMORY_POINTER_H

#include "interpreter/address/position.h"
#include "interpreter/address/value.h"

namespace interpreter {
namespace interpreter {
namespace memory {

class Memory_pointer {
public:
  virtual ~Memory_pointer() = 0;
  virtual address::Value *get_value() = 0;
  virtual address::Position *get_position() = 0;
};

} // namespace memory
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_MEMORY_POINTER_H
