#ifndef INTERPRETER_VALUE_H
#define INTERPRETER_VALUE_H

#include <string>

namespace interpreter {
namespace interpreter {
namespace address {
class Value {
public:
  virtual ~Value() = 0;
  virtual std::string to_dec() = 0;
  virtual std::string to_hex() = 0;
};
} // namespace address
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_VALUE_H
