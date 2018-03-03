#include "binary.h"

using std::string;
using utility::charset::CharSet;
using utility::number::Binary;

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
