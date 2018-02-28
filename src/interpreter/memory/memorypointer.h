#pragma once

#include "interpreter/address/address.h"
#include <memory>

namespace interpreter {
namespace memory {

template <typename T = ::interpreter::address::Address>
class MemoryPointer : public std::shared_ptr<T> {
public:
  virtual ~MemoryPointer() = 0;
};

} // namespace memory
} // namespace interpreter
