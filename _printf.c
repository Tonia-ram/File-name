#include <stdarg.h>
#include "main.h"

/**
* _printf - function that produces output according to a format.
*
* Description: function that produces output according to a format.
*
* @format: String format
*
* Return: number of characters printed
*/

int _printf(const char* format, ...)
{
    int format_position, number_of_characters_printed;
    va_list all_parameters;

    va_start(all_parameters, format);

    format_position = number_of_characters_printed = 0;

    while (format[format_position] != '\0')
    {
        if (format[format_position] == '%')
        {
            if (format[format_position + 1] == 'c')
            {
                _putchar(va_arg(all_parameters, int));
                number_of_characters_printed++;
            	format_position += 2;
            }
	    else if (format[format_position + 1] == 's')
	    {
		    number_of_characters_printed += _puts(va_arg(all_parameters, char *));
		    format_position += 2;
	    }
            else
            {
                _putchar(format[format_position]);
                number_of_characters_printed++;
                format_position++;
            }
        }
        else
        {
            _putchar(format[format_position]);
            number_of_characters_printed++;
            format_position++;
        }

    }

    va_end(all_parameters);

    return (number_of_characters_printed);
}
