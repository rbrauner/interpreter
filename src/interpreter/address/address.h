#pragma once

#include "interpreter/address/position.h"
#include "interpreter/address/value.h"

namespace interpreter {
namespace address {

class Address {
public:
  virtual ~Address() = 0;

  virtual Position getPosition();
  virtual Value getValue();
  virtual void setValue(Value value);
};

} // namespace address
} // namespace interpreter
