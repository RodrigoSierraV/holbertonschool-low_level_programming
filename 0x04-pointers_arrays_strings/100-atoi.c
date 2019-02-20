#include "holberton.h"
#include <stdio.h>
/**
 * *_atoi - convert a string to an integer.
 * @s: given string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int count = 0;
	char b = *s;
	int ib;

	while (b != '\0')
	{
	b = *(s + i);
	count += 1;
	i++;
	}
	count = count - 1;
	i = 0;
	while (i <= count)
	{
		b = *(s + i);
		ib = b - '0';
		if (ib > 0 && ib <= 9)
		  printf("%d", ib);
		i++;
	}
	putchar('\n');
	return (0);
}
