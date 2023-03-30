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
			|| specifier == '%'
			|| specifier == 'd'
			|| specifier == 'i'));
}
