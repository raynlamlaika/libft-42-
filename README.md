# Libft

Libft is a custom implementation of essential C library functions, built as part of the 42 School curriculum. This project aims to recreate a selection of functions from the standard C library along with additional utility functions, offering a strong foundation in C programming and low-level coding.

## Table of Contents

- [Introduction](#introduction)
- [Project Structure](#project-structure)
- [Functions Implemented](#functions-implemented)
- [Usage](#usage)
- [Compilation](#compilation)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The **Libft** project involves creating a custom C library from scratch, starting with a variety of functions that mimic those found in `<string.h>`, `<ctype.h>`, `<stdlib.h>`, and other standard libraries. This library will be helpful in future projects at 42 and is a great exercise for mastering C basics, memory allocation, and pointer manipulation.

## Project Structure

The project is organized into several sections:

- **Libc Functions:** Reimplementations of standard C library functions (e.g., `memset`, `strcpy`, `strlen`).
- **Additional Functions:** Custom utility functions (e.g., `ft_substr`, `ft_strjoin`) that are commonly useful.
- **Bonus Part:** Functions to work with linked lists if specified in the project.

## Functions Implemented

### Part 1 - Libc Functions
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_toupper`
- `ft_tolower`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_memchr`
- `ft_memcmp`
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

### Part 2 - Additional Functions
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus - Linked List Functions
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

> **Note**: Ensure to refer to the project specifications for detailed requirements and function prototypes.

## Usage

1. **Clone the repository:**
   ```bash
   git clone <git@github.com:raynlamlaika/libft-42-.git>
   cd libft
