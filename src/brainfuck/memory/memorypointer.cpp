#include "memorypointer.h"

using brainfuck::memory::Memory;
using brainfuck::memory::MemoryPointer;
using brainfuck::memory::address::Address;
using std::vector;

MemoryPointer::MemoryPointer(Memory &memory, uint32_t position)
    : vector<Address>::iterator{memory.m_memory.begin() + position} {}
