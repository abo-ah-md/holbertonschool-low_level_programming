# 0x04. C - More functions, more nested loops
<img src ="https://img.icons8.com/?size=160&id=mfkStOwP4EC0&format=png" width="10%"></img>
<img src ="https://i.imgur.com/ylmkS2o.png" width="20%"></img>
## 📚 Project Summary
This project builds on my understanding of **functions**, **loops**, and basic character manipulation in C. I practiced implementing low-level logic using only `_putchar`, without relying on standard libraries like `printf`. I also used **nested loops** for pattern printing and **custom function creation** for utility tasks.
---

## 📌 Learning Objectives
---
- ✅ What are **nested loops** and how to use them  
- ✅ How to define and call a **function**  
- ✅ Difference between a **function declaration** and a **function definition**  
- ✅ What is a **function prototype**  
- ✅ Understanding **variable scope** in C  
- ✅ What the GCC flags `-Wall`, `-Werror`, `-Wextra`, `-pedantic`, and `-std=gnu89` do  
- ✅ How to use **header files** with `#include`  
---

## 🧠 Requirements


- Use of **Betty style** (`betty-style.pl` and `betty-doc.pl`)  
- **No global variables**  
- Maximum **5 functions per file**  
- **No standard libraries** allowed (e.g. `printf`, `puts`, etc.)  
- Allowed to use **`_putchar`**  
- Use the following **GCC flags** for compilation:  
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```
- All function prototypes must be in `main.h`  
- Push `main.h`, but **not `_putchar.c`** or test `main.c` files  
---
## 📂 File Structure

```
| File                   | Description                                       |
|------------------------|---------------------------------------------------|
| `0-isupper.c`          | Checks if a character is uppercase                |
| `1-isdigit.c`          | Checks if a character is a digit                  |
| `2-mul.c`              | Multiplies two integers                           |
| `3-print_numbers.c`    | Prints digits 0 through 9                         |
| `4-print_most_numbers.c` | Prints 0–9 except 2 and 4                      |
| `5-more_numbers.c`     | Prints 0–14 ten times                             |
| `6-print_line.c`       | Prints a straight line using `_`                 |
| `7-print_diagonal.c`   | Prints a diagonal line using `\`                 |
| `8-print_square.c`     | Prints a square of `#` characters                 |
| `9-fizz_buzz.c`        | Classic FizzBuzz challenge (1–100)                |
| `10-print_triangle.c`  | Prints a right-aligned triangle with `#`          |
| `100-prime_factor.c`   | Prints the largest prime factor of a big number   |
| `101-print_number.c`   | Prints integers using only `_putchar`             |
| `main.h`               | Contains all function prototypes                  |
```
---
## 🧪 Example Compilation
For most tasks:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c <task-file>.c -o output
```

For files requiring `_putchar`:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c main.c <task-file>.c -o output
```
---
## 🌶️ Advanced Tasks (Extra Credit)

```
- **`100-prime_factor.c`**: Finds the **largest** prime factor of `612852475143`  
- **`101-print_number.c`**: Prints integers manually using `_putchar`, without arrays or pointers  
```
---
## 💭 Final Thoughts

This was a great project to level up my:
- Looping logic  
- Function management  
- C syntax discipline (no cheating with `printf`)  
- Pattern printing with **nested loops**  
- Problem-solving mindset with FizzBuzz and prime factors  

I’m now much more confident working under stricter coding constraints. ✅
