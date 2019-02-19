#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: given string to be printed in reverse
 *
 */
void print_rev(char *s)
{
	int i = 0;
	char b = *s;
	int count = 0;

	while (b != '\0')
	{
		b = *(s + i);
		count += 1;
		i++;
	}
	count = count - 2;
	while (count >= 0)
	{
		b = *(s + count);
		_putchar(b);
		count--;
	}
	_putchar('\n');
}
