#pragma once

#include "utility/number/binary.h"
#include "utility/number/decimal.h"
#include "utility/number/hexadecimal.h"
#include <memory>

namespace alias {

using Binary = utility::number::Binary;
using Decimal = utility::number::Decimal;
using Hexadecimal = utility::number::Hexadecimal;
using NumberPointer = std::shared_ptr<utility::number::Number>;

} // namespace alias
