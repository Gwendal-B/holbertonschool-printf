#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @args: List of arguments from _printf
 *
 * Description:
 * Converts an unsigned int into its decimal representation and
 * prints it digit by digit using _putchar. The digits are first
 * stored in reverse order in a buffer, then printed in the correct
 * order. Returns the number of characters printed.
 *
 * Return: Number of digits printed
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	unsigned int tmp = n;

	/* 10 digits max for 32-bit unsigned int + safety */
	char digits[11];

	int i = 0, len = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (tmp > 0)
	{
		digits[i] = (tmp % 10) + '0';
		tmp /= 10;
		i++;
	}

	while (i > 0)
	{
		_putchar(digits[i - 1]);
		i--;
		len++;
	}

	return (len);
}

