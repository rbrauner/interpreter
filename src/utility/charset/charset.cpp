#include "charset.h"
#include "exceptions.h"
#include <algorithm>

using std::begin;
using std::end;
using std::find;
using std::initializer_list;
using std::string;
using utility::charset::CharSet;
using utility::charset::exception::IsCorrect;
using utility::charset::exception::IsNotCorrect;

CharSet::CharSet(initializer_list<char> charSet) : m_charSet{charSet} {}

CharSet::CharSet(string charSet) : m_charSet{charSet} {}

void CharSet::setCharSet(initializer_list<char> charSet) {
  m_charSet = charSet;
}

void CharSet::setCharSet(string charSet) { m_charSet = charSet; }

bool CharSet::checkIfExistsInCharSet(const char character) {
  auto pos = m_charSet.find(character);

  try {
    checkIfPositionIsCorrect(pos);
  } catch (IsCorrect) {
    return true;
  } catch (IsNotCorrect) {
    return false;
  }
}

void CharSet::checkIfPositionIsCorrect(size_t pos) {
  if (pos != string::npos)
    throw IsCorrect{};
  else
    throw IsNotCorrect{};
}
