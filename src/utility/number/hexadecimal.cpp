#include "hexadecimal.h"

using std::string;
using utility::charset::CharSet;
using utility::number::Hexadecimal;

Hexadecimal::Hexadecimal(std::string value)
    : NumberImpl::NumberImpl{CharSet{"0123456789abcdef"}} {
  setValue(value);
}

std::string Hexadecimal::getValue() { return NumberImpl::getValue(); }

void Hexadecimal::setValue(std::string value) { NumberImpl::setValue(value); }
