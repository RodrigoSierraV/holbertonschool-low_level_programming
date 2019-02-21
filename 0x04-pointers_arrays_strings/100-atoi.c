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
	int b = 0;
	int d = 0;
	int c = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	count = i - 1;
	i = 0;
if ((s[0] == 45) && (s[1] >= 48 && s[1] <= 57))
{
	while (i <= count)
	{
		b = *(s + i) - '0';
		if (b >= 0 && b <= 9)
		{
			c = (c * 10) + b;
			d = i + 1;
			if ((*(s + d) - '0') >= 0 && (*(s + d) - '0') <= 9)
			{
			}
			else
			{
				i = count;
			}
			i++;
		}
		else
		{
			i++;
		}
	}
	return (-c);
}
else
{
	while (i <= count)
	{
	b = *(s + i) - '0';
	if (b >= 0 && b <= 9)
	{
	c = (c * 10) + b;
	d = i + 1;
	if ((*(s + d) - '0') >= 0 && (*(s + d) - '0') <= 9)
	{
	}
	else
	{
	i = count;
	}
	i++;
	}
	else
	{
	i++;
	}
}
return (c);
}
}
