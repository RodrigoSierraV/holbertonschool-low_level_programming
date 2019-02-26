#include "holberton.h"
#include <stdio.h>
/**
 * *_strspn -  gets the length of a prefix substring.
 * @s: string to scan
 * @accept: substring to search in s
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int z = 0;
	int lenh = 0;
	int lend = 0;
	int sum = 0;

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
					sum += 1;
				}
				z++;
			}
			if (sum < i)
			  break;
			i++;
		}
		return (sum);
}
