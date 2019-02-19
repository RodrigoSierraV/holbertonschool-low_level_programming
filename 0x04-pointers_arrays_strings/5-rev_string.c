#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: given string to be reversed
 *
 */
void rev_string(char *s)
{
	int i = 0;
	char b = *s;
	int count = 0;
	char x;

	while (b != '\0')
	{
		b = *(s + i);
		count += 1;
		i++;
	}
	count = count - 2;
	i = 0;
	while (i <= count / 2)
	{
		x = *(s + i);
		*(s + i) = *(s + (count - i));
		*(s + (count - i)) = x;
		i++;
	}
}
