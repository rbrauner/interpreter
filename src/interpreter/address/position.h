#ifndef INTERPRETER_POSITION_H
#define INTERPRETER_POSITION_H

#include <string>

namespace interpreter {
namespace interpreter {
namespace address {
class Position {
public:
  virtual ~Position() = 0;
  virtual std::string to_dec() = 0;
  virtual std::string to_hex() = 0;
};
} // namespace address
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_POSITION_H
