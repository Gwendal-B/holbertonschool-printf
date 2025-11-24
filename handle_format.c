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
  int i, j, r_val, printed_chars;

  printed_chars = 0;

  for (i = 0; format[i] != '\0'; i++)
  {
    if (format[i] == '%')
    {
      for (j = 0; checker[j].spec != '\0'; j++)
      {
        if (format[i + 1] == checker[j].spec)
        {
          r_val = checker[j].f(args);
          if (r_val == -1)
            return (-1);
          printed_chars += r_val;
          break;
        }
      }
      if (checker[j].spec == '\0' && format[i + 1] != ' ')
      {
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
      i++;
    }
    else
    {
      _putchar(format[i]);
      printed_chars++;
    }
  }
  return (printed_chars);
}

