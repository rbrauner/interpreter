#ifndef INSTRUCTION_H
#define INSTRUCTION_H

namespace interpreter {
namespace instruction {
    class Instruction {
    public:
        virtual void exectute() = 0;
    };
} // namespace instruction
} // namespace interpreter

#endif // INSTRUCTION_H
