#include "holberton.h"
#include <stdio.h>
/**
 * *_strpbrk -  searches a string for any of a set of bytes.
 * @s: string to scan
 * @accept: substring to search in s
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if subtring in not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *link = NULL;
	int i = 0;
	int z = 0;
	int lenh = 0;
	int lend = 0;

	while (*(s + lenh) != '\0')
		lenh++;
	while (*(accept + lend) != '\0')
		lend++;
		while (i < lenh)
		{
			z = 0;
			while (z < lend)
			{
				if (*(s + i) == *(accept + z))
				{
					link = &*(s + i);
					i = lenh;
					z = lend;
				}
				z++;
			}
			i++;
		}
		return (link);
}
