# 🖨️ Custom _printf Function

A custom re-implementation of the standard C printf function, developed as part of the Holberton School Low-Level Programming curriculum.

# ✨ Description
**_printf** is a fully custom version of the standard C printf.
It prints formatted output to stdout using only the low-level system call write(), without relying on the standard I/O library.

This project explores:
* Parsing format strings
* Handling variadic arguments (va_list)
* Converting numbers to strings
* Building a minimal formatting engine in C
* Reproducing core behaviors of printf

The goal is to understand how formatted output works internally.

# 🛠️ Compilation

The project must be compiled with :
```c
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

# 📋 Requirements
This project follows the standard Holberton C project requirements:

- Developed and tested on **Ubuntu 20.04 LTS**

- Compiled with **GCC** and strict flags

- Git-based version control with meaningful commits

- **Betty coding style**

- No global variables

- Maximum **5 functions per file**

- All prototypes sinside **main.h** (with include guards)

- A complete **README.md** at project root

# 📦 Supported Format Specifiers

| Specifier| Meaning                                     |
|----------|---------------------------------------------|
| `%c`     | Print a single character                    |
| `%s`     | Print a string                              |
| `%%`     | Print the % symbol                          |
| `%d`     | Print a signed integer                      |
| `%i`     | Same as `%d`                                |
| `%u`     | Print an unsigned integer                   |
| `%o`     | Print an unsigned integer in octal          |
| `%x`     | Print an unsigned integer in lowercase hex  |
| `%X`     | Print an unsigned integer in uppercase hex  |
| `%p`     | Print a pointer address|

# 🧪 Examples

```c
#include "main.h"

int main(void)
{
    _printf("Hello %s!\n", "world");
    _printf("Character: %c\n", 'A');
    _printf("Percent: %%\n");
    _printf("Number: %d\n", 42);
    return (0);
}
```

# ✅ Tests performed

The following test cases were manually verified:
```
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);

    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);

    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');

    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);

    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);

    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);

    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
```
The output was compared with the standard `printf` to ensure correctness.

# 📚 Manual Page
A manual page is included:
```
man ./man_3_printf
```
# 🧩 Flowchart
![Printf Diagram](image/Diagramme.png)

# 📁 Project Structure (optional section)
```
├── _printf.c
├── _putchar.c
├── main.h
├── man_3_printf.3
├── print_char.c
├── print_hex_lower.c
├── print_hex_upper.c
├── print_int.c
├── print_octal.c
├── print_percent.c
├── print_string.c
├── write_int.c
├── .gitignore
└── README.md

```
# 👥 Authors
Georgia Boulnois - Gwendal Boisard - Fabien Cousin
Holberton / Actual Digital School
