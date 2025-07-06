# 📚 Functions, Nested Loops - C Programming
---
<img src ="https://img.icons8.com/?size=160&id=mfkStOwP4EC0&format=png" width="10%"></img>
<img src ="https://i.imgur.com/ylmkS2o.png" width="20%"></img>
---
Welcome to my **Holberton School** project on _functions and nested loops_ in C!  
In this mini-arc, I practiced core C concepts like custom functions, variable scopes, character checks, number printing, and most importantly — **nested loops**.  
This is a critical part of learning to control program flow and build useful logic blocks.

---

## 🔥 Learning Objectives

By the end of this project, I can confidently explain:

- ✅ What **nested loops** are and how to use them efficiently
- ✅ What a **function** is and how to declare, define, and use them
- ✅ The **difference** between a declaration and a definition
- ✅ What a **function prototype** is and why it matters
- ✅ How **variable scope** affects access and lifetime
- ✅ What the following `gcc` flags do:
  - `-Wall`  
  - `-Werror`  
  - `-pedantic`  
  - `-Wextra`  
  - `-std=gnu89`
- ✅ How to use **header files** with `#include`

---

## 🗂️ File Structure

All C files follow the `Betty` coding style, use a custom `_putchar` function, and include a matching header file `main.h`.
```tree
.
├── _putchar.c
├── main.h
├── 0-putchar.c
├── 1-alphabet.c
├── 2-print_alphabet_x10.c
├── 3-islower.c
├── 4-isalpha.c
├── 5-sign.c
├── 6-abs.c
├── 7-print_last_digit.c
├── 8-24_hours.c
├── 9-times_table.c
├── 10-add.c
├── 11-print_to_98.c
├── 100-times_table.c
├── 101-natural.c
├── 102-fibonacci.c
├── 103-fibonacci.c
└── 104-fibonacci.c
```
---
## ✅ Mandatory Tasks

| #  | File                        | Description                                              |
|----|-----------------------------|----------------------------------------------------------|
| 0  | `0-putchar.c`               | Prints "_putchar" using a custom `_putchar` function     |
| 1  | `1-alphabet.c`              | Prints lowercase alphabet once                          |
| 2  | `2-print_alphabet_x10.c`    | Prints alphabet 10 times                                 |
| 3  | `3-islower.c`               | Returns 1 if char is lowercase, else 0                  |
| 4  | `4-isalpha.c`               | Returns 1 if char is alphabetic                         |
| 5  | `5-sign.c`                  | Prints the sign of a number                             |
| 6  | `6-abs.c`                   | Returns absolute value of an integer                    |
| 7  | `7-print_last_digit.c`      | Prints the last digit of a number                       |
| 8  | `8-24_hours.c`              | Prints every minute from 00:00 to 23:59 (Jack Bauer style) |
| 9  | `9-times_table.c`           | Prints the 9 times table                                |
| 10 | `10-add.c`                  | Adds two integers                                       |
| 11 | `11-print_to_98.c`          | Prints all natural numbers from `n` to `98`             |

---

## 🧠 Advanced Tasks

| #   | File                 | Description                                                                 |
|-----|----------------------|-----------------------------------------------------------------------------|
| 12  | `100-times_table.c`  | Prints the `n` times table (0 ≤ n ≤ 15)                                     |
| 13  | `101-natural.c`      | Prints the sum of all multiples of 3 or 5 below 1024                       |
| 14  | `102-fibonacci.c`    | Prints the first 50 Fibonacci numbers                                       |
| 15  | `103-fibonacci.c`    | Prints sum of even Fibonacci values ≤ 4,000,000                             |
| 16  | `104-fibonacci.c`    | Prints the first 98 Fibonacci numbers without `long long`, `arrays`, etc. |

---

## 🧪 Compilation Example

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main_file.c> <task_file.c> _putchar.c -o <output_binary>
```
## 🛠 Custom _putchar Function
Instead of printf(), I used this function to output characters:

```c
#include <unistd.h>

int _putchar(char c)
{
    return (write(1, &c, 1));
}
```
---
##💡 Concepts Practiced

Looping patterns using for, while

Conditional logic and comparisons

Function creation, declaration, and usage

Character operations with ASCII values

Number manipulation and formatting

Memory-safe integer operations (no overflows allowed!)

Efficient printing using _putchar
---
## 💬 Author
I built this project as part of the Holberton School Software Engineering curriculum.
It's all about mastering the basics so the advanced stuff feels like second nature.
Feel free to fork, learn, or laugh at my early code. 😄
---
🚀 Bonus Tip
🔥 If you're learning C and you don't fully understand how nested loops or function prototypes work...
STOP right now and practice this project again from scratch — it will unlock your entire C journey. Trust me.
---
