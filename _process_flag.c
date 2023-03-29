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
	else if (specifier == 'd' || specifier == 'i')
		number_of_characters_printed += _puts_digit(va_arg(all_parameters, int));

	return (number_of_characters_printed);
}
