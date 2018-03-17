#include "address.h"

using brainfuck::memory::address::Address;
using brainfuck::memory::address::Position;
using brainfuck::memory::address::Value;

Address::Address(Position position, Value value)
    : m_position{position}, m_value{value} {}

Position Address::getPosition() const { return m_position; }

Value Address::getValue() const { return m_value; }

void Address::setValue(Value value) { m_value = value; }

bool Address::operator==(const Address &address) const {
  bool position = (this->m_position == address.m_position) ? true : false;
  bool value = (this->m_value == address.m_value) ? true : false;
  return (position && value);
}
