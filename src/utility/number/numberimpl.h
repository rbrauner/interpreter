#pragma once

#include "utility/charset/charset.h"
#include "utility/number/number.h"
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
  using StringReference = std::string &;
  using ConstStringReference = const std::string &;

  void transformToLowerCase(StringReference value);
  void removeUselessCharactersAtBegining(StringReference value);
  bool checkIfNumberIsNegative(ConstStringReference value);
  size_t calculateHowManyCharactersRemove(ConstStringReference value);
  void setValueCorrectPartAndAddMinusIfNumberIsNegative(StringReference value,
                                                        size_t position,
                                                        bool isNegative);
  void checkIfNumberIsCorrect(std::string value);
  void makeNegativeNumberPositive(StringReference value);
  void setMemberValueUsing(ConstStringReference value);
};

} // namespace number
} // namespace utility
