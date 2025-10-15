# more_malloc_free

This directory contains C functions that demonstrate **automatic and dynamic memory allocation** using `malloc` and `free`. The project covers usage of **exit**, `malloc`, array allocation, zero-initialization, and dynamic reallocation, aligning with Holberton School’s low-level programming concepts.

---

## Concepts Covered

- [Automatic and dynamic allocation, malloc and free](https://intranet.hbtn.io/concepts/891)
- [Do I cast the result of malloc?](https://intranet.hbtn.io/rltoken/swgMTgEyN6pvECMVyEakrA)
- Usage of `exit(3)`, `malloc`
- Implementation of memory allocation functions (`calloc`, `realloc`)—*custom implementations only*
- No use of global variables
- All code styled according to [Betty style guide](https://github.com/hs-hq/Betty/blob/master/betty-style.pl)

---

## Learning Objectives

By completing this project, you should be able to **explain and demonstrate**:
- How to use the `exit` function in C
- How to allocate and manage memory using `malloc`
- What `calloc` and `realloc` are, and how to implement their behavior
- How to zero-initialize an array with dynamically allocated memory
- How to create and manage integer arrays dynamically

---

## Compilation

All files compile on Ubuntu 20.04 LTS with:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main.c> <task_file.c> -o <output>
```

---

## File List

- `0-malloc_checked.c` : Allocates memory, exits with status 98 if allocation fails.
- `1-string_nconcat.c` : Concatenates two strings (with limited copy from the second).
- `2-calloc.c` : Allocates an array with zero-initialization (custom implementation).
- `3-array_range.c` : Creates an integer array from `min` to `max` (inclusive).
- `main.h` : Header containing all prototype declarations.

---

## Task Summaries

### 0. malloc_checked

Allocates memory, exits on failure.

```
void *malloc_checked(unsigned int b);

```
- Returns pointer to memory, exits with status 98 if `malloc` fails.

---

### 1. string_nconcat

Concatenates two strings, copying at most `n` bytes from the second.

```
char *string_nconcat(char *s1, char *s2, unsigned int n);
```
- Treats `NULL` strings as empty.
- Properly null-terminates the result.
- Returns `NULL` if allocation fails.

---

### 2. _calloc

Custom zero-initialized array allocation.
```
int *array_range(int min, int max);
```

- Returns pointer to a newly allocated array.
- Returns `NULL` if allocation fails or `min > max`.
- Array elements are ordered from `min` to `max` (inclusive).

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- No more than 5 functions per file
- Only allowed C standard library functions: `malloc`, `free`, `exit`
- All files end with a new line
- All prototypes and `_putchar` must be in `main.h`
- No global variables

---

## Style Guide

All code must follow the **Betty style**:

- Check with [`betty-style.pl`](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- Consistent indentation and documentation

---

## Usage (Example)

Example compilation and usage of `malloc_checked`:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-malloc_checked.c -o a
./a
```

Similar compilation commands work for other files.

---

## Author

Abdullah Alshebel  
GitHub: [abo-ah-md](https://github.com/abo-ah-md)

---

## License

This project is part of the Holberton School curriculum.
