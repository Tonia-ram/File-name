#include "main.h"

/**
 * _puts - function prints all char of a string
 *
 * Description: function prints char of a string
 *
 * @string: char pointer
 *
 * Return: the number of chars printed
 */

int _puts(char *string)
{
	int string_position;

	if (string == 0)
		string = "(null)";

	for (string_position = 0; string[string_position] != '\0'; string_position++)
		_putchar(string[string_position]);

	return (string_position);
}
