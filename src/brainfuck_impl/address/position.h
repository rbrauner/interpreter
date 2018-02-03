#ifndef POSITION_H
#define POSITION_H

#include "interpreter/address/position.h"

namespace interpreter {
namespace brainfuck {
namespace address {

class Position : public ::interpreter::interpreter::address::Position {
public:
  std::string to_dec();
  std::string to_hex();
};

} // namespace address
} // namespace brainfuck
} // namespace interpreter

#endif // POSITION_H
