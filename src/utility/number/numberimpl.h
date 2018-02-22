#pragma once

#include "utility/charset/charset.h"
#include "utility/number/number.h"
#include <functional>
#include <string>

namespace utility {
namespace number {

class NumberImpl : public Number {
public:
  NumberImpl(utility::charset::CharSet charSet);
  ~NumberImpl() override = 0;

  std::string getValue() override = 0;
  void setValue(std::string value) override = 0;

protected:
  utility::charset::CharSet m_charSet;
  std::string m_value;

  void transformToLowerCase(std::reference_wrapper<std::string> value);
  void
  removeUselessCharactersAtBegining(std::reference_wrapper<std::string> value);
  void checkIfNumberIsCorrect(std::reference_wrapper<const std::string> value);
  void setMemberValueUsing(std::reference_wrapper<const std::string> value);
};

} // namespace number
} // namespace utility
