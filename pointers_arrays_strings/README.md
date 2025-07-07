## 📌 Pointers, Arrays & Strings — C Projects
<img src ="https://img.icons8.com/?size=160&id=mfkStOwP4EC0&format=png" width="10%"><img src ="https://i.imgur.com/ylmkS2o.png" width="20%">

## 🧠 Overview

This project dives deep into the **low-level power of C**: manipulating memory directly through **pointers**, **arrays**, and **strings** — without relying on standard libraries.  
- Memory addressing 🔍  
- String and array traversal 🚀  
- ASCII and data transformation 💡  
- Manual memory operations like `strcpy`, `strcat`, and more 🔧
---

## 🎯 Learning Objectives

- ✅ Explaining what pointers are and how to use them
- ✅ Understanding what arrays are and how to use them
- ✅ Differentiating between pointers and arrays
- ✅ Using and manipulate strings manually
- ✅ Understanding memory layout and variable scope in C
- ✅ Recreating standard string functions (`strncpy`, `strncat`, `strcmp`, etc.)
- ✅ Manipulating strings with uppercase, capitalization, encoding, and reversing
- ✅ Building tools like ROT13 encoder and integer printer using only `_putchar`

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
    ├── main.h
    └── _putchar.c
```

---

## 🧪 Compilation Example

To compile any task:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c task-file.c -o output
```

Example for Task 0:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 0-reset_to_98.c -o reset
```

---

## 📚 Task Summary (Part 1: Basics)

| Task | Title                                          | File               |
|------|------------------------------------------------|--------------------|
| 0    | 98 Battery st.                                 | `0-reset_to_98.c`  |
| 1    | Don’t swap horses in crossing a stream         | `1-swap.c`         |
| 2    | This report defends itself by its length       | `2-strlen.c`       |
| 3    | I do not fear computers                        | `3-puts.c`         |
| 4    | I’ve not got a reverse gear                    | `4-print_rev.c`    |
| 5    | Reverse thinking                               | `5-rev_string.c`   |
| 6    | Every other character                          | `6-puts2.c`        |
| 7    | Second half of string                          | `7-puts_half.c`    |
| 8    | Print `n` elements of an array                 | `8-print_array.c`  |
| 9    | Copy string to buffer                          | `9-strcpy.c`       |
| 10   | String to Integer conversion (`_atoi`)         | `100-atoi.c`       |
| 11   | 🔒 Crackme password generator (Advanced)       | `101-keygen.c`     |

---

## 🧪 Task Summary (Part 2: Pointers, Arrays, Strings)

| Task | Title                                      | File                |
|------|--------------------------------------------|---------------------|
| 0    | Concatenate two strings                    | `0-strcat.c`        |
| 1    | Concatenate `n` bytes                      | `1-strncat.c`       |
| 2    | Copy a string up to `n` bytes              | `2-strncpy.c`       |
| 3    | Compare two strings                        | `3-strcmp.c`        |
| 4    | Reverse contents of an integer array       | `4-rev_array.c`     |
| 5    | Convert string to uppercase                | `5-string_toupper.c`|
| 6    | Capitalize all words of a string           | `6-cap_string.c`    |
| 7    | Encode string into 1337                    | `7-leet.c`          |
| 8    | Encode string using ROT13                  | `100-rot13.c`       |
| 9    | Print an integer using `_putchar` only     | `101-print_number.c`|

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
int _putchar(char c);
```

---

## 💡 Fun Facts & Tips

- `rot13()` is a symmetric cipher: apply it twice and you’re back to the original! 🌀
- You can recreate `atoi` logic using just arithmetic and ASCII math 🧠
- Avoid `strcpy`, `strlen`, and friends in interviews — show you know memory!
- `leet()` uses *only one `if`*, *two loops*, and *no ternaries or switch* – clean coding ftw 🔥

---

## 💾 GitHub Repository

**Repo:** [`holbertonschool-low_level_programming`](https://github.com/YourUsername/holbertonschool-low_level_programming)  
**Directory:** `pointers_arrays_strings`
