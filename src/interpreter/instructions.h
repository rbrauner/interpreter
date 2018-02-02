#ifndef INTERPRETER_INSTRUCTIONS_H
#define INTERPRETER_INSTRUCTIONS_H

#include "interpreter/buffer.h"
#include <memory>

namespace interpreter {
namespace interpreter {
    namespace instructions {
        class Instruction {
        public:
            virtual ~Instruction() = 0;
            virtual void exectute() = 0;
        };

        template <typename T>
        class Instructions_set {
            using Instruction_pointer = std::shared_ptr<Instruction>;
            using Instructions_set_pointer = std::shared_ptr<Instructions_set<T>>;

        public:
            virtual ~Instructions_set() = 0;
            virtual void add_instruction(T instruction) = 0;
            virtual void remove_instruction(int number) = 0;
            virtual void replace(int from, int to, Instructions_set_pointer Instructions_set, T blank) = 0;
            virtual void swap(int first, int second) = 0;
            virtual int size() = 0;
            virtual Instruction_pointer get_instruction(int number) = 0;
            virtual Instructions_set_pointer get_instructions_set(int from, int to) = 0;
        };

        template <typename T>
        class Instructions_buffer : public buffer::FIFO_buffer<T> {
        };
    } // namespace instruction
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_INSTRUCTIONS_H
