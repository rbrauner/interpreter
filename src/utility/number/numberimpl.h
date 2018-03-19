#pragma once

#include "alias/common.h"
#include "number.h"
#include "utility/charset/charset.h"

namespace utility {
namespace number {

class NumberImpl : public Number {
public:
  explicit NumberImpl(charset::CharSet charSet);
  ~NumberImpl() override = 0;

  std::string getValue() const override = 0;
  void setValue(std::string value) override = 0;

protected:
  charset::CharSet m_charSet;
  std::string m_value;

  // helpful methods
  void transformToLowerCase(alias::StringReference value);
  void removeUselessCharactersAtBegining(alias::StringReference value);
  bool checkIfNumberIsNegative(alias::ConstStringReference value);
  size_t calculateHowManyCharactersRemove(alias::ConstStringReference value);
  void setValueCorrectPartAndAddMinusIfNumberIsNegative(
      alias::StringReference value, size_t position, bool isNegative);
  void checkIfNumberIsCorrect(std::string value);
  void makeNegativeNumberPositive(alias::StringReference value);
  void setMemberValueUsing(alias::ConstStringReference value);
};

} // namespace number
} // namespace utility
