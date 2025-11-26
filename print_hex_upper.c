#include "main.h"

/**
 * print_hex_upper - prints an unsigned int in uppercase hexadecimal
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char buffer[12];
	char *hex = "0123456789ABCDEF";
	int i = 0, len = 0;

	if (n == 0)
		buffer[i++] = '0';

	while (n > 0)
	{
		buffer[i++] = hex[n % 16];
		n /= 16;
	}

	while (i--)
	{
		_putchar(buffer[i]);
		len++;
	}

	return (len);
}
