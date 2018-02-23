#pragma once

namespace interpreter {
namespace instruction {

class Instruction {
public:
  virtual ~Instruction() = 0;
  virtual void exectute() = 0;
};

} // namespace instruction
} // namespace interpreter
