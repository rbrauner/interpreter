#pragma once

#include <memory>
#include <string>

namespace interpreter {
namespace utilities {
namespace number {

class Number {
public:
  virtual ~Number() {}
  virtual std::string getValue() = 0;
  virtual void setValue(std::string value) = 0;
};

} // namespace number
} // namespace utilities
} // namespace interpreter
