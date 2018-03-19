#include "memory.h"

using alias::Decimal;
using brainfuck::memory::Memory;
using brainfuck::memory::address::Address;
using brainfuck::memory::address::Value;
using std::uint32_t;

void Memory::clear() {
  for (auto &x : m_memory) {
    x.setValue(Value{Decimal{"0"}});
  }
}
