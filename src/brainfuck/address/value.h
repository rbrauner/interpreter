#pragma once

#include "interpreter/address/value.h"

namespace interpreter {
namespace brainfuck {
namespace address {

class Value : public ::interpreter::interpreter::address::Value {
public:
  std::string to_dec();
  std::string to_hex();
};

}
}
}
