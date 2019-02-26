#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr -  searches a string for any of a set of bytes.
 * @haystack: string to scan
 * @needle: substring to search in haystack
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if subtring in not found
 */
char *_strstr(char *haystack, char *needle)
{
	int sum = 0;
	char *link = 0;
	int i = 0;
	int z = 0;
	int lenh = 0;
	int lend = 0;

	while (*(haystack + lenh) != '\0')
		lenh++;
	while (*(needle + lend) != '\0')
		lend++;
		while (i < (lenh - lend + 1))
		{
			z = 0;
			sum = 0;
			while (z < lend)
			{
				if (*(haystack + (i + z)) == *(needle + z))
					sum += 1;
				if (sum == lend)
				{
					link = &*(haystack + i);
					i = lenh;
					z = lend;
				}
				z++;
			}
			i++;
		}
		return (link);
		if (sum != lend)
			return (0);
}
