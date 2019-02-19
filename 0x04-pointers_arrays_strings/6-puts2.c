#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string, followed by a new line.
 * @str: given string to be printed
 *
 */
void puts2(char *str)
{
	int i = 0;
	char b = *str;
	int count = 0;

	while (b != '\0')
	{
		b = *(str + i);
		count += 1;
		i++;
	}
	count = count - 1;
	i = 0;
	while (i < count)
	{
		b = *(str + i);
		_putchar(b);
		i += 2;
	}
	_putchar('\n');
}
