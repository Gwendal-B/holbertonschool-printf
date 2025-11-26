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
* Return: 1 if working, -1 if error
*/

int print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	write_int(num);
	return (1);
}
