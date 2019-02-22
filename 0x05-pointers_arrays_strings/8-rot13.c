#include "holberton.h"
#include <stdio.h>
/**
 * *rot13 - encodes a string using rot13.
 *
 * @src: given string to convert
 * Return: string converted to rot13
 */
char *rot13(char *src)
{
	int b = 0;
	int i = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; src[i] != '\0'; i++)
	{
		for (b = 0; b < 52; b++)
		{
			if (src[i] == in[b])
			{
				src[i] = out[b];
				b = 52;
			}
		}
	}
	return (src);
}
