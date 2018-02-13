#include "charset.h"
#include <algorithm>

using std::begin;
using std::end;
using std::find;
using std::initializer_list;
using std::string;
using utilities::charset::CharSet;

CharSet::CharSet(initializer_list<char> charSet) : m_charSet{charSet} {}

CharSet::CharSet(string charSet) : m_charSet{charSet} {}

void CharSet::setCharSet(initializer_list<char> charSet) {
  m_charSet = charSet;
}

void CharSet::setCharSet(string charSet) { m_charSet = charSet; }

bool CharSet::checkIfExistsInCharSet(const char character) {
  if (find(m_charSet.begin(), m_charSet.end(), character) != m_charSet.end())
    return true;
  else
    return false;
}
