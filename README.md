# libft

*This project has been created as part of the 42 curriculum by metaskin.*

## Description

**libft** is a custom C library developed as part of the 42 curriculum. The project involves replicating and creating essential standard C library functions, as well as implementing additional utility functions commonly used in C programming.

### Goal

The goal of libft is to:
- Deepen understanding of C fundamentals and memory management
- Implement core string manipulation, memory operations, and character classification functions
- Create reusable utility functions for future 42 projects
- Master low-level programming concepts and pointer manipulation

### Overview

libft contains 42 functions organized into three main categories:

1. **Character Classification** - Functions to check character properties (alphabetic, digit, alphanumeric, ASCII, printable)
2. **String & Memory Operations** - Functions for string manipulation, memory management, and comparison
3. **Linked List Operations** - Bonus functions for creating and manipulating linked list data structures

All functions are implemented from scratch without relying on external libraries (except for standard headers like `stdlib.h` and `unistd.h`).

## Instructions

### Compilation

To compile the libft library, navigate to the project directory and run:

```bash
make
```

This will compile all source files and create the static library `libft.a`.

### Additional Make Targets

- **`make clean`** - Remove object files (.o)
- **`make fclean`** - Remove object files and the library archive
- **`make re`** - Rebuild the library from scratch (equivalent to `make fclean all`)

### Compilation Flags

The library is compiled with strict C compilation flags:
- `-Wall` - Enable all compiler warnings
- `-Wextra` - Enable extra compiler warnings
- `-Werror` - Treat warnings as errors

### Using the Library

To use libft in your C projects:

1. Include the header file:
   ```c
   #include "libft.h"
   ```

2. Compile with the libft library:
   ```bash
   gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
   ```

   Or specify the library path explicitly:
   ```bash
   gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program
   ```

## Detailed Library Description

### Part 1: Libc Functions

These functions replicate standard C library functionality:

#### Character Classification
- `ft_isalpha()` - Check if character is alphabetic
- `ft_isdigit()` - Check if character is a digit
- `ft_isalnum()` - Check if character is alphanumeric
- `ft_isascii()` - Check if character is ASCII
- `ft_isprint()` - Check if character is printable
- `ft_toupper()` - Convert character to uppercase
- `ft_tolower()` - Convert character to lowercase

#### String Functions
- `ft_strlen()` - Calculate string length
- `ft_strchr()` - Locate first occurrence of character in string
- `ft_strrchr()` - Locate last occurrence of character in string
- `ft_strncmp()` - Compare two strings up to n characters
- `ft_strnstr()` - Locate substring in string (limited length)
- `ft_strlcpy()` - Copy string with size limit (safe copy)
- `ft_strlcat()` - Concatenate strings with size limit (safe concat)

#### Memory Functions
- `ft_memset()` - Fill memory with constant byte
- `ft_bzero()` - Zero a memory block
- `ft_memcpy()` - Copy memory (non-overlapping)
- `ft_memmove()` - Copy memory (handles overlapping)
- `ft_memchr()` - Search for byte in memory
- `ft_memcmp()` - Compare memory areas
- `ft_calloc()` - Allocate and zero memory

#### Conversion Functions
- `ft_atoi()` - Convert string to integer
- `ft_itoa()` - Convert integer to string

### Part 2: Additional Functions

#### String Manipulation
- `ft_strdup()` - Duplicate a string
- `ft_substr()` - Extract substring from string
- `ft_strjoin()` - Concatenate two strings with allocation
- `ft_strtrim()` - Trim whitespace from string
- `ft_split()` - Split string by delimiter
- `ft_strmapi()` - Apply function to each character and create new string
- `ft_striteri()` - Apply function to each character in place

#### Output Functions
- `ft_putchar_fd()` - Output character to file descriptor
- `ft_putstr_fd()` - Output string to file descriptor
- `ft_putendl_fd()` - Output string with newline to file descriptor
- `ft_putnbr_fd()` - Output number to file descriptor

### Part 3: Bonus Linked List Functions

These functions provide linked list manipulation:

- `ft_lstnew()` - Create new list node
- `ft_lstadd_front()` - Add node to front of list
- `ft_lstadd_back()` - Add node to back of list
- `ft_lstsize()` - Get list length
- `ft_lstlast()` - Get last node of list
- `ft_lstdelone()` - Delete single node
- `ft_lstclear()` - Delete entire list
- `ft_lstiter()` - Apply function to each node
- `ft_lstmap()` - Apply function and create new list

## Resources

### Official References
- [C Standard Library - cppreference.com](https://en.cppreference.com/w/c)
- [POSIX Specification - man7.org](https://man7.org/linux/man-pages/)
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language)

### Helpful Tutorials
- [String Manipulation in C](https://www.tutorialspoint.com/c_standard_library/string_h.htm)
- [Memory Management in C](https://www.geeksforgeeks.org/memory-management-in-c/)
- [Linked Lists in C](https://www.geeksforgeeks.org/linked-list-set-1-introduction/)

### Online Documentation
- [man pages online](https://man7.org/)
- [C Library Reference](https://www.cplusplus.com/reference/cstring/)

### AI Usage

AI assistance was utilized for the following aspects of this project:

- **Code Review & Optimization**: AI helped review implementations for correctness, edge cases, and performance considerations
- **Memory Safety**: AI provided guidance on proper memory management, buffer overflow prevention, and safe string handling
- **Documentation**: AI assisted in creating comprehensive documentation and comments for complex functions
- **Testing Insights**: AI helped identify potential test cases and edge cases (NULL pointers, boundary conditions, etc.)
- **Learning Support**: AI explained C concepts, pointer arithmetic, and function prototyping when needed

The core implementations were written manually, with AI serving as a reference, validator, and educational tool throughout the development process.

