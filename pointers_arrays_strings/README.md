# 📌 Pointers, Arrays & Strings — C Projects

<img src ="https://img.icons8.com/?size=160&id=mfkStOwP4EC0&format=png" width="10%"><img src ="https://i.imgur.com/ylmkS2o.png" width="20%">

---

## 🧠 Overview

This project dives deep into the **low-level power of C**: manipulating memory directly through **pointers**, **arrays**, and **strings** — without relying on standard libraries.  
Mastering these concepts sharpens understanding of:

- Memory addressing 🔍  
- String and array traversal 🚀  
- ASCII and data transformation 💡  
- Manual memory operations like `strcpy`, `strcat`, `memcpy`, and more 🔧

---

## 🎯 Learning Objectives

- ✅ Explain what pointers are and how to use them
- ✅ Understand what arrays are and how to use them
- ✅ Differentiate between pointers and arrays
- ✅ Use and manipulate strings manually
- ✅ Understand memory layout and variable scope in C
- ✅ Recreate standard string functions (`strncpy`, `strncat`, `strcmp`, etc.)
- ✅ Manipulate strings with uppercase, capitalization, encoding, and reversing
- ✅ Use memory functions like `memcpy`, `_strchr`, `_strspn`, `_strpbrk`, `_strstr`
- ✅ Work with double pointers and matrix memory access
- ✅ Use GDB and tools to reverse-engineer passwords 🧠🔐

---

## 🧱 Repo Structure

```
holbertonschool-low_level_programming/
└── pointers_arrays_strings/
    ├── 0-reset_to_98.c
    ├── 1-swap.c
    ├── 2-strlen.c
    ├── 3-puts.c
    ├── 4-print_rev.c
    ├── 5-rev_string.c
    ├── 6-puts2.c
    ├── 7-puts_half.c
    ├── 8-print_array.c
    ├── 9-strcpy.c
    ├── 100-atoi.c
    ├── 101-keygen.c
    ├── 0-strcat.c
    ├── 1-strncat.c
    ├── 2-strncpy.c
    ├── 3-strcmp.c
    ├── 4-rev_array.c
    ├── 5-string_toupper.c
    ├── 6-cap_string.c
    ├── 7-leet.c
    ├── 100-rot13.c
    ├── 101-print_number.c
    ├── 1-memcpy.c
    ├── 2-strchr.c
    ├── 3-strspn.c
    ├── 4-strpbrk.c
    ├── 5-strstr.c
    ├── 7-print_chessboard.c
    ├── 8-print_diagsums.c
    ├── 100-set_string.c
    ├── 101-crackme_password
    ├── main.h
    └── _putchar.c
```

---

## 🧪 Compilation Example

To compile any task:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c task-file.c -o output
```

Example for Task 2:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
```

---

## 📚 Task Summary (Basics)

| #  | Task Title                                        | File                  |
|----|--------------------------------------------------|-----------------------|
| 0  | 98 Battery st.                                   | `0-reset_to_98.c`     |
| 1  | Don’t swap horses in crossing a stream           | `1-swap.c`            |
| 2  | This report defends itself by its length         | `2-strlen.c`          |
| 3  | I do not fear computers                          | `3-puts.c`            |
| 4  | I’ve not got a reverse gear                      | `4-print_rev.c`       |
| 5  | Reverse thinking                                 | `5-rev_string.c`      |
| 6  | Every other character                            | `6-puts2.c`           |
| 7  | Second half of string                            | `7-puts_half.c`       |
| 8  | Print `n` elements of an array                   | `8-print_array.c`     |
| 9  | Copy string to buffer                            | `9-strcpy.c`          |
| 10 | String to Integer conversion (`_atoi`)           | `100-atoi.c`          |
| 11 | 🔒 Crackme password generator                    | `101-keygen.c`        |

---

## 📚 Task Summary (Advanced String & Memory Ops)

| #  | Task Title                                        | File                  |
|----|--------------------------------------------------|-----------------------|
| 0  | Concatenate two strings                          | `0-strcat.c`          |
| 1  | Concatenate `n` bytes                            | `1-strncat.c`         |
| 2  | Copy string up to `n` bytes                      | `2-strncpy.c`         |
| 3  | Compare two strings                              | `3-strcmp.c`          |
| 4  | Reverse an integer array                         | `4-rev_array.c`       |
| 5  | Convert string to uppercase                      | `5-string_toupper.c`  |
| 6  | Capitalize all words                             | `6-cap_string.c`      |
| 7  | Encode to 1337 speak                             | `7-leet.c`            |
| 8  | Encode using ROT13                               | `100-rot13.c`         |
| 9  | Print an integer (no `printf`)                   | `101-print_number.c`  |

---

## 📚 Task Summary (Memory Functions)

| #  | Task Title                                        | File                  |
|----|--------------------------------------------------|-----------------------|
| 0  | Memory copy function (`_memcpy`)                 | `1-memcpy.c`          |
| 1  | Locate char in string (`_strchr`)                | `2-strchr.c`          |
| 2  | Prefix match length (`_strspn`)                  | `3-strspn.c`          |
| 3  | First match in string (`_strpbrk`)               | `4-strpbrk.c`         |
| 4  | Locate substring (`_strstr`)                     | `5-strstr.c`          |

---

## ♟️ Matrix & Pointer Tasks

| #  | Task Title                                        | File                  |
|----|--------------------------------------------------|-----------------------|
| 6  | Print a chessboard                               | `7-print_chessboard.c`|
| 7  | Sum of diagonals of square matrix                | `8-print_diagsums.c`  |
| 8  | Set a pointer to point to another pointer        | `100-set_string.c`    |
| 9  | Reverse-engineer `crackme2`                      | `101-crackme_password`|

---

## 🧠 Function Prototypes

```c
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int _putchar(char c);
```

---

## 💡 Tips & Reminders

- `char **s` = pointer to a pointer — super useful in dynamic string assignments
- Matrix access with pointer arithmetic (e.g., `int *a`) requires row-major calculations
- Tools like `objdump`, `gdb`, and `ltrace` are your best friends in binary password cracking 🔐

---

## 💾 GitHub Repository

**Repo:** [`holbertonschool-low_level_programming`](https://github.com/YourUsername/holbertonschool-low_level_programming)  
**Directory:** `pointers_arrays_strings`
