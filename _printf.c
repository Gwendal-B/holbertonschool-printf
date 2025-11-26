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
		{'c', print_char}, {'s', print_string},
		{'p', print_pointer}, {'d', print_int},
		{'i', print_int}, {'o', print_octal},
		{'x', print_hex_lower}, {'X', print_hex_upper},
		{'u', print_unsigned}, {'%', print_percent},
		{'\0', NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			/* ERROR FIX: % alone → invalid */
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}

			/* Search specifier */
			for (j = 0; funcs[j].spec != '\0'; j++)
			{
				if (format[i] == funcs[j].spec)
				{
					count += funcs[j].f(args);
					break;
				}
			}

			/* Unknown specifier: print % + char */
			if (funcs[j].spec == '\0')
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (count);
}
