# Libft

**Libft** involves implementing usual standard C library functions as well as other utility functions that are highly usable.

## Table of Contents

- [Introduction](#introduction)
- [How to Use](#how-to-use)
- [Example Usages](#example-usages)
- [Examples](#examples)
- [License](#license)

## Introduction

**Libft** is a custom C library that provides a collection of usual standard C library functions and additional utility functions. These functions are designed to be highly usable in your C projects, making them more efficient and allowing you to work with ease.

1. Libc Functions:

These are a set of the libc functions that have been recoded.

You can go to **https://man.freebsd.org/cgi/man.cgi** for detailed manual pages of the original form of these functions.

On this page, you can search for these functions by typing their original names, such as 'isalpha' (not 'ft_').

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_strlen
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_strlcpy
- ft_strlcat
- ft_toupper
- ft_tolower
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_memchr
- ft_memcmp
- ft_strnstr
- ft_atoi
- ft_calloc
- ft_strdup

2. These are additional functions that are either not included in the libc.

For a detailed explanation, refer to: [Examples for Additional Functions](#examples-for-additional-functions)

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

3. BONUS functions.

For a detailed explanation, refer to: [Examples for Bonus Functions](#examples-for-bonus-functions)

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## How to Use

1. Clone the repository to your local machine:
   
   ```sh
   git clone https://github.com/ggulteki/Libft.git

2. Compile the ft_printf source code to build the libftprintf.a library:
    
    ```sh
    make

3. You can now use the **libft.a** library in your C projects. Remember to include the necessary header files.

4. If you want to remove object files and intermediate build artifacts, use the following command:
    
    ```sh
    make clean
  
5. If you want to remove all build artifacts, including the libft.a library, use:
    
    ```sh
    make fclean

6. To rebuild the libft.a library from scratch, use:
    
    ```sh
    make re

7. To build bonus functions, use:

    ```sh
    make bonus

8. Now you're ready to use and work with the libft library.

## Example Usages:

To get started with using the **Libft** library, follow these steps to create a sample program:

1. Create a new file called `example.c` in your project directory.

2. In `example.c`, include the `libft.h` header file to use the library's functions. Your program might look like this:

```c
#include "libft.h"

int main(void)
{
    char *str1 = "Hello, ";
    char *str2 = "world!";
    char *result = ft_strjoin(str1, str2);
    if (result)
    {
        printf("Concatenated string: %s\n", result);
        free(result);
    }
    return 0;
}
```
3. Now, compile your 'example.c' program along with the 'libft.a' library using GCC:
    ```sh
    gcc example.c libft.a -o example

4. Run your compiled program:
    ```sh
    ./example
    
5. You should see the output in the terminal, demonstrating the use of Libft's functions in our program. This example showcases the creation of a simple program using Libft and compiling it with the library.

## Examples

- [Examples for Additional Functions](#examples-for-additional-functions)

- [Examples for Bonus Functions](#examples-for-bonus-functions)

## Examples for Additional Functions:

- ft_substr:

Returns a new substring from the given string s, starting at the start index and with a maximum length of len.

Example:

```c
#include "libft.h"

int main(void)
{
    char *original = "This is a sample string";
    char *substring = ft_substr(original, 5, 7);
    if (substring)
    {
        printf("Substring: %s\n", substring);
        free(substring);
    }
    return 0;
}
```

- ft_strjoin:

Concatenates two strings s1 and s2 into a new string.

Example:

```c
#include "libft.h"

int main(void)
{
    char *str1 = "Hello, ";
    char *str2 = "world!";
    char *result = ft_strjoin(str1, str2);
    if (result)
    {
        printf("Concatenated string: %s\n", result);
        free(result);
    }
    return 0;
}
```

- ft_strtrim:

Trims leading and trailing characters from string s1 that match any character in the set string.

Example:

```c
#include "libft.h"

int main(void)
{
    char *str = "  Trim this string  ";
    char *trimmed = ft_strtrim(str, " ");
    if (trimmed)
    {
        printf("Trimmed string: %s\n", trimmed);
        free(trimmed);
    }
    return 0;
}
```

- ft_split:

Splits string s into an array of substrings using the character c as the delimiter.

Example:

```c
#include "libft.h"

int main(void)
{
    char *str = "Split,this,string,by,comma";
    char **splitted = ft_split(str, ',');
    if (splitted)
    {
        for (int i = 0; splitted[i]; i++)
        {
            printf("Token %d: %s\n", i, splitted[i]);
            free(splitted[i]);
        }
        free(splitted);
    }
    return 0;
}
```

- ft_itoa:

Converts an integer n into a string representation.

Example:

```c
#include "libft.h"

int main(void)
{
    int number = 42;
    char *str = ft_itoa(number);
    if (str)
    {
        printf("Integer to string: %s\n", str);
        free(str);
    }
    return 0;
}
```

- ft_strmapi:

Applies the function f to each character in string s along with its index.

Example:

```c
#include "libft.h"

char apply_function(unsigned int i, char c)
{
    return (i % 2 == 0) ? toupper(c) : tolower(c);
}

int main(void)
{
    char *str = "This is an example string.";
    char *result = ft_strmapi(str, apply_function);
    if (result)
    {
        printf("Modified string: %s\n", result);
        free(result);
    }
    return 0;
}
```

- ft_striteri:

Applies the function f to each character in the string s along with its index.

Example:

```c
#include "libft.h"

void iterate_function(unsigned int i, char *c)
{
    if (*c == ' ')
        *c = '_';
}

int main(void)
{
    char str[] = "Replace spaces with underscores.";
    ft_striteri(str, iterate_function);
    printf("Modified string: %s\n", str);
    return 0;
}
```

- ft_putchar_fd:

Writes a character c to the specified file descriptor fd.

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putchar_fd('A', 1);
    return 0;
}
```

- ft_putstr_fd:

Writes a string s to the specified file descriptor fd.

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, world!", 1);
    return 0;
}
```

- ft_putendl_fd:

Writes a string s followed by a newline character to the specified file descriptor fd.

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("A new line will be printed.", 1);
    return 0;
}
```

- ft_putnbr_fd:

 Writes an integer n to the specified file descriptor fd.

Example:

```c
#include "libft.h"

int main(void)
{
    int number = 12345;
    ft_putnbr_fd(number, 1);
    return 0;
}
```
## Examples for Bonus Functions:

- ft_ft_lstnew:

 Allocates and returns a new list element with the given 'content'. The 'next' pointer is set to NULL.

Example:

```c
#include "libft.h"

int main(void)
{
    t_list *new_element = ft_lstnew("New element content");
    if (new_element)
    {
        printf("New element content: %s\n", (char *)new_element->content);
        free(new_element);
    }
    return 0;
}
```

- ft_lstadd_front:

 Adds the element 'new' to the front of the list 'lst'.

Example:

```c
#include "libft.h"

int main(void)
{
    t_list *list = ft_lstnew("Second element");
    t_list *new_element = ft_lstnew("New element");

    ft_lstadd_front(&list, new_element);

    t_list *current = list;
    while (current)
    {
        printf("List element: %s\n", (char *)current->content);
        current = current->next;
    }

    ft_lstclear(&list, free); // Free the list
    return 0;
}
```

- ft_lstsize:

 Counts the number of elements in the list 'lst'.

Example:

```c
#include "libft.h"

int main(void)
{
    t_list *list = ft_lstnew("First element");
    t_list *new_element = ft_lstnew("Second element");
    ft_lstadd_front(&list, new_element);

    int size = ft_lstsize(list);
    printf("List size: %d\n", size);

    ft_lstclear(&list, free);
    return 0;
}
```

- ft_lstlast:

 Returns the last element of the list 'lst'.

Example:

```c
#include "libft.h"

int main(void)
{
    t_list *list = ft_lstnew("First element");
    t_list *new_element = ft_lstnew("Second element");
    ft_lstadd_front(&list, new_element);

    t_list *last = ft_lstlast(list);
    printf("Last element: %s\n", (char *)last->content);

    ft_lstclear(&list, free);
    return 0;
}
```

- ft_lstadd_back:

 Adds the element 'new' to the end of the list 'lst'.

Example:

```c
#include "libft.h"

int main(void)
{
    t_list *list = ft_lstnew("First element");
    t_list *new_element = ft_lstnew("Second element");
    ft_lstadd_back(&list, new_element);

    t_list *current = list;
    while (current)
    {
        printf("List element: %s\n", (char *)current->content);
        current = current->next;
    }

    ft_lstclear(&list, free); // Free the list
    return 0;
}
```

- ft_lstdelone:

 Takes as a parameter an element and frees the memory of the element's content using the function 'del'.

Example:

```c
#include "libft.h"

void custom_deleter(void *content)
{
    free(content);
}

int main(void)
{
    t_list *element = ft_lstnew(strdup("This element will be deleted."));
    ft_lstdelone(element, custom_deleter);

    printf("Element is deleted.\n");
    return 0;
}
```

- ft_lstclear:

 Deletes and frees the given element and every successor of that element, using the function 'del'.

Example:

```c
#include "libft.h"

void custom_deleter(void *content)
{
    free(content);
}

int main(void)
{
    t_list *list = ft_lstnew(strdup("First element"));
    ft_lstadd_back(&list, ft_lstnew(strdup("Second element")));

    ft_lstclear(&list, custom_deleter);

    printf("List is cleared.\n");
    return 0;
}
```

- ft_lstiter:

 Iterates the list 'lst' and applies the function 'f' to the content of each element.

Example:

```c
#include "libft.h"

void custom_function(void *content)
{
    printf("List element: %s\n", (char *)content);
}

int main(void)
{
    t_list *list = ft_lstnew("First element");
    ft_lstadd_back(&list, ft_lstnew("Second element"));

    ft_lstiter(list, custom_function);
    ft_lstclear(&list, free);
    return 0;
}
```

- ft_lstmap:

 Iterates the list 'lst' and applies the function 'f' to the content of each element, creating a new list.

Example:

```c
#include "libft.h"

void *custom_mapping(void *content)
{
    char *new_content = strdup(content);
    strupr(new_content);
    return new_content;
}

int main(void)
{
    t_list *list = ft_lstnew("first element");
    ft_lstadd_back(&list, ft_lstnew("second element"));

    t_list *new_list = ft_lstmap(list, custom_mapping, free);

    t_list *current = new_list;
    while (current)
    {
        printf("List element: %s\n", (char *)current->content);
        current = current->next;
    }

    ft_lstclear(&new_list, free);
    return 0;
}
```

## Licence

This project is open source and released under the MIT License. You are free to use, modify, and distribute it in accordance with the terms of the license.
