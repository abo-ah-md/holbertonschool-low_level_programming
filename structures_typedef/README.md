# C - Structures, typedef

## Master Project
---

## Project Overview

This project focuses on learning how to use C structures and the `typedef` keyword. The tasks guide you through defining, initializing, printing, and freeing structures, as well as creating alias types to improve code maintainability.

---

## Learning Objectives

By the end of this project, you should be able to explain:
- **What are structures, when, why, and how to use them in C**
- **How to use typedef to simplify type definitions**

For more details, see the provided resources.

---

## Resources
- [0x0d. Structures.pdf](https://intranet.hbtn.io/rltoken/8TS6dWhiTS4-qstKmfl_Rw)
- [struct (C programming language)](https://intranet.hbtn.io/rltoken/VujS8Eo0cgoOhd1wpZCSwg)
- [Documentation: structures](https://intranet.hbtn.io/rltoken/d2uohXRWLbqykxIrbJawpg)
- [0x0d. Typedef and structures.pdf](https://intranet.hbtn.io/rltoken/haWQ15L2jOBBhM_AK97kww)
- [typedef](https://intranet.hbtn.io/rltoken/6TX-aFGQs5sAtdtyXBnjyQ)
- *Programming in C* by Stephen Kochan - Chapter 8, Working with Structures p163-189
- [The Lost Art of C Structure Packing (Advanced)](https://intranet.hbtn.io/rltoken/qxIHARCFIPU4IGX12WVa0g) *(Not mandatory)*

---

## Requirements

- **Allowed editors:** vi, vim, emacs
- Compile on **Ubuntu 20.04 LTS** with:  
  `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a new line.
- **README.md** file required at project root.
- Follow **Betty coding style** checks using `betty-style.pl` and `betty-doc.pl`.
- **No global variables.**
- No more than **5 functions per file.**
- Only allowed standard C library functions: `printf`, `malloc`, `free`, and `exit`.
- Your header files must be **include guarded**.
- **Test main.c files** are for local testing and should **not** be pushed.

---

## Directory Structure

- `dog.h` - Header file with struct and typedef definitions.
- `1-init_dog.c` - Function to initialize a `struct dog`.
- `2-print_dog.c` - Function to print a `struct dog`.
- `4-new_dog.c` - Function to create a new dog.
- `5-free_dog.c` - Function to free dogs.
- `main.c`, `main.h` - Support/testing files.

---

## Tasks Breakdown

### 0. Poppy
**Define:**  

```
struct dog {
char *name;
float age;
char *owner;
};
```
**Test:**  
Creates a `struct dog` variable and prints its fields.

### 1. Initialization
**Prototype:**  
`void init_dog(struct dog *d, char *name, float age, char *owner);`
**Test:**  
Initializes a `struct dog` variable fields using this function.

### 2. Print Struct
**Prototype:**  
`void print_dog(struct dog *d);`
- Print each field, prints `(nil)` if value is `NULL`.
- Prints nothing if `d` itself is `NULL`.

### 3. Type Alias
**`typedef struct dog dog_t;`**
- Use `dog_t` as an alias for `struct dog` throughout your code.

### 4. Create a Dog
**Prototype:**  
`dog_t *new_dog(char *name, float age, char *owner);`
- Allocates memory for new dog, stores copies of `name` and `owner`.
- Returns `NULL` on failure.

### 5. Free Dogs
**Prototype:**  
`void free_dog(dog_t *d);`
- Frees all memory allocated for a dog.

---

## Example Compilation

Compile with:

```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c 1-init_dog.c 2-print_dog.c 4-new_dog.c 5-free_dog.c -o dog_app
```


---

## Coding Style

- Follow **Betty** style guidelines.
- No global variables, functions per file limited to 5.
- Only allowed C stdlib functions.
- Always include guards in headers.

---

## License

This project is part of Holberton School curriculum for learning C programming basics, data structures, and type manipulation.
