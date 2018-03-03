#include "decimal.h"

using std::string;
using std::to_string;
using utility::charset::CharSet;
using utility::number::Decimal;

Decimal::Decimal(string value) : NumberImpl::NumberImpl{CharSet{"0123456789"}} {
  setValue(value);
}

Decimal::Decimal(size_t value) : NumberImpl::NumberImpl{CharSet{"0123456789"}} {
  string svalue = to_string(value);
  setValue(svalue);
}

bool Decimal::operator==(const Decimal &d) const {
  if (d.getValue() == this->getValue())
    return true;
  else
    return false;
}

string Decimal::getValue() const { return NumberImpl::getValue(); }

void Decimal::setValue(string value) { NumberImpl::setValue(value); }
