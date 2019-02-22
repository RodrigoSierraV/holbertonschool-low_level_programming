#include "holberton.h"
#include <stdio.h>
/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @src: given string to be appended
 * Return: string
 */
char *cap_string(char *src)
{
	int srclen = 0;
	int b = 0;
	int i = 0;
	char sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125}; 

	while (*(src + srclen) != '\0')
	{
		srclen++;
	}
	for (i = 0; i < srclen; i++)
	{
		for (b = 0; b < 13; b++)
		{
			if (src[i] == sep[b] && (src[i + 1] <= 122 && src[i + 1] >= 97))
			{
				src[i + 1] = src[i + 1] - 32;
			}
		}
	}
	return (src);
}
