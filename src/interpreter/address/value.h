#pragma once

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

}
}
}
