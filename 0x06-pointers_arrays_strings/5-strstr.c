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
	int b = 0;
	char *link = 0;
	int pos[100];
	int i, z;
	int position = 0;

	for (z = 0; z < 100; z++)
		pos[z] = 0;
	while (*(haystack + b) != ',')
		b++;
	if (*needle >= 0)
	{
		while (*(haystack + b) != '\0')
		{
			i = 0;
			while (*(needle + i) != '\0')
			{
				if (*(haystack + b) == *(needle + i))
					pos[b] = b;
				i++;
			}
			b++;
		}
	}
	else
	{
		link = 0;
	}
	for (z = 0; z < 100; z++)
	{
		if (pos[z] > 0)
		{
			position = pos[z];
			z = 100;
		}
	}
	link = &*(haystack + position);
	return (link);
}
