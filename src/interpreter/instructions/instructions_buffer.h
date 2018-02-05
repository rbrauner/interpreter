#pragma once

#include "interpreter/buffer/buffer.h"

namespace interpreter {
namespace interpreter {
namespace instructions {

template<typename T> class Instructions_buffer : public buffer::FIFO_buffer<T> {};

}
}
}
