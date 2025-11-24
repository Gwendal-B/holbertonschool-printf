#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * @args: arguments list
 */

int _putchar(char c);
int _printf(const char *format, ...);

print_char(va_list args);
print_string(va_list args);
print_percent(void);
print_int(va_list args);


#endif /*MAIN_H*/
