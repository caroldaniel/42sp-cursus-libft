<h1 align=center>
	<b>libft</b>
</h1>

<h2 align=center>
	 <i>42cursus' project #1</i>
</h2>

<p align=center>
	In this repo you will find all the codes developed during the <i>libft</i> project, both <b>mandatory</b>'s Parts 1 and 2 and <b>bonus</b> functions, as well as other functions that I may find useful later on. These functions must be compiled (through a <i>Makefile</i>) into a <b><i>libft.a</b></i> library for my own use further on the 42cursus' syllabus.
</p>

---
<h2 align=center>
	Final score
</h2>
<img align=center src=https://github.com/caroldaniel/caroldaniel-utils/blob/190ecec69ff399a4f253dfbc0ab92dcabb8ceff9/libft_grade.png alt=cado-car's 42Project Score/>
<p> Completed + Bonus</p>
![cado-car's 42Project Score](https://github.com/caroldaniel/caroldaniel-utils/blob/190ecec69ff399a4f253dfbc0ab92dcabb8ceff9/libftm.png)

---

<h3 align=center>
Part 1
</h3>

> <i>In this first part, you must re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes ft_strlen.</i>

<p align=center>
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• strlen
• memset
• bzero
• memcpy
• memmove
• strlcpy
• strlcat
• toupper
• tolower
• strchr
• strrchr
• strncmp
• memchr
• memcmp
• strnstr
• atoi
</p>

<h3 align=center>
Part 2
</h3>

> <i>In this second part, you must code a set of functions that are either not included in the libc, or included in a different form. Some of these functions can be useful to write Part 1’s functions.</i>

<p align=center>
• substr
• strjoin
• strtrim
• split
• itoa
• strmapi
• striteri
• putchar_fd
• putstr_fd
• putendl_fd
• putnbr_fd
</p>

<h3 align=center>
Bonus
</h3>

> <i>The following functions will allow you to easily use your lists.</i>
<p align=center>
• lstnew
• lstadd_front
• lstsize
• lstlast
• lstadd_back
• lstdelone
• lstclear
• lstiter
• lstmap
</p>

---

<h2>
The project
</h2>

### Functions from `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c)	- checks  for  an  alphabetic  character
- [`ft_isdigit`](ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character
- [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set
- [`ft_isprint`](ft_isprint.c)	- checks for any printable character
- [`ft_toupper`](ft_toupper.c)	- convert char to uppercase
- [`ft_tolower`](ft_tolower.c)	- convert char to lowercase

### Functions from `<string.h>`

- [`ft_memset`](ft_memset.c)	- fill memory with a constant byte
- [`ft_strlen`](ft_strlen.c)	- calculate the length of a string
- [`ft_bzero`](ft_bzero.c)	- zero a byte string
- [`ft_memcpy`](ft_memcpy.c)	- copy memory area
- [`ft_memmove`](ft_memmove.c)	- copy memory area
- [`ft_strlcpy`](ft_strlcpy.c)	- copy string to an specific size
- [`ft_strlcat`](ft_strlcat.c)	- concatenate string to an specific size
- [`ft_strchr`](ft_strchr.c)	- locate character in string
- [`ft_strrchr`](ft_strrchr.c)	- locate character in string
- [`ft_strncmp`](ft_strncmp.c)	- compare two strings
- [`ft_memchr`](ft_memchr.c)	- scan memory for a character
- [`ft_memcmp`](ft_memcmp.c)	- compare memory areas
- [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string

### Functions from `<stdlib.h>`
- [`ft_atoi`](ft_atoi.c)	- convert a string to an integer

### Non-standard functions
- [`ft_substr`](ft_substr.c)	- returns a substring from a string
- [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings
- [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of string with specific set of chars
- [`ft_split`](ft_split.c)	- splits a string using a char as parameter
- [`ft_itoa`](ft_itoa.c)	- converts a number into a string
- [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string
- [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string
- [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor
- [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor
- [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor

### Linked list functions

- [`ft_lstnew`](ft_lstnew.c)	- creates a new list element
- [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element at the beginning of a list
- [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list
- [`ft_lstlast`](ft_lstlast.c)	- returns the last element of the list
- [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list
- [`ft_lstclear`](ft_lstclear.c)	- deletes and free list
- [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list
- [`ft_lstmap`](ft_lstmap.c)	- applies a function to each element of a list

---
<h2>
Usage
</h2>

### Requirements
`libft` requires a *gcc* compiler and some standard libraries.

### Instructions

Clone this repository in your local computer:

```sh
$> git clone https://github.com/caroldaniel/42sp-cursus_libft.git path/to/libft
```

In your local repository, run `make`

```sh
$> make 
```

> `make` suports 6 flags: 
> - `make all` or simply `make` compiles only the mandatory functions
> - `make bonus` compiles the bonus functions
> - `make clean` deletes the `.o` files generated during compilation
> - `make fclean` deletes the `.o` and the `libft.a` library file generated
> - `make re` executes `fclean` and `all` in sequence, recompiling the library without the bonus functions
> - `make rebonus` executes `fclean` and `bonus` in sequence, recompiling the library with the bonus functions

To use the library in your code you will need to include the header:
```c
#include "libft.h" 
```

When compiling your own code with `libft`, don't forget to use the flags:
```sh
$> ... -lft -L path/to/libft.a -I path/to/libft.h 
```
