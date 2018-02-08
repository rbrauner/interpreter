#pragma once

#include <memory>
#include <string>

namespace interpreter {
namespace utilities {
namespace number {

class Number {
public:
  Number(std::shared_ptr<Number> value);
  virtual ~Number() = 0;
  virtual std::string getValue() = 0;
  virtual void setValue(std::string value) = 0;

  virtual void setNumeralSystem(std::shared_ptr<Number> numeralSystem) final;
  virtual void
  setNumeralSystemAndValue(std::shared_ptr<Number> numeralSystem) final;
};

} // namespace number
} // namespace utilities
} // namespace interpreter
