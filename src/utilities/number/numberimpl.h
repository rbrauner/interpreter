#pragma once

#include "utilities/charset/charset.h"
#include "utilities/number/number.h"
#include <string>

namespace utilities {
namespace number {

class NumberImpl : public Number {
public:
  NumberImpl(utilities::charset::CharSet charSet);
  ~NumberImpl() override = 0;

  std::string getValue() override = 0;
  void setValue(std::string value) override = 0;

protected:
  utilities::charset::CharSet m_charSet;
  std::string m_value;
};

} // namespace number
} // namespace utilities
