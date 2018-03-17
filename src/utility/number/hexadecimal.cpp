#include "hexadecimal.h"
#include "utility/number/binary.h"
#include "utility/number/decimal.h"
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

bool Hexadecimal::operator==(const Hexadecimal &h) const {
  if (h.getValue() == this->getValue())
    return true;
  else
    return false;
}

bool Hexadecimal::operator<(const utility::number::Hexadecimal &h) const {
  auto first = stoi(hexadecimalToDecimal(this->getValue()).getValue());
  auto second = stoi(hexadecimalToDecimal(h.getValue()).getValue());

  if (first < second)
    return true;
  else
    return false;
}

bool Hexadecimal::operator>(const utility::number::Hexadecimal &h) const {
  auto first = stoi(hexadecimalToDecimal(this->getValue()).getValue());
  auto second = stoi(hexadecimalToDecimal(h.getValue()).getValue());

  if (first > second)
    return true;
  else
    return false;
}

std::string Hexadecimal::getValue() const { return NumberImpl::getValue(); }

void Hexadecimal::setValue(std::string value) { NumberImpl::setValue(value); }

Binary utility::number::hexadecimalToBinary(const Hexadecimal &hexadecimal) {
  Decimal decimal = hexadecimalToDecimal(hexadecimal);
  Binary binary = decimalToBinary(decimal);
  return binary;
}

Decimal utility::number::hexadecimalToDecimal(const Hexadecimal &hexadecimal) {
  int64_t decimalNumber;
  std::stringstream ss;

  ss << hexadecimal.getValue();
  ss >> hex >> decimalNumber;

  return Decimal{decimalNumber};
}
