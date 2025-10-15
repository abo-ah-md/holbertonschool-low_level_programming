# Bit Manipulation

This directory contains solutions for bit manipulation tasks from the Holberton School Low-Level Programming curriculum.

---

## Resources

Read or watch:

- Google
- Youtube

---

## Learning Objectives

By the end of this project, you should be able to explain (without the help of Google):

- How to look for the right source of information without too much help
- How to manipulate bits and use bitwise operators

---

## Requirements

- **Allowed editors**: `vi`, `vim`, `emacs`
- **OS**: Ubuntu 20.04 LTS
- **Compiler**: gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files must end with a new line
- A `README.md` file at the root of the folder is mandatory
- Your code should use the Betty style (`betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- The only allowed C standard library functions are: `malloc`, `free`, and `exit`
- No printf, puts, calloc, realloc, etc.
- You may use `_putchar`
- You don’t have to push `_putchar.c` (it will not be taken into account)
- Example `main.c` files are provided for testing but do not need to be pushed
- The prototypes of all your functions and `_putchar` must be included in `main.h`
- Ensure all your header files are include-guarded

---

## Tasks

### 0. 0
**File:** `0-binary_to_uint.c`

- Write a function that converts a binary number to an unsigned int.
- **Prototype:** `unsigned int binary_to_uint(const char *b);`
- Returns the converted number, or 0 if there are invalid characters or if `b` is NULL.

### 1. 1
**File:** `1-print_binary.c`

- Write a function that prints the binary representation of a number.
- **Prototype:** `void print_binary(unsigned long int n);`
- Do not use arrays, malloc, %, or /.

### 2. 10
**File:** `2-get_bit.c`

- Write a function that returns the value of a bit at a given index.
- **Prototype:** `int get_bit(unsigned long int n, unsigned int index);`
- Returns value at index or -1 on error.

### 3. 11
**File:** `3-set_bit.c`

- Write a function that sets the value of a bit to 1 at a given index.
- **Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`
- Returns 1 if successful, -1 on error.

### 4. 100
**File:** `4-clear_bit.c`

- Write a function that sets the value of a bit to 0 at a given index.
- **Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`
- Returns 1 if successful, -1 on error.

### 5. 101
**File:** `5-flip_bits.c`

- Write a function that returns the number of bits you would need to flip to get from one number to another.
- **Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- Do not use the % or / operators

---

## Structure

- `0-binary_to_uint.c`
- `1-print_binary.c`
- `2-get_bit.c`
- `3-set_bit.c`
- `4-clear_bit.c`
- `5-flip_bits.c`
- `main.h` (all function prototypes, include guards)
- `main.c` (example/test files, not for submission)
- `README.md`

---

**Note**: Always ensure your coding style follows Betty and your headers have include guards. The `main.c` files are for your local testing only.

