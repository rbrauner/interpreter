#include "position.h"

using brainfuck::memory::address::Position;
using std::make_shared;

Position::Position(alias::Binary position)
    : m_position{make_shared<alias::Binary>(position)} {}

Position::Position(alias::Decimal position)
    : m_position{make_shared<alias::Decimal>(position)} {}

Position::Position(alias::Hexadecimal position)
    : m_position{make_shared<alias::Hexadecimal>(position)} {}

alias::Decimal Position::toDec() const {
  std::string value = m_position->getValue();
  alias::Decimal dec{value};
  return dec;
}

alias::Hexadecimal Position::toHex() const {
  std::string value = m_position->getValue();
  alias::Hexadecimal hex{value};
  return hex;
}

bool Position::operator==(const Position &p) const {
  return (m_position == p.m_position) ? true : false;
}