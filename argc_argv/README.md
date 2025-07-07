  # 🧳 Command-Line Arguments in C — `argc` & `argv`

<img src="https://img.icons8.com/external-flat-icons-inmotus-design/100/undefined/external-Terminal-programming-and-coding-flat-icons-inmotus-design.png" width="12%">
<img src="https://i.imgur.com/ylmkS2o.png" width="18%">

---

## 🧠 Overview

In this project, I've learned  how to handle **command-line arguments** in C. This is the moment where `main()` stops being just `main(void)` and starts taking names (literally) — with `int argc, char *argv[]`.

## 🎯 Learning Objectives

- ✅ Understanding `argc` and `argv`
- ✅ Handling command-line arguments properly
- ✅ Printing the program's own name 🪞
- ✅ Counting and print argument totals
- ✅ Parsing and validating argument input
- ✅ Using `atoi()` to convert string input to integers
- ✅ Returning appropriate exit status values (`0`, `1`)
---
## 📁 Project Structure

```
holbertonschool-low_level_programming/
└── argc_argv/
    ├── 0-whatsmyname.c
    ├── 1-args.c
    ├── 2-args.c
    ├── 3-mul.c
    ├── 4-add.c
    └── main.h (if needed)
```

---

## 🧪 Compilation Example

To compile any task (e.g., Task 0):

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o mynameis
```

---

## 📚 Task Summary

| #  | Task Title                                                                 | File              |
|----|---------------------------------------------------------------------------|-------------------|
| 0  | It ain't what they call you, it's what you answer to (`argv[0]`)         | `0-whatsmyname.c` |
| 1  | Silence is argument carried out by other means (print `argc - 1`)         | `1-args.c`        |
| 2  | Print all arguments, one per line                                         | `2-args.c`        |
| 3  | Multiply 2 arguments from CLI, return error if args ≠ 2                   | `3-mul.c`         |
| 4  | Add positive numbers (ignore 0 args, check for invalid input)            | `4-add.c`         |

---

## ✨ Highlights

### ✅ `argv[0]` always contains the program name — even if renamed  
```bash
./myprogram → ./myprogram  
mv ./myprogram ./newname → ./newname
```

### ✅ `argc` includes the program name  
- So `argc == 1` means **no extra arguments were passed**

### 🧠 Error Handling Tips  
- When invalid input is detected:  
```c
printf("Error\n");
return (1);
```

### ✅ Use `atoi()` safely  
- No need for `#include <stdlib.h>` here, it's usually already handled via `main.h`

---

## 💾 GitHub Repository

**Repo:** [`holbertonschool-low_level_programming`](https://github.com/YourUsername/holbertonschool-low_level_programming)  
**Directory:** `argc_argv`

---
