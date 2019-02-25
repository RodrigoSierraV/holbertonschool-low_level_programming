#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: segment to assess
 * @accept: bytes to search
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	int b = 0;
	int i = 0;
	unsigned int num = 0;

	while (*(s + len) != '\0')
		len++;
	while (*(s + b) != ',')
	{
		while (*(accept + i) != '\0')
		{
			if (*(s + b) == *(accept + i))
				num += 1;
			i++;
		}
		b++;
		i = 0;
	}
	return (num);
}
