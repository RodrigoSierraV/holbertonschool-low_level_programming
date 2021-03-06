#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: given string to be printed
 *
 */
void puts_half(char *str)
{
	int i = 0;
	char b = *str;
	int count = 0;
	int print;

	while (b != '\0')
	{
		b = *(str + i);
		count += 1;
		i++;
	}
	count = count - 1;
	print = count % 2;
	i = 0;
	if (print == 0)
	{
		while (i < (count / 2))
		{
		_putchar(*(str + (i + (count / 2))));
		i++;
		}
	}
	else
	{
		while (i < ((count - 1) / 2))
		{
		_putchar(*(str + (i + ((count / 2) + 1))));
		i++;
		}
	}
	_putchar('\n');
}
