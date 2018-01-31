#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "instructions.h"
#include <memory>

namespace interpreter {
namespace interpreter {
    class Interpreter {
    public:
        virtual void add_instructions_set(std::shared_ptr<Instructions_set> instructions_set) = 0;
        virtual void interpret(int how_many) = 0;
        virtual void interpret(std::shared_ptr<Instructions_set> instructions_set) = 0;
    };
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_H
