# Singly Linked Lists

**Directory:** `singly_linked_lists`  
**Repository:** [holbertonschool-low_level_programming](https://github.com/abo-ah-md/holbertonschool-low_level_programming/tree/main/singly_linked_lists)

## Resources

- [Linked Lists](https://intranet.hbtn.io/rltoken/cg9u72K8oC40BifREzmx0g)
- [Google](https://intranet.hbtn.io/rltoken/cOmrDflypepm1-sgGIXjNA)
- [Youtube](https://intranet.hbtn.io/rltoken/6CP1oqEpl5hd1j18fusEEQ)

## Learning Objectives

At the end of this project, you should be able to **explain to anyone, without the help of Google:**

- *When and why to use linked lists vs arrays*
- *How to build and use linked lists*

## Requirements

- **Allowed editors:** `vi`, `vim`, `emacs`
- All files must be compiled on **Ubuntu 20.04 LTS** with `gcc` using options:  
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the folder is **mandatory**
- Code must use the **Betty style** and will be checked using [`betty-style.pl`](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- **Global variables** are not allowed
- **Maximum 5 functions per file**
- Only allowed standard C library functions: `malloc`, `free`, `exit`
  - Use of `printf`, `puts`, `calloc`, `realloc`, etc. is **forbidden**
- **You are allowed to use** [`_putchar`](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
  - Do not push `_putchar.c` (school will provide their file)
- **All function prototypes** and `_putchar` prototype go in `lists.h`
- **Include guards required** in header files
- Test examples in `main.c` are not required in submission

## Data Structure

```
/**

struct list_s - singly linked list

@str: string - (malloc'ed string)

@len: length of the string

@next: points to the next node

Description: singly linked list node structure
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
```


## Files

| File               | Description                                 |
| ------------------ | ------------------------------------------- |
| `0-print_list.c`   | Prints all elements of a `list_t` list      |
| `1-list_len.c`     | Returns number of elements in linked list   |
| `2-add_node.c`     | Adds new node at the beginning of list      |
| `3-add_node_end.c` | Adds new node at the end of list            |
| `4-free_list.c`    | Frees a linked list                         |
| `lists.h`          | Contains structures and function prototypes |
| `_putchar.c`       | Custom putchar implementation (school copy) |
| `main.c`           | Example main for testing (not required)     |

## Tasks Overview

### 0. Print list
- Function: `size_t print_list(const list_t *h);`
- Prints all elements; prints `[0] (nil)` if `str` is `NULL`
- Returns number of nodes
- **Allowed to use `printf`**

### 1. List length
- Function: `size_t list_len(const list_t *h);`
- Returns number of elements

### 2. Add node
- Function: `list_t *add_node(list_t **head, const char *str);`
- Adds node at the beginning
- Duplicates `str` (use `strdup`)
- Returns address of new node or `NULL` if failed

### 3. Add node at the end
- Function: `list_t *add_node_end(list_t **head, const char *str);`
- Appends node
- Duplicates `str`
- Returns address of new node or `NULL` if failed

### 4. Free list
- Function: `void free_list(list_t *head);`
- Frees memory used by list

## Style & Testing

- *Follow Betty coding style for all files*
- *Do not include global variables*
- *No more than five functions per file*
- *Use only permitted standard library functions*
- *Ensure all headers are include-guarded*
- *Testing is done with provided or example `main.c` files*

---

*For further details refer to the source code files in this directory.*
