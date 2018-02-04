#pragma once

namespace interpreter {
namespace interpreter {
namespace memory {

class Memory {
public:
  virtual ~Memory() = 0;
  virtual void clear() = 0;
};

}
}
}
