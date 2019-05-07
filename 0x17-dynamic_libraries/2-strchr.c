#include "holberton.h"
/**
 * *_strchr -  locates a character in a string.
 * @s: string to scan
 * @c: character to search in s
 *
 * Return:  pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int b = 0;
	char *link = 0;

	while (*(s + i) != '\0')
		i++;

	if (c >= 0)
	{
		while (b <= i)
		{
			if (*(s + b) == c)
			{
				link = &*(s + b);
				b = i + 1;
			}
			else
			{
				b++;
			}
		}
	}
	else
	{
		link = 0;
	}
	return (link);
}
