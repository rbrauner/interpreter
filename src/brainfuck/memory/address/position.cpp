#include "position.h"

using alias::Binary;
using alias::Decimal;
using alias::Hexadecimal;
using brainfuck::memory::address::Position;
using std::make_shared;
using std::string;

Position::Position(Binary position)
    : m_position{make_shared<Binary>(position)} {}

Position::Position(Decimal position)
    : m_position{make_shared<Decimal>(position)} {}

Position::Position(Hexadecimal position)
    : m_position{make_shared<Hexadecimal>(position)} {}

Decimal Position::toDec() const {
  string value = m_position->getValue();
  Decimal dec{value};
  return dec;
}

Hexadecimal Position::toHex() const {
  string value = m_position->getValue();
  Hexadecimal hex{value};
  return hex;
}

bool Position::operator==(const Position &position) const {
  return (this->m_position == position.m_position) ? true : false;
}
