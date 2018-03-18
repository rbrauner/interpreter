#pragma once

#include <exception>

namespace brainfuck {
namespace memory {
namespace address {
namespace exception {

class MinEqualToMax : std::exception {};
class MinGreaterThanMax : std::exception {};
class OutOfRange : std::exception {};

} // namespace exception
} // namespace address
} // namespace memory
} // namespace brainfuck
