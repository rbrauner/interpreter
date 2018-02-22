#include "binary.h"

using std::string;
using utility::charset::CharSet;
using utility::number::Binary;

Binary::Binary(string value) : NumberImpl::NumberImpl{CharSet{"01"}} {
  setValue(value);
}

std::string Binary::getValue() { return NumberImpl::getValue(); }

void Binary::setValue(std::string value) { NumberImpl::setValue(value); }
