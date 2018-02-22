#pragma once

#include <exception>

namespace utility {
namespace charset {
namespace exception {

class IsCorrect : std::exception {};
class IsNotCorrect : std::exception {};

} // namespace exception
} // namespace charset
} // namespace utility
