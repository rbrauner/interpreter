#include "memorypointer.h"

using brainfuck::address::Address;
using brainfuck::memory::Memory;
using brainfuck::memory::MemoryPointer;
using std::vector;

MemoryPointer::MemoryPointer(Memory &memory, uint32_t position)
    : vector<Address>::iterator{memory.m_memory.begin() + position} {}
