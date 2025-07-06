## 0x01. C - Variables, if, else, while
---
<img src ="https://img.icons8.com/?size=160&id=mfkStOwP4EC0&format=png" width="10%"></img>
<img src ="https://i.imgur.com/ylmkS2o.png" width="20%"></img>
---
## 📁 Project: variables_if_else_while
This project is part of the Holberton School (Tuwaiq Academy) low-level programming track.
---
📌 Learning Objectives
By the end of this project, I was able to:

Use arithmetic, logical, relational, and boolean operators

Understand how TRUE and FALSE work in C

Write conditionals using if and if...else

Declare and assign variables (char, int, unsigned int)

Print variables using printf

Loop with while

Understand ASCII and how characters are represented

Compile code with -m32 and -m64 for architecture compatibility
---
✅ Requirements
Code checked with Betty style guide (betty-style.pl + betty-doc.pl)

Compiled on Ubuntu 20.04 with:

``` 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 
```
No use of system()

Only allowed editors: vi, vim, emacs
---
## 📂 Files & Description
|File	name   |Description|
|------------|-----------|
|0-positive_or_negative.c	|Randomly assigns a number to n and prints if it's positive, negative, or zero|
|1-last_digit.c	|Prints the last digit of n and describes its value|
|2-print_alphabet.c	|Prints the alphabet in lowercase using putchar only|
|3-print_alphabets.c|	Prints lowercase then uppercase alphabets|
|4-print_alphabt.c	|Prints all letters except e and q|
|5-print_numbers.c	|Prints base-10 digits (0–9)|
|6-print_numberz.c	|Same as above, but without using char|
|7-print_tebahpla.c|	Prints the lowercase alphabet in reverse|
|8-print_base16.c|	Prints all hexadecimal characters (0-9, a-f)|
|9-print_comb.c|	Prints combinations of single-digit numbers|
|100-print_comb3.c|	Prints all possible 2-digit combos (no repeats)|
|101-print_comb4.c|	Prints all unique 3-digit combos|
|102-print_comb5.c|	Prints all combinations of two 2-digit numbers|

---
## 🧪 Compilation Example
To compile any file, I used:
``` 
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative 
```
---
## 💡 Example Outputs
./0-positive_or_negative
```
-120483921 is negative
```
./1-last_digit
```
Last digit of 652334952 is 2 and is less than 6 and not 0
```
./2-print_alphabet
```
abcdefghijklmnopqrstuvwxyz
```
./4-print_alphabt
```
abcdfghijklmnoprstuvwxyz
```
./5-print_numbers
```
0123456789
```
./6-print_numberz
```
0123456789
```
./7-print_tebahpla
```
zyxwvutsrqponmlkjihgfedcba
```
./8-print_base16
```
0123456789abcdef
```
./9-print_comb
```
0, 1, 2, 3, 4, 5, 6, 7, 8, 9
```
./100-print_comb3
```
01, 02, 03, ..., 89
```
./101-print_comb4
```
012, 013, 014, ..., 789
```
./102-print_comb5
```
00 01, 00 02, ..., 98 99
```

---
## 🧠 What I Learned
How to use control flow effectively in C

The value of logical thinking when using conditions

Why data types matter when printing and looping

How to format clean, readable code using Betty

A new appreciation for putchar()—writing output with constraints made me smarter 🤓
---
## 🗂 Repo Link
🔗 [holbertonschool-low_level_programming](https://github.com/abo-ah-md/holbertonschool-low_level_programming)
📁 Directory: variables_if_else_while

✍️ Notes
No warnings or errors during compilation

All scripts tested on Ubuntu 20.04
