#include "memory.h"

using alias::Decimal;
using brainfuck::memory::Memory;
using brainfuck::memory::address::Address;
using brainfuck::memory::address::Value;
using std::uint32_t;

Memory::Memory(uint32_t size) : m_memory{size, Address{Decimal{"0"}}} {}

void Memory::clear() {
  for (auto &x : m_memory) {
    x.setValue(Value{Decimal{"0"}});
  }
}
