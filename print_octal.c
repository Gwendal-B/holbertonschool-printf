#include "main.h"

/**
 * print_octal - imprime un nombre en base octale
 * @args: liste d'arguments
 *
 * Return: nombre de caractères imprimés
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char buffer[12];
	int i = 0, len = 0;

	if (n == 0)
		buffer[i++] = '0';

	while (n > 0)
	{
		buffer[i++] = (n % 8) + '0';
		n /= 8;
	}
	while (i--)
	{
		_putchar(buffer[i]);
		len++;
	}
	return (len);
}
