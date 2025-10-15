# C - Variadic Functions

## Description

This project explores **variadic functions** in C, focusing on how to handle a variable number of arguments using macros from `stdarg.h`. Tasks include implementing functions for summing integers, printing numbers/strings, and creating a flexible all-types print function. An advanced task involves writing a minimal x86-64 assembly program to print "Hello, World".

## Resources

_Read or watch:_
- [stdarg.h documentation](https://intranet.hbtn.io/rltoken/gyP9q81fzXR7FIeHScaKyw)
- [Variadic Functions](https://intranet.hbtn.io/rltoken/ploSYGvJmS6umd87DoWk8w)
- [Const Keyword](https://intranet.hbtn.io/rltoken/8IGI7fBTuIOm1T-2BAUDIg)

_Man or help:_
- `man stdarg`

## Learning Objectives

By completing this project, you should be able to explain:
- What variadic functions are.
- How to use `va_start`, `va_arg`, and `va_end` macros.
- Why and how to use the `const` type qualifier.

## Requirements

- **Editors:** vi, vim, emacs
- **Compilation:** Ubuntu 20.04 LTS + gcc (`-Wall -Werror -Wextra -pedantic -std=gnu89`)
- All files must end with a new line.
- Code style checked by [Betty](https://github.com/hs-hq/Betty).
- No global variables.
- Max 5 functions per file.
- Allowed C library functions: `malloc`, `free`, `exit`
- Disallowed functions: `printf`, `puts`, `calloc`, `realloc`, etc. (unless stated)
- Allowed macros: `va_start`, `va_arg`, `va_end`
- Allowed: [`_putchar`](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- Do not push `_putchar.c`
- All function prototypes in `variadic_functions.h` (with include guard)

## Directory Structure

- `0-sum_them_all.c`: Returns sum of all parameters (int).
- `1-print_numbers.c`: Prints numbers, separated by a string (uses `printf`).
- `2-print_strings.c`: Prints strings, separated by a string. If string is NULL, prints `(nil)`.
- `3-print_all.c`: Prints anything. Accepts format string (`c` for char, `i` for int, `f` for float, `s` for string).
- `100-hello_world.asm`: Assembly code that prints "Hello, World" using system call.
- `variadic_functions.h`: Function prototypes and include guards.
- `README.md`: This file.

## Usage

Sample usage for each function (see corresponding `main.c` in each task):

//Task 0
```
int sum = sum_them_all(2, 98, 1024); // returns 1122
```
// Task 1
```
print_numbers(", ", 4, 0, 98, -1024, 402); // Output: 0, 98, -1024, 402
```
// Task 2
```
print_strings(", ", 2, "Jay", "Django"); // Output: Jay, Django
```
// Task 3
```
print_all("ceis", 'B', 3, "stSchool"); // Output: B, 3, stSchool
```

// Task 4 (assembly)
Compile:
```
nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello
./hello # Output: Hello, World
```

## Advanced Task

For the advanced assembly task, only direct system calls are allowed to print to stdout. See the provided `100-hello_world.asm`.

## License

This project is part of the Holberton School curriculum.

---
