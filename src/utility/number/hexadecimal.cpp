#include "hexadecimal.h"

using std::string;
using utility::charset::CharSet;
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

std::string Hexadecimal::getValue() const { return NumberImpl::getValue(); }

void Hexadecimal::setValue(std::string value) { NumberImpl::setValue(value); }
