#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct spec - correspondance entre un format et une fonction
 * @spec: le caractère du format (ex : 'c', 's', 'd')
 * @f: pointeur vers la fonction associée
 */
typedef struct spec
{
	char spec;
	int (*f)(va_list);
} spec_t;

/*args = arguments*/
int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list args);
int print_percent(va_list args);

/**
 * struct format_specifier - associates a format character with a function
 *
 * @spec: the format specifier character, e.g., 'c', 's', '%'
 * @f: pointer to the function that handles this format
 */
typedef struct format_specifier
{
	char spec;
	int (*f)(va_list);
} format_specifier;

/* Function prototype to convert the format string */
int convertion(const char *format, format_specifier checker[], va_list parameter);

print_char(va_list args);
print_string(va_list args);
print_percent(void);
print_int(va_list args);


#endif /*MAIN_H*/
