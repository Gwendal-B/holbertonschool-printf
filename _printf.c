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
  
  format_specifier checker[] = {
    {'c', print_char},
    {'s', print_string},
    {'%', print_percent},
    {'i', print_all_base},
    {'d', print_base_ten},
    {'\0', NULL} 
};

  if (format == NULL)
    return (-1);

  va_start(args, format);

  count = handle_format(format, checker, args);
  
  va_end(args);

  return (count);
}


