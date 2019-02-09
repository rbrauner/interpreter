# interpreter

Interpreter for programming languages such as Brainfuck, COW, Chef etc.

## Getting Started

### Prerequisites

- Google Test
- Pthread

### Installing

Create `gtest.pri` and `pthread.pri` files to link libraries.

For example `gtest.pri` could contain:

```
LIBS += -lgtest
LIBS += -lgtest_main
```

Build project using Qt Creator.

## Running the tests

Build project and run executable(temporary).

## Trello board

https://trello.com/b/YH86OmRq/interpreter

## Authors

* **Rafał Brauner** - *Initial work* - [rbrauner](https://github.com/rbrauner)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
