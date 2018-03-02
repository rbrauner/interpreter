#include "address.h"

using brainfuck::address::Address;
using brainfuck::address::Position;
using brainfuck::address::Value;

Address::Address(Position position, Value value)
    : m_position{position}, m_value{value} {}

interpreter::address::Position Address::getPosition() { return m_position; }

interpreter::address::Value Address::getValue() { return m_value; }

void Address::setValue(interpreter::address::Value value) { m_value = value; }
