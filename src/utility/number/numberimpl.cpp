#include "numberimpl.h"

#include "utility/number/numberexceptions.h"
#include <algorithm>

using std::reference_wrapper;
using std::string;
using std::transform;
using utility::charset::CharSet;
using utility::number::NumberImpl;
using utility::number::exception::NumberIsNotCorrect;

NumberImpl::NumberImpl(CharSet charSet) : m_charSet{charSet} {}

NumberImpl::~NumberImpl() {}

string NumberImpl::getValue() { return m_value; }

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

void NumberImpl::transformToLowerCase(reference_wrapper<string> value) {
  transform(value.get().begin(), value.get().end(), value.get().begin(),
            ::tolower);
}

void NumberImpl::removeUselessCharactersAtBegining(
    reference_wrapper<string> value) {
  size_t i = 0;
  for (auto x : value.get()) {
    if (m_charSet.checkIfExistsInCharSet(x) && x != '0') {
      break;
    }
    i++;
  }

  value.get() = value.get().substr(i);
}

void NumberImpl::checkIfNumberIsCorrect(reference_wrapper<const string> value) {
  for (auto x : value.get()) {
    if (!m_charSet.checkIfExistsInCharSet(x)) {
      throw NumberIsNotCorrect{};
    }
  }
}

void NumberImpl::setMemberValueUsing(reference_wrapper<const string> value) {
  m_value = value.get();
}
