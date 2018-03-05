#include "value.h"

using brainfuck::address::Value;
using std::make_shared;

Value::Value(alias::Binary value)
    : m_value{make_shared<alias::Binary>(value)} {}

Value::Value(alias::Decimal value)
    : m_value{make_shared<alias::Decimal>(value)} {}

Value::Value(alias::Hexadecimal value)
    : m_value{make_shared<alias::Hexadecimal>(value)} {}

alias::Decimal Value::toDec() const {
  std::string value = m_value->getValue();
  alias::Decimal dec{value};
  return dec;
}

alias::Hexadecimal Value::toHex() const {
  std::string value = m_value->getValue();
  alias::Hexadecimal hex{value};
  return hex;
}

bool Value::operator==(const Value &v) const {
  return (m_value == v.m_value) ? true : false;
}
