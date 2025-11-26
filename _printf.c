#include "main.h"

/**
 * _printf - replicates the behavior of printf
 * @format: string containing text and format specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, count = 0;

	spec_t funcs[] = {
		{'c', print_char}, {'s', print_string}, {'X', print_hex_upper},
		{'d', print_int}, {'i', print_int}, {'o', print_octal},
		{'%', print_percent}, {'x', print_hex_lower}, {'\0', NULL}
	};

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (va_end(args), -1);

			for (j = 0; funcs[j].spec; j++)
			{
				if (format[i] == funcs[j].spec)
				{
					count += funcs[j].f(args);
					break;
				}
			}
			if (!funcs[j].spec)
				count += _putchar('%') + _putchar(format[i]);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
