
# malloc_free

Project directory for dynamic memory allocation exercises in C for Holberton School.

---

## Description

This module covers the use of `malloc` and `free` for dynamic memory allocation in C.  
The exercises deepen your understanding of heap management, dynamic string and array handling, and memory safety.

---

## Resources

- 0x0a - malloc & free - quick overview.pdf
- Dynamic memory allocation in C - malloc calloc realloc free (up to 6:50)

**Reference:**  
- man malloc  
- man free

---

## Learning Objectives

- Difference between automatic and dynamic allocation
- Usage of `malloc` and `free`
- Why and when to use `malloc`
- Using `valgrind` to check for memory leaks

---

## Requirements

- Allowed editors: vi, vim, emacs
- All files compiled on **Ubuntu 20.04 LTS** using gcc:
-Wall -Werror -Wextra -pedantic -std=gnu89

text
- Must end each file with a new line
- Style checked with Betty (betty-style.pl and betty-doc.pl)
- No global variables, max 5 functions per file
- Only allowed C standard library functions: malloc, free
- No printf, puts, calloc, realloc, etc.
- Allowed to use _putchar (do not submit _putchar.c)
- All prototypes must be in `main.h`

---

## Tasks

### 0. Float like a butterfly, sting like a bee

Write a function that creates an array of chars, initialized with a specific char.

**Prototype:**
char *create_array(unsigned int size, char c);

text
- Returns NULL if size = 0 or on failure

---

### 1. The woman who has no imagination has no wings

Write a function that returns a newly allocated copy of a string.

**Prototype:**
char *_strdup(char *str);

text
- Returns NULL if str = NULL or on failure

---

### 2. He who is not courageous enough to take risks will accomplish nothing in life

Write a function that concatenates two strings, allocating new memory.

**Prototype:**
char *str_concat(char *s1, char *s2);

text
- Treat NULL as empty string
- Returns NULL on failure

---

### 3. If you even dream of beating me you'd better wake up and apologize

Write a function that returns a pointer to a 2D grid initialized to 0.

**Prototype:**
int **alloc_grid(int width, int height);

text
- Returns NULL if width/height <= 0 or on failure

---

### 4. It's not bragging if you can back it up

Write a function to free a 2D grid previously allocated.

**Prototype:**
void free_grid(int **grid, int height);

text

---

### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe

Write a function that concatenates all program arguments with newline separators.

**Prototype:**
char *argstostr(int ac, char **av);

text
- Returns NULL if ac == 0 or av == NULL, or on failure

---

### 6. I will show you how great I am

Write a function that splits a string into words.

**Prototype:**
char **strtow(char *str);

text
- Each array element contains a word, last element is NULL
- Returns NULL on failure or for empty string

---
