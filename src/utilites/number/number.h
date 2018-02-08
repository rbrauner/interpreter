#pragma once

#include <memory>
#include <string>

namespace interpreter {
namespace utilities {
namespace number {

class Number {
public:
  virtual ~Number() = 0;
  virtual std::string getValue() = 0;
  virtual void setValue(std::string) = 0;

  void setNumeralSystem(std::shared_ptr<Number> numeralSystem);
};

} // namespace number
} // namespace utilities
} // namespace interpreter
