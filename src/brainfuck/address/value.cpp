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
  return alias::Decimal{m_value->getValue()};
}

alias::Hexadecimal Value::toHex() const {
  return alias::Hexadecimal{m_value->getValue()};
}
