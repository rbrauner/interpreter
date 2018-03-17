#include "binary.h"
#include "decimal.h"
#include "hexadecimal.h"
#include <math.h>
#include <sstream>
#include <string>

using std::dec;
using std::hex;
using std::string;
using std::stringstream;
using std::to_string;
using utility::charset::CharSet;
using utility::number::Binary;
using utility::number::Decimal;
using utility::number::Hexadecimal;

Binary::Binary(string value) : NumberImpl::NumberImpl{CharSet{"01"}} {
  setValue(value);
}

bool Binary::operator==(const Binary &b) const {
  if (b.getValue() == this->getValue())
    return true;
  else
    return false;
}

std::string Binary::getValue() const { return NumberImpl::getValue(); }

void Binary::setValue(std::string value) { NumberImpl::setValue(value); }

Decimal utility::number::binaryToDecimal(const Binary &binary) {
  int64_t binNumber = stoi(binary.getValue());
  stringstream decimal;

  decimal << dec << binNumber;

  return decimal.str();
}

Hexadecimal utility::number::binaryToHexadecimal(const Binary &binary) {
  int64_t binNumber = stoi(binary.getValue());
  stringstream hexadecimal;

  hexadecimal << hex << binNumber;

  return hexadecimal.str();
}
