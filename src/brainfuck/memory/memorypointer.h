#pragma once

#include "brainfuck/address/address.h"
#include "brainfuck/address/position.h"
#include "brainfuck/address/value.h"
#include "interpreter/memory/memorypointer.h"

namespace brainfuck {
namespace memory {

class MemoryPointer : public ::interpreter::memory::MemoryPointer {
public:
  using AddressPointer = std::shared_ptr<interpreter::address::Address>;
  using ValuePointer = std::shared_ptr<interpreter::address::Value>;
  using PositionPointer = std::shared_ptr<interpreter::address::Position>;

  MemoryPointer(AddressPointer address) {}

  ValuePointer getValue() override {}
  PositionPointer getPosition() override {}
};

} // namespace memory
} // namespace brainfuck
