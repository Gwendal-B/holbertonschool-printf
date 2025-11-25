#include "main.h"

/**
 * print_string - prints a string
 * @args: va_list containing the string to print
 *
 * Return: the number of characters printed
 */
int print_string(va_list args)
{
	int index;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	for (index = 0; s[index] != '\0'; index++)
	{
		_putchar(s[index]);
	}

	return (index);
}
