#include "numberimpl.h"

#include "utilities/number/numberexceptions.h"

using std::string;
using utilities::charset::CharSet;
using utilities::number::NumberImpl;

NumberImpl::NumberImpl(CharSet charSet) : m_charSet{charSet} {}

string NumberImpl::getValue() { return m_value; }

void NumberImpl::setValue(string value) {
  // remove first, useless characters
  size_t i = 0;
  for (auto x : value) {
    if (m_charSet.checkIfExistsInCharSet(x) && x != '0') {
      break;
    }
    i++;
  }

  value = value.substr(i);

  // check if value is correct
  for (auto x : value) {
    if (!m_charSet.checkIfExistsInCharSet(x)) {
      throw exception::NumberIsNotCorrect{};
    }
  }

  // set value
  m_value = value;
}
