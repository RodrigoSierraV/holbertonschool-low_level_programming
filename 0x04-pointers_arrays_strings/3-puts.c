#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: given string to be printed
 *
 */
void _puts(char *str)
{
	int i = 0;
	char b = *str;

	while (b != '\0')
	{
		b = *(str + i);
		_putchar(b);
		i++;
	}
	_putchar('\n');
}
