#include "numberimpl.h"

#include "utility/number/exceptions.h"
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

void NumberImpl::transformToLowerCase(alias::StringReference value) {
  transform(value.begin(), value.end(), value.begin(), ::tolower);
}

void NumberImpl::removeUselessCharactersAtBegining(
    alias::StringReference value) {
  bool minus = checkIfNumberIsNegative(value);

  size_t i = calculateHowManyCharactersRemove(value);

  setValueCorrectPartAndAddMinusIfNumberIsNegative(value, i, minus);
}

bool NumberImpl::checkIfNumberIsNegative(alias::ConstStringReference value) {
  if (value.size() > 0) {
    if (value.at(0) == '-')
      return true;
  }

  return false;
}

size_t NumberImpl::calculateHowManyCharactersRemove(
    alias::ConstStringReference value) {
  size_t i = 0;
  for (auto x : value) {
    if (m_charSet.checkIfExistsInCharSet(x) && x != '0') {
      break;
    }
    i++;
  }

  return i;
}

void NumberImpl::setValueCorrectPartAndAddMinusIfNumberIsNegative(
    alias::StringReference value, size_t position, bool isNegative) {
  if (isNegative) {
    value = '-' + value.substr(position);
  } else {
    value = value.substr(position);
  }
}

void NumberImpl::checkIfNumberIsCorrect(string value) {
  makeNegativeNumberPositive(value);

  for (auto x : value) {
    if (!m_charSet.checkIfExistsInCharSet(x)) {
      throw NumberIsNotCorrect{};
    }
  }
}

void NumberImpl::makeNegativeNumberPositive(alias::StringReference value) {
  if (value.size() > 0) {
    if (value.at(0) == '-') {
      value = value.substr(1);
    }
  }
}

void NumberImpl::setMemberValueUsing(alias::ConstStringReference value) {
  m_value = value;
}
