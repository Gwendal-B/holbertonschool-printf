#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct spec - mapping between a format specifier and its handler function
 * @spec: the format character (e.g. 'c', 's', 'd')
 * @f: pointer to the associated function
 */
typedef struct spec
{
	char spec;
	int (*f)(va_list);
} spec_t;

/* args - arguments*/
int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_percent(va_list args);
int print_octal(va_list args);
int print_hex_lower(va_list args);
int print_hex_upper(va_list args);
int print_unsigned(va_list args);
int print_pointer(va_list args);
int write_int(int n);

#endif
