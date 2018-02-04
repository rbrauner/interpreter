#pragma once

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

}
}
}
