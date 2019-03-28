#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: given string to convert
 * Return: unsigned int equal to a binary or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, p = 1, c = 0;
	int a = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		i++;
	}
	while (i)
	{
		i--;
		a = b[i] - '0';
		c += a * p;
		p *= 2;
	}
	return (c);
}
