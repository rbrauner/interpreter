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

  std::string getValue() const override = 0;
  void setValue(std::string value) override = 0;

protected:
  utility::charset::CharSet m_charSet;
  std::string m_value;

  // helpful methods
  using StringReference = std::reference_wrapper<std::string>;
  using ConstStringReference = std::reference_wrapper<const std::string>;

  void transformToLowerCase(StringReference value);
  void removeUselessCharactersAtBegining(StringReference value);
  void checkIfNumberIsCorrect(ConstStringReference value);
  void setMemberValueUsing(ConstStringReference value);
};

} // namespace number
} // namespace utility
