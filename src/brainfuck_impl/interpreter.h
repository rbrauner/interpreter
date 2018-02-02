#ifndef BRAINFUCK_INTERPRETER_H
#define BRAINFUCK_INTERPRETER_H

#include "interpreter/interpreter.h"
#include <string>

namespace interpreter {
namespace brainfuck {
    namespace interpreter {
        class Interpreter : public ::interpreter::interpreter::interpreter::Interpreter<std::string> {
            using Instructions_set_pointer = std::shared_ptr<::interpreter::interpreter::instructions::Instructions_set<std::string>>;

        public:
            ~Interpreter();
            void add_instructions_set(Instructions_set_pointer instructions_set);
            void interpret(int how_many);
            void interpret(Instructions_set_pointer instructions_set);
        };
    } // interpreter
} // brainfuck
} // interpreter

#endif // BRAINFUCK_INTERPRETER_H
