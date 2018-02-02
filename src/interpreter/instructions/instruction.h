#ifndef INTERPRETER_INSTRUCTION_H
#define INTERPRETER_INSTRUCTION_H

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

#endif // INTERPRETER_INSTRUCTION_H
