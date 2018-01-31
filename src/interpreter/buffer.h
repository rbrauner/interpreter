#ifndef BUFFER_H
#define BUFFER_H

#include <initializer_list>

namespace interpreter {
namespace buffer {
    template <typename T>
    class FIFO_buffer {
    public:
        virtual void push_back(T instruction);
        virtual void push_back(std::initializer_list<T> instructions);
        virtual std::initializer_list<T> pull_from_begin(int how_many);
    };
} // namespace buffer
} // namespace interpreter

#endif // BUFFER_H
