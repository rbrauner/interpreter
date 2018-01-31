#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "buffer.h"

namespace interpreter {
namespace instructions {
    class Instruction {
    public:
        virtual void exectute() = 0;
    };

    template <typename T>
    class Pre_formatted_instructions_buffer : public buffer::FIFO_buffer<T> {
    };

    template <typename T>
    class Instructions_buffer : public buffer::FIFO_buffer<T> {
    };
} // namespace instruction
} // namespace interpreter

#endif // INSTRUCTION_H
