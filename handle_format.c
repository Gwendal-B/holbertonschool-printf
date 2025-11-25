#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * handle_format - receives the main string and all necessary parameters
 * to print a formatted string.
 * @format: a string containing all desired characters
 * @checker: a list of all possible format specifier functions
 * @args: a list containing all the arguments passed to the function
 *
 * Return: total count of characters printed, or -1 on error
 */
int handle_format(const char *format, format_specifier checker[], va_list args)
{
	/*Indices pour parcourir la chaîne et le tableau checker*/
    int i, j;
	/*Nombre total de caractères imprimés*/
    int printed_chars = 0;
	/*nombre de caractères imprimés pour un seul format*/
    int printed_for_specifier;

	/* Boucle principale, elle parcourt tous les caractères de la chaîne format
	 * Vérifie à chaque caractère si c’est un % ou un caractère normal.*/
    for (i = 0; format[i] != '\0'; i++)
    {
		/*Si le caractère est %, on cherche dans checker[] le spécificateur correspondant à format[i + 1].*/
        if (format[i] == '%')
        {
            /* Si un format valide est trouvé :
			 * On appelle la fonction associée (checker[j].f(args)).
			 * On ajoute le nombre de caractères imprimés à printed_chars.
			 * On sort de la boucle checker avec break.
			*/
			for (j = 0; checker[j].spec != '\0'; j++)
            {
                if (format[i + 1] == checker[j].spec)
                {
                    printed_for_specifier = checker[j].f(args);
                    if (printed_for_specifier == -1)
                        return (-1);

                    printed_chars += printed_for_specifier;
                    break;
                }
            }

            /* Si aucun format valide n'a été trouvé */
            if (checker[j].spec == '\0' && format[i + 1] != ' ')
            {
				/* On imprime % suivi du caractère suivant pour que rien ne soit perdu.
				 * On ajoute 2 au compteur.
				 * Si % est à la fin de la chaîne (format[i + 1] == '\0'), on retourne -1.*/
                if (format[i + 1] != '\0')
                {
                    _putchar(format[i]);
                    _putchar(format[i + 1]);
                    printed_chars += 2;
                }
                else
                {
                    return (-1);
                }
            }
			/* On saute le caractère du format après %, pour éviter de le traiter à nouveau.*/
            i++; 
        }
        else
		/* Si ce n’est pas %, le caractère est imprimé directement.
		 * On incrémente le compteur.*/
        {
            _putchar(format[i]);
            printed_chars++;
        }
    }

    return (printed_chars);
}
