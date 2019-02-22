#include "holberton.h"
#include <stdio.h>
/**
 * *leet - encodes a string into 1337.
 *
 * @src: given string to be appended
 * Return: string converted to leet
 */
char *leet(char *src)
{
	int b = 0;
	int i = 0;
	char sep[] = {65, 69, 76, 79, 84, 97, 101, 108, 111, 116};
	char leet[] = {52, 51, 49, 48, 55, 52, 51, 49, 48, 55};

	for (i = 0; src[i] != '\0'; i++)
	{
		for (b = 0; b < 10; b++)
		{
			if (src[i] == sep[b])
			{
				src[i] = leet[b];
			}
		}
	}
	return (src);
}
