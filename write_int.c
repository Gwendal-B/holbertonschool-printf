#include "main.h"

/**
* write_int - write an integer
*
* Description : Using the write function,
* prints the integer to standard output.
*
* @n: integer to print
*
* Return: length of the sent integer
*/

int write_int(int n)
{
	int len = 0;
	char digit;

	/* Edge case : minimum int value, risk of overflow */
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}

	if (n < 0)
	{
		write(1, "-", 1);
		len++;
		n = -n;
	}

	if (n >= 10)
		len += write_int(n / 10);

	digit = (n % 10) + '0';
	write(1, &digit, 1);
	len++;

	return (len);
}
