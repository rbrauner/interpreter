#pragma once

#include "utilities/charset/charset.h"
#include "utilities/number/number.h"
#include <string>

namespace utilities {
namespace number {

class NumberImpl : public Number {
public:
  ~NumberImpl() override = 0;
  std::string getValue() override = 0;
  void setValue(std::string value) override = 0;

private:
  std::string m_value;
  utilities::charset::CharSet m_charSet;
};

} // namespace number
} // namespace utilities
