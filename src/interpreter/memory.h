#ifndef INTERPRETER_MEMORY_H
#define INTERPRETER_MEMORY_H

#include "interpreter/address.h"

namespace interpreter {
namespace interpreter {
    namespace memory {
        class Memory {
        public:
            virtual void clear() = 0;
        };

        class Memory_pointer {
        public:
            virtual address::Value* get_value() = 0;
            virtual address::Position* get_position() = 0;
        };
    } // namespace memory
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_MEMORY_H
