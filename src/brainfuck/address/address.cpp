#include "address.h"

using brainfuck::address::Address;
using brainfuck::address::Position;
using brainfuck::address::Value;

Address::Address(Position position, Value value)
    : m_position{position}, m_value{value} {}

Position Address::getPosition() const { return m_position; }

Value Address::getValue() const { return m_value; }

void Address::setValue(Value value) { m_value = value; }

bool Address::operator==(const Address &a) const {
  bool position = (m_position == a.m_position) ? true : false;
  bool value = (m_value == a.m_value) ? true : false;
  return (position && value);
}
