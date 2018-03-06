#include "memory.h"

using brainfuck::address::Address;
using brainfuck::address::Value;
using brainfuck::memory::Memory;
using std::uint32_t;

Memory::Memory(uint32_t size) : m_memory{size, Address{alias::Decimal{"0"}}} {}

void Memory::clear() {
  for (auto &x : m_memory) {
    x.setValue(Value{alias::Decimal{"0"}});
  }
}
