#include "main.h"
#include <stdarg.h>

/**
* _printf - produces output according to a format
* @format: the format string containing characters and format specifiers
*
* Return: the number of characters printed, or -1 on error
*/
int _printf(const char *format, ...)
{
	int count;

	va_list args;

	/* Vérifie que format n'est pas NULL */
	if (format == NULL)
		return (-1);

	/* Tableau des spécificateurs et fonctions correspondantes */
	format_specifier checker[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_all_base},
		{'d', print_base_ten},
		{'\0', NULL}
	};

	/* Initialisation des arguments variables */
	va_start(args, format);

	/* Appel à handle_format pour gérer l'affichage */
	count = handle_format(format, checker, args);

	/* Libération de la liste d'arguments */
	va_end(args);

	/* Retourne le nombre de caractères imprimés */
	return (count);
}
