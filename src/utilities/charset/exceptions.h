#pragma once

#include <exception>

namespace utilities {
namespace charset {
namespace exception {

class IsCorrect : std::exception {};
class IsNotCorrect : std::exception {};

} // namespace exception
} // namespace charset
} // namespace utilities
