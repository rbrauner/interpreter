#include "binary.h"
#include "decimal.h"
#include "hexadecimal.h"
#include <math.h>
#include <string>

using std::string;
using std::to_string;
using utility::charset::CharSet;
using utility::number::Binary;
using utility::number::Decimal;
using utility::number::Hexadecimal;

Binary::Binary(string value) : NumberImpl::NumberImpl{CharSet{"01"}} {
  setValue(value);
}

bool Binary::operator==(const Binary &binary) const {
  auto first = stoi(binaryToDecimal(Binary{this->getValue()}).getValue());
  auto second = stoi(binaryToDecimal(Binary{binary.getValue()}).getValue());

  if (first == second)
    return true;
  else
    return false;
}

bool Binary::operator<(const Binary &binary) const {
  auto first = stoi(binaryToDecimal(Binary{this->getValue()}).getValue());
  auto second = stoi(binaryToDecimal(Binary{binary.getValue()}).getValue());

  if (first < second)
    return true;
  else
    return false;
}

bool Binary::operator>(const Binary &binary) const {
  auto first = stoi(binaryToDecimal(Binary{this->getValue()}).getValue());
  auto second = stoi(binaryToDecimal(Binary{binary.getValue()}).getValue());

  if (first > second)
    return true;
  else
    return false;
}

string Binary::getValue() const { return NumberImpl::getValue(); }

void Binary::setValue(string value) { NumberImpl::setValue(value); }

Decimal utility::number::binaryToDecimal(const Binary &binary) {
  string decimal = "";
  int64_t binNumber = stoi(binary.getValue());
  int64_t decNumber = 0;
  int64_t remainder = 0;
  int64_t i = 0;

  while (binNumber != 0) {
    remainder = binNumber % 10;
    binNumber /= 10;
    decNumber += remainder * pow(2, i);
    i++;
  }

  decimal = to_string(decNumber);
  return Decimal{decimal};
}

Hexadecimal utility::number::binaryToHexadecimal(const Binary &binary) {
  Decimal decimal = binaryToDecimal(binary);
  Hexadecimal hexadecimal = decimalToHexadecimal(decimal);
  return Hexadecimal{hexadecimal.getValue()};
}
