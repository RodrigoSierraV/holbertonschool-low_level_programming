#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: given string to be copied
 * @dest: buffer to create the copy of src
 * Return: string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int count = 0;
	char b = *src;

	while (b != '\0')
	{
	b = *(src + i);
	count += 1;
	i++;
	}
	i = 0;
	printf("%d\n%d\n", count, i);
	while (i <= count)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
