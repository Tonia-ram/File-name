#include <stdarg.h>
#include "main.h"

/**
 * process_flag - processes flag
 *
 * Description: processes flag
 *
 * @specifier: cahacter specifier
 * @all_parameters: all parameters va_list
 *
 * Return: retunrs number of characters prints
 */
int process_flag(char specifier, va_list all_parameters)
{
	int number_of_characters_printed;

	number_of_characters_printed = 0;
	if (specifier == 'c')
		number_of_characters_printed += _putchar(va_arg(all_parameters, int));
	else if (specifier == 's')
		number_of_characters_printed += _puts(va_arg(all_parameters, char *));
	else if (specifier == '%')
		number_of_characters_printed += _putchar('%');

	return (number_of_characters_printed);
}

/**
 * is_flag - checks if specifer found
 *
 * Description: checks is specifier found
 *
 * @percent: character percent
 * @specifier: character specifer
 *
 * Return: 0 for false 1 for true
 */
int is_flag(char percent, char specifier)
{
	return (percent == '%' &&
			(specifier == 'c'
			|| specifier == 's'
			|| specifier == '%'));
}

/**
* _printf - function that produces output according to a format.
*
* Description: function that produces output according to a format.
*
* @format: String format
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int format_position, number_of_characters_printed;
	va_list all_parameters;

	if (format == 0)
		return (-1);
	va_start(all_parameters, format);
	format_position = number_of_characters_printed = 0;
	while (format[format_position] != '\0')
	{
		if (format[format_position] == '%' && format[format_position + 1] != '\0')
			number_of_characters_printed += process_flag(format[format_position + 1],
					all_parameters);
		if (!is_flag(format[format_position], format[format_position + 1]))
		{
			number_of_characters_printed += _putchar(format[format_position]);
			format_position++;
		}
		else
		{
			format_position += 2;
		}
	}
	va_end(all_parameters);
	return (number_of_characters_printed);
}
