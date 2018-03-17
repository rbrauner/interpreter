#include "decimal.h"
#include "utility/number/binary.h"
#include "utility/number/hexadecimal.h"
#include <math.h>
#include <sstream>

using std::hex;
using std::string;
using std::stringstream;
using std::to_string;
using utility::charset::CharSet;
using utility::number::Binary;
using utility::number::Decimal;
using utility::number::Hexadecimal;

Decimal::Decimal(string value) : NumberImpl::NumberImpl{CharSet{"0123456789"}} {
  setValue(value);
}

Decimal::Decimal(int64_t value)
    : NumberImpl::NumberImpl{CharSet{"0123456789"}} {
  string svalue = to_string(value);
  setValue(svalue);
}

bool Decimal::operator==(const Decimal &d) const {
  if (d.getValue() == this->getValue())
    return true;
  else
    return false;
}

bool Decimal::operator<(const utility::number::Decimal &d) const {
  auto first = stoi(this->getValue());
  auto second = stoi(d.getValue());

  if (first < second)
    return true;
  else
    return false;
}

bool Decimal::operator>(const utility::number::Decimal &d) const {
  auto first = stoi(this->getValue());
  auto second = stoi(d.getValue());

  if (first > second)
    return true;
  else
    return false;
}

string Decimal::getValue() const { return NumberImpl::getValue(); }

void Decimal::setValue(string value) { NumberImpl::setValue(value); }

Binary utility::number::decimalToBinary(const Decimal &decimal) {
  string binary = "";
  int64_t decNumber = stoi(decimal.getValue());
  int64_t binNumber = 0;
  int64_t remainder = 0;
  int64_t i = 0;

  while (decNumber != 0) {
    remainder = decNumber % 2;
    decNumber /= 2;
    binNumber += remainder * pow(10, i);
    i++;
  }

  binary = to_string(binNumber);
  return Binary{binary};
}

Hexadecimal utility::number::decimalToHexadecimal(const Decimal &decimal) {
  stringstream hexadecimal;

  hexadecimal << hex << stoi(decimal.getValue());

  return Hexadecimal{hexadecimal.str()};
}
