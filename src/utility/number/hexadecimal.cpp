#include "hexadecimal.h"
#include "binary.h"
#include "decimal.h"
#include <sstream>

using std::hex;
using std::string;
using std::stringstream;
using utility::charset::CharSet;
using utility::number::Binary;
using utility::number::Decimal;
using utility::number::Hexadecimal;

Hexadecimal::Hexadecimal(std::string value)
    : NumberImpl::NumberImpl{CharSet{"0123456789abcdef"}} {
  setValue(value);
}

bool Hexadecimal::operator==(const Hexadecimal &hexadecimal) const {
  auto first =
      stoi(hexadecimalToDecimal(Hexadecimal{this->getValue()}).getValue());
  auto second = stoi(
      hexadecimalToDecimal(Hexadecimal{hexadecimal.getValue()}).getValue());

  if (first == second)
    return true;
  else
    return false;
}

bool Hexadecimal::operator<(const Hexadecimal &hexadecimal) const {
  auto first =
      stoi(hexadecimalToDecimal(Hexadecimal{this->getValue()}).getValue());
  auto second = stoi(
      hexadecimalToDecimal(Hexadecimal{hexadecimal.getValue()}).getValue());

  if (first < second)
    return true;
  else
    return false;
}

bool Hexadecimal::operator>(const Hexadecimal &hexadecimal) const {
  auto first =
      stoi(hexadecimalToDecimal(Hexadecimal{this->getValue()}).getValue());
  auto second = stoi(
      hexadecimalToDecimal(Hexadecimal{hexadecimal.getValue()}).getValue());

  if (first > second)
    return true;
  else
    return false;
}

string Hexadecimal::getValue() const { return NumberImpl::getValue(); }

void Hexadecimal::setValue(string value) { NumberImpl::setValue(value); }

Binary utility::number::hexadecimalToBinary(const Hexadecimal &hexadecimal) {
  Decimal decimal = hexadecimalToDecimal(hexadecimal);
  Binary binary = decimalToBinary(decimal);
  return binary;
}

Decimal utility::number::hexadecimalToDecimal(const Hexadecimal &hexadecimal) {
  int64_t decimalNumber;
  stringstream ss;

  ss << hexadecimal.getValue();
  ss >> hex >> decimalNumber;

  return Decimal{decimalNumber};
}
