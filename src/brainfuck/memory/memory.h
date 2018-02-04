#pragma once

#include "interpreter/memory/memory.h"

namespace interpreter {
namespace brainfuck {
namespace memory {

class Memory : public ::interpreter::interpreter::memory::Memory {
public:
  void clear();
};

}
}
}
