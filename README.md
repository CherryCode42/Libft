# Libft

A custom C standard library implementation built from scratch as part of the 42 curriculum.

---

## 📌 What is this project?

**Libft** is a personal recreation of several standard C library functions, along with additional utility functions and a linked list implementation.

The goal is to understand how these core functions work internally by reimplementing them from scratch without using the original libc implementations.

---

## ⚙️ Features

This library includes:

### 🔤 Standard libc functions

Rewritten versions of common C functions:

* Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
* String manipulation: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
* Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
* Conversion: `ft_atoi`, `ft_itoa`
* Case conversion: `ft_toupper`, `ft_tolower`
* Allocation: `ft_calloc`

---

### 🧰 Utility functions

Helpful additional functions:

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_strmapi`
* `ft_striteri`
* File descriptors helpers:

  * `ft_putchar_fd`
  * `ft_putstr_fd`
  * `ft_putendl_fd`
  * `ft_putnbr_fd`

---

### 🔗 Bonus: Linked List

A simple linked list implementation:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstadd_back`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

---

## 🛠️ Build

Compile the library using:

```bash
make
```

This generates:

```bash
libft.a
```

To remove object files:

```bash
make clean
```

To remove everything:

```bash
make fclean
```

To rebuild:

```bash
make re
```

---

## 📦 Usage

Include the header in your project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
gcc main.c -L. -lft
```

---

## 📁 Project structure

```
libft/
├── srcs/
├── obj/
├── libft.h
├── Makefile
└── libft.a
```

---

## 🎯 Purpose

This project is part of the **42 School curriculum** and serves as a foundation for future projects such as:

* `get_next_line`
* `ft_printf`
* `minishell`

---

## 👤 Author

* 42 Login: iarefeva

---

## 📜 License

This project is for educational purposes as part of 42 School training.
