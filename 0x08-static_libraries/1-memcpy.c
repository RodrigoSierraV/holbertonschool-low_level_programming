#include "holberton.h"
/**
 * *_memcpy - copies memory area from src to dest.
 * @src: memory area to be copied
 * @dest: memory area to copy
 * @n: bytes to copy in dest
 * Return: pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
