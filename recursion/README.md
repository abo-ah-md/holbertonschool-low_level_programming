# 🔁 Recursion — C Project

<img src ="https://img.icons8.com/?size=160&id=mfkStOwP4EC0&format=png" width="10%"></img>
<img src ="https://i.imgur.com/ylmkS2o.png" width="20%"></img>
---

## 🧠 Overview

In this project, we go full inception 🌀 and dive into **recursive functions** — functions that call themselves to solve problems step-by-step.  
Forget loops. This is **pure stack magic** 🔮

## I've learned :

- How recursion works in C and how it replaces iteration
- The memory model (stack/heap) behind recursive calls
- Real-world use cases like string manipulation, factorials, powers, square roots, and primality testing
- How to handle base cases and recursive cases safely

---

## 🎯 Learning Objectives

- ✅ Understand recursion and when to use it
- ✅ Create base + recursive cases correctly
- ✅ Apply recursion to solve string and math problems
- ✅ Handle edge cases like negative inputs and overflows
- ✅ Avoid infinite recursion with proper conditions
- ✅ Write clean recursive logic with minimal stack usage

---

## 📁 Project Structure

```
holbertonschool-low_level_programming/
└── recursion/
    ├── 0-puts_recursion.c
    ├── 1-print_rev_recursion.c
    ├── 2-strlen_recursion.c
    ├── 3-factorial.c
    ├── 4-pow_recursion.c
    ├── 5-sqrt_recursion.c
    ├── 6-is_prime_number.c
    ├── main.h
    └── _putchar.c
```

---

## 🧪 Compilation Example

To compile any task, for example Task 0:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
```

---

## 📚 Task Summary

| #  | Task Title                                                                 | File                      |
|----|---------------------------------------------------------------------------|---------------------------|
| 0  | She locked away a secret… `_puts_recursion`                               | `0-puts_recursion.c`      |
| 1  | Why is it so important to dream? `_print_rev_recursion`                  | `1-print_rev_recursion.c` |
| 2  | Dreams feel real… `_strlen_recursion`                                     | `2-strlen_recursion.c`    |
| 3  | You mustn’t be afraid to dream… `factorial`                               | `3-factorial.c`           |
| 4  | Once an idea has taken hold… `_pow_recursion`                             | `4-pow_recursion.c`       |
| 5  | Your subconscious is looking for the dreamer `_sqrt_recursion`           | `5-sqrt_recursion.c`      |
| 6  | Inception. Is it possible? `is_prime_number`                              | `6-is_prime_number.c`     |

---

## ✨ Function Prototypes

```c
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int _putchar(char c);
```

---

## 💡 Notes

- `puts()` but recursive? `_puts_recursion()` calls itself to print each char one-by-one.
- Want to reverse a string without touching loops? That’s `_print_rev_recursion()` for you.
- Yes, `factorial()` really does just call itself… again and again… and again 🌀
- The base case is everything. Get that wrong, and hello infinite recursion 💀
- Primality testing without iteration = elite thinking 🧠✅

---

## 💾 GitHub Repository

**Repo:** [`holbertonschool-low_level_programming`](https://github.com/YourUsername/holbertonschool-low_level_programming)  
**Directory:** `recursion`

---
