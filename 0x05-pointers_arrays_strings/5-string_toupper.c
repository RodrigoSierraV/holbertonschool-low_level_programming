#include "holberton.h"
#include <stdio.h>
/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @src: given string to be appended
 * Return: string
 */
char *string_toupper(char *src)
{
	int srclen = 0;
	int i = 0;

	while (*(src + srclen) != '\0')
	{
		srclen++;
	}
	for (i = 0; i < srclen; i++)
	{
		if (*(src + i) >= 97 && *(src + i) <= 122)
		{
			*(src + i) = *(src + i) - 32;
		}
	}
	return (src);
}
