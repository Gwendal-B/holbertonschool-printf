#include "main.h"

/**
* print_int - Prints an integer
*
* Description: prints integers from the va_list args,
* then returns the success code. If the list is empty,
* it returns the error code.
*
* @args: list of variables to print
*
* @count: integer, amount of integers to print
*
* Return: 0 if working, -1 if error
*/

int print_int(va_list args)
{
	int count = va_arg(args, int);
	int i;
	int num;

	if (count <= 0)
	{
		return (-1);
	}

	for (i = 0; i < count; i++)
	{
		num = va_arg(args, int);
		write_int(num);
	}
	return (0);
}
