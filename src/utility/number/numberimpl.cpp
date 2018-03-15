#include "numberimpl.h"

#include "utility/number/numberexceptions.h"
#include <algorithm>

using std::string;
using std::transform;
using utility::charset::CharSet;
using utility::number::NumberImpl;
using utility::number::exception::NumberIsNotCorrect;

NumberImpl::NumberImpl(CharSet charSet) : m_charSet{charSet} {}

NumberImpl::~NumberImpl() {}

string NumberImpl::getValue() const { return m_value; }

void NumberImpl::setValue(string value) {
  try {
    transformToLowerCase(value);
    removeUselessCharactersAtBegining(value);
    checkIfNumberIsCorrect(value);
    setMemberValueUsing(value);
  } catch (NumberIsNotCorrect) {
    throw;
  }
}

void NumberImpl::transformToLowerCase(StringReference value) {
  transform(value.begin(), value.end(), value.begin(), ::tolower);
}

void NumberImpl::removeUselessCharactersAtBegining(StringReference value) {
  size_t i = 0;
  for (auto x : value) {
    if (m_charSet.checkIfExistsInCharSet(x) && x != '0') {
      break;
    }
    i++;
  }

  value = value.substr(i);
}

void NumberImpl::checkIfNumberIsCorrect(ConstStringReference value) {
  for (auto x : value) {
    if (!m_charSet.checkIfExistsInCharSet(x)) {
      throw NumberIsNotCorrect{};
    }
  }
}

void NumberImpl::setMemberValueUsing(ConstStringReference value) {
  m_value = value;
}
