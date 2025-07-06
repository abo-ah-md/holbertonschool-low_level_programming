# 0x00. C - Hello, World

<img src ="https://img.icons8.com/?size=160&id=mfkStOwP4EC0&format=png" width="10%"></img>
<img src ="https://i.imgur.com/ylmkS2o.png" width="20%"></img>

## 📁 Project: `hello_world`  
Part of the Holberton School by Tuwaiq Academy Low-Level Programming track

---

## 📌 Learning Objectives

At the end of this project, you should be able to explain to anyone, **without the help of Google**:

- What happens when you type `gcc main.c`
- What is an entry point
- What is the purpose of a compiler
- What are the official Holberton School coding style and naming rules
- How to print text using `printf`, `puts`, and how to format them properly
- How to compile without warnings
- What is the size of various C types using `sizeof`
- How to write a complete `README.md`
- How to use `gcc`, `-S`, `-c`, `-o`, `-E`, `-Wall`, and `-pedantic`

---

## 💻 Project Files & Descriptions

| File Name        | Description |
|------------------|-------------|
| `0-preprocessor` | A shell script that runs a C file through the preprocessor and saves the result in file `c` |
| `1-compiler`     | A shell script that compiles a C file without linking; output file is `.o` |
| `2-assembler`    | A shell script that generates assembly code of a C file and saves it in a `.s` file |
| `3-name`         | A shell script that compiles a C file and creates an executable named `cisfun` |
| `4-puts.c`       | A C program that prints `"Programming is like building a multilingual puzzle\n"` using `puts()` |
| `5-printf.c`     | A C program that prints `"with proper grammar, but the outcome is a piece of art,\n"` using `printf()` |
| `6-size.c`       | A C program that prints the size of various types on the machine it’s compiled on |
| `100-intel`      | A script that generates Intel syntax assembly code (`-S -masm=intel`) |
| `101-quote.c`    | A C program that prints an exact quote to `stderr` using `write()` and returns 1 |
| `main.c`         | Test file used during development |

---

## 🧪 Compilation Instructions

To compile any of the `.c` files:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c>
```
To compile for 32-bit architecture:
```bash
gcc -m32 <filename.c>
```
## 🔥 Example Outputs
./4-puts
```
Programming is like building a multilingual puzzle
```
./5-printf
```
with proper grammar, but the outcome is a piece of art,

```
./6-size (example 64-bit):
```
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
```
./quote (stderr):
```
and that piece of art is useful" - Dora Korpar, 2015-10-19
```
---
## 📸 Blog Post
  [What happens when you type gcc main.c](https://dev.to/aboahmd/what-happens-when-you-type-gcc-mainc-h17) 
---
## 🗂 Repo Structure
This directory is part of the main repository:
[holbertonschool-low_level_programming](https://github.com/abo-ah-md/holbertonschool-low_level_programming)

## 📚 Additional Notes
- All code follows the Betty style.
- Scripts are executable and tested in Ubuntu 20.04/22.04 environments.
