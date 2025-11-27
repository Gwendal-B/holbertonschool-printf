#include "main.h"

/**
* ulong_to_hexlower - converts an unsigned long to lowercase hex
*					  and prints it to standard output
*
* @n: number to convert
* Return: number of characters printed
*/
int ulong_to_hexlower(unsigned long n)
{
	char buffer[25];
	char *hex = "0123456789abcdef";
	int i = 0;
	int len = 0;

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


/**
* print_pointer - prints the adress of a pointer in standard output
*
* description : takes a pointer, and prints its adress
*
* @args: variable list of arguments
*
* Return: number of characters printed
*/

int print_pointer(va_list args)
{
	int len = 0;
	void *ptr = va_arg(args, void *);
	unsigned long address;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));

	address = (unsigned long)ptr;

	len += write(1, "0x", 2);
	len += ulong_to_hexlower(address);

	return (len);
}
