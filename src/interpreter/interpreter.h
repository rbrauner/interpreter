#ifndef INTERPRETER_H
#define INTERPRETER_H

namespace interpreter {
namespace interpreter {
    template <typename T>
    class Interpreter {
    public:
        virtual void add_instructions(T instructions) = 0;
        virtual void interpret(int how_many) = 0;
        virtual void interpret(T instructions) = 0;
    };
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_H
