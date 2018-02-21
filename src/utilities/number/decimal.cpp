#include "decimal.h"

using std::string;
using std::to_string;
using utilities::charset::CharSet;
using utilities::number::Decimal;

Decimal::Decimal(string value) : NumberImpl::NumberImpl{CharSet{"0123456789"}} {
  setValue(value);
}

Decimal::Decimal(size_t value) : NumberImpl::NumberImpl{CharSet{"0123456789"}} {
  string svalue = to_string(value);
  setValue(svalue);
}

string Decimal::getValue() { return NumberImpl::getValue(); }

void Decimal::setValue(string value) { NumberImpl::setValue(value); }
