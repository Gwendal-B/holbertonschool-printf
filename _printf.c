#include "main.h"

/**
 * _printf - reproduit le comportement de printf
 * @format: chaîne contenant du texte + formats
 *
 * Return: nombre de caractères a imprimer
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(args);
			else if (format[i] == 's')
				count += print_string(args);
			else if (format[i] == '%')
				count += print_percent();
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_int(args);
			else
				return (-1);
		}
		else
			count += _putchar(format[i]);
			i++;
	}
	va_end(args);
	return (count);
}
