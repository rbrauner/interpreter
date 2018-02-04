#pragma once

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

}
}
}
