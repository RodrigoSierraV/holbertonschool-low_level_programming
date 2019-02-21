#include "holberton.h"
#include <stdio.h>
/**
 * *_strncat - concatenates two strings.
 * @src: given string to be appended
 * @dest: big string to aapend src
 * @n: bytes from src
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i = 0;
	char b;

	while (*(dest + destlen) != '\0')
	{
		destlen++;
	}
	for (i = 0; i < n; i++)
	{
		b = destlen + i;
		*(dest + b) = *(src + i);
	}
	b = destlen + n + 1;
	*(dest + b) = '\0';
	return (dest);
}
