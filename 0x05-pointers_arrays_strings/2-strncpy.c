#include "holberton.h"
#include <stdio.h>
/**
 * *_strncpy - copies the string pointed to by src,
 * @src: given string to be copied
 * @dest: buffer to create the copy of src
 * @n: size of src
 * Return: string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	
	for (i = 0; i < n; i++)
	{
		if (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
		}
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
