#pragma once

#include <initializer_list>
#include <string>

namespace utilities {
namespace charset {

class CharSet {
public:
  CharSet(std::initializer_list<char> charSet) {}
  CharSet(std::string charSet) {}

  void setCharSet(std::initializer_list<char> charSet) {}
  void setCharSet(std::string charSet) {}
  bool checkIfExistsInCharSet(char character) {}
};

} // namespace charset
} // namespace utilities
