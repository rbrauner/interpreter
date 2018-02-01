#ifndef INTERPRETER_INTERPRETER_H
#define INTERPRETER_INTERPRETER_H

#include "interpreter/instructions.h"
#include <memory>

namespace interpreter {
namespace interpreter {
    namespace interpreter {
        template <typename T>
        class Interpreter {
        public:
            virtual void add_instructions_set(Instructions_set_pointer instructions_set) = 0;
            virtual void interpret(int how_many) = 0;
            virtual void interpret(Instructions_set_pointer instructions_set) = 0;

        private:
            using Instructions_set_pointer = std::shared_ptr<instructions::Instructions_set<T>>;
        };
    } // namespace interpreter
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_INTERPRETER_H
