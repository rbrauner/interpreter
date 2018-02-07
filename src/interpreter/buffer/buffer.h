#pragma once

#include <initializer_list>

namespace interpreter {
namespace interpreter {
namespace buffer {

template <typename T> class FifoBuffer {
public:
  virtual ~FifoBuffer() = 0;
  virtual void pushBack(T item) = 0;
  virtual void pushBack(std::initializer_list<T> items) = 0;
  virtual std::initializer_list<T> pullFromBegin(int howMany) = 0;
  virtual int size() = 0;
};

} // namespace buffer
} // namespace interpreter
} // namespace interpreter
