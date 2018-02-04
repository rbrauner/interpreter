#pragma once

namespace interpreter {
namespace interpreter {
namespace instructions {

class Instruction {
public:
  virtual ~Instruction() = 0;
  virtual void exectute() = 0;
};

}
}
}
