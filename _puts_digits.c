#include "main.h"

/**
 * _puts_digit - prints digits
 *
 * Description: prints digits
 *
 * @num: integer to print
 *
 * Return: return number of characters printed
 */
int _puts_digit(int num)
{
	int number_of_digits_printed, sign, index;
	char num_rev_string[15];

	number_of_digits_printed = sign = 0;

	if (num < 0)
	{
		sign = 1;
		num = -(num);
	}

	while (1)
	{
		if ((num / 10) > 0)
		{
			num_rev_string[number_of_digits_printed] = ((num % 10) + '0');
			number_of_digits_printed++;
			num /= 10;
		}
		else if ((num / 10) < 10)
		{
			num_rev_string[number_of_digits_printed] = ((num % 10) + '0');
			number_of_digits_printed++;
			if (sign)
			{
				num_rev_string[number_of_digits_printed] = '-';
				number_of_digits_printed++;
			}
			num_rev_string[number_of_digits_printed] = '\0';
			break;
		}
	}

	for (index = (number_of_digits_printed - 1); index >= 0; index--)
		_putchar(num_rev_string[index]);

	return (number_of_digits_printed);
}
