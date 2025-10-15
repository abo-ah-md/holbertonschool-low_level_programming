# Doubly Linked Lists

This folder contains C functions that implement and manipulate doubly linked lists as part of the Holberton School low-level programming curriculum.

## Resources
Read or watch:
- What is a Doubly Linked List

## Learning Objectives

- What is a doubly linked list
- How to use doubly linked lists
- How to look for the right source of information without too much help

## Requirements

- Allowed editors: **vi**, **vim**, **emacs**
- All files are interpreted/compiled on **Ubuntu 20.04 LTS** using `python3 (version 3.8.5)`
- All files should end with a new line
- A **README.md** file at the root of the folder is mandatory
- Code uses the **Betty** style (`betty-style.pl` and `betty-doc.pl`)
- No global variables
- No more than 5 functions per file
- Only allowed C standard library functions: `malloc`, `free`, `printf`, and `exit`
- All function prototypes must be included in the header file called `lists.h`
- All header files must be include guarded

## Data Structure

```
/**

struct dlistint_s - doubly linked list

@n: integer

@prev: points to the previous node

@next: points to the next node

Description: doubly linked list node structure
*/
typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;
```


## Tasks

### 0. Print list
Write a function that prints all the elements of a `dlistint_t` list.
- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Returns: the number of nodes

### 1. List length
Write a function that returns the number of elements in a linked `dlistint_t` list.
- Prototype: `size_t dlistint_len(const dlistint_t *h);`

### 2. Add node
Write a function that adds a new node at the beginning of a `dlistint_t` list.
- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- Returns: the address of the new element, or `NULL` if it failed

### 3. Add node at the end
Write a function that adds a new node at the end of a `dlistint_t` list.
- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- Returns: the address of the new element, or `NULL` if it failed

### 4. Free list
Write a function that frees a `dlistint_t` list.
- Prototype: `void free_dlistint(dlistint_t *head);`

### 5. Get node at index
Write a function that returns the nth node of a `dlistint_t` linked list.
- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- If the node does not exist, return `NULL`

### 6. Sum list
Write a function that returns the sum of all the data (`n`) of a `dlistint_t` linked list.
- Prototype: `int sum_dlistint(dlistint_t *head);`
- If the list is empty, return `0`

### 7. Insert at index
Write a function that inserts a new node at a given position.
- Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- Returns: the address of the new node, or `NULL` if it failed
- If it is not possible to add the new node at `index`, return `NULL`

### 8. Delete at index
Write a function that deletes the node at a given index of a `dlistint_t` linked list.
- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- Returns: `1` if it succeeded, `-1` if it failed

## File List

- `0-print_dlistint.c`
- `1-dlistint_len.c`
- `2-add_dnodeint.c`
- `3-add_dnodeint_end.c`
- `4-free_dlistint.c`
- `5-get_dnodeint.c`
- `6-sum_dlistint.c`
- `7-insert_dnodeint.c`
- `8-delete_dnodeint.c`
- `lists.h`
- `main.c` (example/test files, not required to push)

## Compilation

Use the following flags:
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main.c> <task_file.c> -o <output>
```

## Author

`abo-ah-md`

---

This project is part of the Holberton School curriculum.  
