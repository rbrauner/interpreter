#ifndef INTERPRETER_ADDRESS_H
#define INTERPRETER_ADDRESS_H

#include <string>

namespace interpreter {
namespace interpreter {
    namespace address {
        class Address {
        public:
        };

        class Position {
        public:
            virtual std::string to_dec() = 0;
            virtual std::string to_hex() = 0;
        };

        class Value {
        public:
            virtual std::string to_dec() = 0;
            virtual std::string to_hex() = 0;
        };
    } // namespace address
} // namespace interpreter
} // namespace interpreter

#endif // INTERPRETER_ADDRESS_H
