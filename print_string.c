#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * print_percent - prints the '%' character
 * @args: unused parameter (required for prototype compatibility)
 *
 * Return: 1 (the number of characters printed)
 *
 * This function is used in a custom _printf implementation to handle
 * the '%%' format specifier. The va_list parameter is not used.
 */
int print_percent(va_list args)
{
	(void)args;

	_putchar('%');
	
	return (1);
}
