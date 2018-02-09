#pragma once

namespace interpreter {
namespace interpreter {
namespace instructions {

class Instruction {
public:
  virtual ~Instruction() = 0;
  virtual void exectute() = 0;
};

} // namespace instructions
} // namespace interpreter
} // namespace interpreter
