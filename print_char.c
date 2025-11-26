#include "main.h"

/**
* print_char - prints a character
*
* Description: takes a character into parameter,
*			   then prints it in the standard output
*
* @args: Variable list of arguments
*
* Return: Always 1
*/

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
