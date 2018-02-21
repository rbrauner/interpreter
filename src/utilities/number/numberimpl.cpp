#include "numberimpl.h"

#include "utilities/number/numberexceptions.h"
#include <algorithm>

using std::string;
using std::transform;
using utilities::charset::CharSet;
using utilities::number::NumberImpl;

NumberImpl::NumberImpl(CharSet charSet) : m_charSet{charSet} {}

NumberImpl::~NumberImpl() {}

string NumberImpl::getValue() { return m_value; }

void NumberImpl::setValue(string value) {
  // to lower case
  transform(value.begin(), value.end(), value.begin(), ::tolower);

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
