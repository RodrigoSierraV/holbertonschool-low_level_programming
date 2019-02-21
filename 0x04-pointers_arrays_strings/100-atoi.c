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
	unsigned int c = 0;
	int signo = 1;
	int signofinal = 1;

	while (*(s + i) != '\0')
	{
		if (s[i] == 45)
		{
			signo = signo * (-1);
			if ((s[i + 1] - '0') >= 0 && (s[i + 1] - '0') <= 9)
				signofinal = signo;
		}
		i++;
	}
	count = i - 1;
	i = 0;
	while (i <= count)
	{
		b = *(s + i) - '0';
		if (b >= 0 && b <= 9)
		{
			c = (c * 10) + b;
			d = i + 1;
			if ((*(s + d) - '0') < 0 || (*(s + d) - '0') > 9)
				i = count;
		}
		i++;
	}
	return (signofinal * c);
}
