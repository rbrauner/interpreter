#pragma once

#include <string>

namespace interpreter {
namespace address {

class Position {
public:
  virtual ~Position() = 0;
  virtual std::string toDec() = 0;
  virtual std::string toHex() = 0;
};

} // namespace address
} // namespace interpreter
