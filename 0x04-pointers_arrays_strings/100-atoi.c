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

	while (b != '\0')
	{
	b = *(s + i);
	count += 1;
	i++;
	}
	count = count - 1;
	i = 0;
	printf("%d\n%d\n", count, b);
	while (i <= count)
	{
		b = *(s + i);
		i++;
	}
	return (0);
}
