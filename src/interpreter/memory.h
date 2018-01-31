#ifndef MEMORY_H
#define MEMORY_H

#include "address.h"

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

#endif // MEMORY_H
