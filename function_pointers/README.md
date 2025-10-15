# Function Pointers Project

This directory contains C source files that demonstrate function pointers usage and related concepts.

## Content

- Printing names using function pointers.
- Executing functions on array elements via pointers.
- Searching in arrays with custom criteria.
- Calculator using function pointers for operations (`+`, `-`, `*`, `/`, `%`).
- Program to print its own main function's opcodes.

## Requirements

- **Editors allowed:** `vi`, `vim`, `emacs`
- **Compilation:** Ubuntu 20.04 LTS, `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **Coding style:** Betty
- **No global variables**
- **Standard library usage:** Only `malloc`, `free`, `exit`
- **Function limit:** 5 per file max
- **Header:** All function prototypes in `function_pointers.h` with include guards.

## Files

- `0-print_name.c` - Print a name using a given function pointer.
- `1-array_iterator.c` - Execute a function on each array element.
- `2-int_index.c` - Find the index of an integer based on a comparison function.
- `3-calc.h`, `3-op_functions.c`, `3-get_op_func.c`, `3-main.c` - Calculator logic and operations.
- `100-main_opcodes.c` - Print opcodes of its own main.
- `function_pointers.h` - Function prototypes and header.
- `README.md` - This file.

## How to Use

Clone the repository into your development environment, compile using the required flags, and follow the usage examples seen in each source file and the project instructions.

---

Don't screw this simple task.
