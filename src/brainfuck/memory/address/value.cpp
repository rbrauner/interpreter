#include "value.h"
#include "exceptions.h"

using alias::Binary;
using alias::Decimal;
using alias::Hexadecimal;
using brainfuck::memory::address::Value;
using brainfuck::memory::address::exception::MinEqualToMax;
using brainfuck::memory::address::exception::MinGreaterThanMax;
using brainfuck::memory::address::exception::OutOfRange;
using std::make_shared;
using std::string;
using utility::number::binaryToDecimal;
using utility::number::binaryToHexadecimal;
using utility::number::decimalToBinary;
using utility::number::decimalToHexadecimal;
using utility::number::hexadecimalToBinary;
using utility::number::hexadecimalToDecimal;

Value::Value(Binary value, Binary min, Binary max)
    : m_value{make_shared<Binary>(value)}, type{"Binary"} {
  if (min == max)
    throw MinEqualToMax{};
  else if (min > max)
    throw MinGreaterThanMax{};
  else if (value < min || value > max)
    throw OutOfRange{};
}

Value::Value(Decimal value, Decimal min, Decimal max)
    : m_value{make_shared<Decimal>(value)}, type{"Decimal"} {
  if (min == max)
    throw MinEqualToMax{};
  else if (min > max)
    throw MinGreaterThanMax{};
  else if (value < min || value > max)
    throw OutOfRange{};
}

Value::Value(Hexadecimal value, Hexadecimal min, Hexadecimal max)
    : m_value{make_shared<Hexadecimal>(value)}, type{"Hexadecimal"} {
  if (min == max)
    throw MinEqualToMax{};
  else if (min > max)
    throw MinGreaterThanMax{};
  else if (value < min || value > max)
    throw OutOfRange{};
}

Binary Value::toBin() const {
  Binary bin{"0"};

  if (type.name == "Binary") {
    bin.setValue(m_value->getValue());
  } else if (type.name == "Decimal") {
    Binary binary{decimalToBinary(Decimal{m_value->getValue()})};
    bin.setValue(binary.getValue());
  } else if (type.name == "Hexadecimal") {
    Binary binary{hexadecimalToBinary(Hexadecimal{m_value->getValue()})};
    bin.setValue(binary.getValue());
  }

  return bin;
}

Decimal Value::toDec() const {
  Decimal dec{"0"};

  if (type.name == "Binary") {
    Decimal decimal{binaryToDecimal(Binary{m_value->getValue()})};
    dec.setValue(decimal.getValue());
  } else if (type.name == "Decimal") {
    dec.setValue(m_value->getValue());
  } else if (type.name == "Hexadecimal") {
    Decimal decimal{hexadecimalToDecimal(Hexadecimal{m_value->getValue()})};
    dec.setValue(decimal.getValue());
  }

  return dec;
}

Hexadecimal Value::toHex() const {
  Hexadecimal hex{"0"};

  if (type.name == "Binary") {
    Hexadecimal hexadecimal{binaryToHexadecimal(Binary{m_value->getValue()})};
    hex.setValue(hexadecimal.getValue());
  } else if (type.name == "Decimal") {
    Hexadecimal hexadecimal{decimalToHexadecimal(Decimal{m_value->getValue()})};
    hex.setValue(hexadecimal.getValue());
  } else if (type.name == "Hexadecimal") {
    hex.setValue(m_value->getValue());
  }

  return hex;
}

bool Value::operator==(const Value &value) const {
  return (this->m_value == value.m_value) ? true : false;
}
