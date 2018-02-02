#ifndef INTERPRETER_MEMORY_H
#define INTERPRETER_MEMORY_H

namespace interpreter {
namespace interpreter {
namespace memory {
class Memory {
public:
  virtual ~Memory() = 0;
  virtual void clear() = 0;
};
} // namespace memory
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_MEMORY_H
