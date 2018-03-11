#include "memory.h"

using brainfuck::memory::Memory;
using brainfuck::memory::address::Address;
using brainfuck::memory::address::Value;
using std::uint32_t;

Memory::Memory(uint32_t size) : m_memory{size, Address{alias::Decimal{"0"}}} {}

void Memory::clear() {
  for (auto &x : m_memory) {
    x.setValue(Value{alias::Decimal{"0"}});
  }
}
