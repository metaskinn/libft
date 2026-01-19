*This project has been created as part of the 42 curriculum by metaskin.*

# libft

## Description
**libft** is a custom C library written as part of the 42 curriculum.
The project recreates a set of standard libc functions and adds additional utilities that are frequently needed in C projects. It focuses on **memory management**, **pointer logic**, and writing **clean, reusable** code.

### Goal
- Strengthen C fundamentals (pointers, arrays, strings, memory)
- Practice safe dynamic allocation and error handling
- Understand standard library behavior by re-implementing it
- Build a reusable library for future 42 projects
- Implement a Linked List API (creation, iteration, deletion, mapping)

### Overview
Functions are grouped into three parts:
1. **Libc Functions** (re-implemented)
2. **Additional Utilities**
3. **Linked List Functions**

> All functions are implemented from scratch (only standard headers are used).

---

## Instructions

### Compile
```bash
make
````

This produces the static library: `libft.a`

### Make Targets

* `make clean`  → remove object files
* `make fclean` → remove objects + `libft.a`
* `make re`     → rebuild everything

### Use in a Project

Include the header:

```c
#include "libft.h"
```

Compile with the library:

```bash
gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program
```

---

## Detailed Library Description

### Part 1 — Libc Functions (Re-implemented)

#### Character Classification & Conversion

* `ft_isalpha`  → alphabetic check
* `ft_isdigit`  → digit check
* `ft_isalnum`  → alphanumeric check
* `ft_isascii`  → ASCII check
* `ft_isprint`  → printable check
* `ft_toupper`  → convert to uppercase
* `ft_tolower`  → convert to lowercase

#### String Functions

* `ft_strlen`   → string length
* `ft_strchr`   → first occurrence of a character
* `ft_strrchr`  → last occurrence of a character
* `ft_strncmp`  → compare up to `n` characters
* `ft_strnstr`  → find substring within a bounded length
* `ft_strlcpy`  → size-bounded copy (NUL-terminated when size > 0)
* `ft_strlcat`  → size-bounded concatenation

#### Memory Functions

* `ft_memset`   → fill memory with a byte value
* `ft_bzero`    → set a memory region to zero
* `ft_memcpy`   → copy memory (undefined for overlap)
* `ft_memmove`  → copy memory (safe for overlap)
* `ft_memchr`   → locate a byte in memory
* `ft_memcmp`   → compare memory regions
* `ft_calloc`   → allocate and zero-initialize memory

#### Conversion

* `ft_atoi`     → string to integer
* `ft_itoa`     → integer to string

### Part 2 — Additional Utilities

#### String Manipulation

* `ft_strdup`   → duplicate a string
* `ft_substr`   → extract a substring
* `ft_strjoin`  → join two strings into a new allocation
* `ft_strtrim`  → trim characters from both ends
* `ft_split`    → split a string by a delimiter
* `ft_strmapi`  → map a function over a string (creates new string)
* `ft_striteri` → apply a function over a string in place

#### Output to File Descriptor

* `ft_putchar_fd` → write a character
* `ft_putstr_fd`  → write a string
* `ft_putendl_fd` → write a string + newline
* `ft_putnbr_fd`  → write an integer

### Part 3 — Linked List Functions

* `ft_lstnew`       → create a new node
* `ft_lstadd_front` → add node to the front
* `ft_lstadd_back`  → add node to the back
* `ft_lstsize`      → count nodes
* `ft_lstlast`      → get last node
* `ft_lstdelone`    → delete one node (using a `del` function)
* `ft_lstclear`     → clear the entire list (deep free)
* `ft_lstiter`      → apply a function to each node
* `ft_lstmap`       → create a new list by applying a function (with cleanup on failure)

---

## Resources

### Video

* [Harvard CS50 (YouTube Playlist)](https://youtube.com/playlist?list=PLhQjrBD2T380hlTqAU8HfvVepCcjCqTg6&si=8h5prdlQWfAFZOrs)

### Official / Primary References

* [Linux man-pages (function contracts & edge cases)](https://man7.org/linux/man-pages/index.html)
* [GNU C Library Manual (glibc)](https://sourceware.org/glibc/manual/latest/html_mono/libc.html#Language-Features)
* [Beej’s Guide to C (clear explanations)](https://beej.us/guide/bgc/html/split-wide/)

### C Standard Library References

* [Tutorialspoint — C Programming](https://www.tutorialspoint.com/cprogramming/index.htm)
* [Tutorialspoint — `string.h` overview](https://www.tutorialspoint.com/c_standard_library/string_h.htm)
* [cplusplus.com — `cstring` reference](https://cplusplus.com/reference/cstring/#google_vignette)

### Linked List

* [GeeksforGeeks — What is a Linked List?](https://www.geeksforgeeks.org/dsa/what-is-linked-list/)

---

## AI Usage

I used AI as a learning assistant, not as a code generator.

* I created a dedicated AI workspace and added 42’s AI-related documents (e.g., *We All Love ChatGPT* and the Libft subject AI instructions) along with the Libft subject as reference notes.
* Workflow: I first tried to solve each problem on my own, then used AI to clarify concepts and double-check edge cases.
* AI helped me with: understanding function behavior (man-page level), comparing functions (e.g., `memcpy` vs `memmove`), generating test-case ideas, interpreting compiler/runtime error outputs during debugging, and reviewing potential memory leaks and edge cases.
