#pragma once

#include <string>

namespace utility {
namespace number {

class Number {
public:
  virtual ~Number() = 0;
  virtual std::string getValue() = 0;
  virtual void setValue(std::string value) = 0;
};

} // namespace number
} // namespace utility
