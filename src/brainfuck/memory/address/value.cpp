#include "value.h"

using brainfuck::memory::address::Value;
using std::make_shared;
using std::string;
using utility::number::decimalToBinary;

Value::Value(alias::Binary value, alias::Binary min, alias::Binary max)
    : m_value{make_shared<alias::Binary>(value)} {}

Value::Value(alias::Decimal value, alias::Decimal min, alias::Decimal max)
    : m_value{make_shared<alias::Decimal>(value)} {}

Value::Value(alias::Hexadecimal value, alias::Hexadecimal min,
             alias::Hexadecimal max)
    : m_value{make_shared<alias::Hexadecimal>(value)} {}

alias::Binary Value::toBin() const {
  alias::Binary bin{"0"};
  string valueType = typeid(m_value->getValue()).name();
  valueType = valueType.substr(1);

  if (valueType == "Binary") {
    bin.setValue(m_value->getValue());
  } else if (valueType == "Decimal") {
    alias::Binary binary{utility::number::decimalToBinary(m_value->getValue())};
    bin.setValue(binary.getValue());
  } else if (valueType == "Hexadecimal") {
    alias::Binary binary{
        utility::number::hexadecimalToBinary(m_value->getValue())};
    bin.setValue(binary.getValue());
  }

  return bin;
}

alias::Decimal Value::toDec() const {
  alias::Decimal dec{"0"};
  string valueType = typeid(m_value->getValue()).name();
  valueType = valueType.substr(1);

  if (valueType == "Binary") {
    alias::Decimal decimal{
        utility::number::binaryToDecimal(m_value->getValue())};
    dec.setValue(decimal.getValue());
  } else if (valueType == "Decimal") {
    dec.setValue(m_value->getValue());
  } else if (valueType == "Hexadecimal") {
    alias::Decimal decimal{
        utility::number::hexadecimalToDecimal(m_value->getValue())};
    dec.setValue(decimal.getValue());
  }

  return dec;
}

alias::Hexadecimal Value::toHex() const {
  alias::Hexadecimal hex{"0"};
  string valueType = typeid(m_value->getValue()).name();
  valueType = valueType.substr(1);

  if (valueType == "Binary") {
    alias::Hexadecimal hexadecimal{
        utility::number::binaryToHexadecimal(m_value->getValue())};
    hex.setValue(hexadecimal.getValue());
  } else if (valueType == "Decimal") {
    alias::Hexadecimal hexadecimal{
        utility::number::decimalToHexadecimal(m_value->getValue())};
    hex.setValue(hexadecimal.getValue());
  } else if (valueType == "Hexadecimal") {
    hex.setValue(m_value->getValue());
  }

  return hex;
}

bool Value::operator==(const Value &v) const {
  return (m_value == v.m_value) ? true : false;
}
