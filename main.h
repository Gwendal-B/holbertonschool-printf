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

print_char(va_list args);
print_string(va_list args);
print_percent(void);
print_int(va_list args);


#endif /*MAIN_H*/
