#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "buffer.h"

namespace interpreter {
namespace instructions {
    template <typename T>
    class Instructions_set {
    public:
        virtual void add_instruction(T instruction) = 0;
        virtual void remove_instruction(int number) = 0;
        virtual void replace(int from, int to, Instructions_set_pointer Instructions_set, T blank) = 0;
        virtual void swap(int first, int second) = 0;
        virtual int size() = 0;
        virtual Instructions_set<T> get_instructions_set(int from, int to) = 0;

    private:
        using Instructions_set_pointer = std::shared_ptr<Instructions_set<T>>;
    };

    class Instruction {
    public:
        virtual void exectute() = 0;
    };

    template <typename T>
    class Instructions_buffer : public buffer::FIFO_buffer<T> {
    };
} // namespace instruction
} // namespace interpreter

#endif // INSTRUCTION_H
