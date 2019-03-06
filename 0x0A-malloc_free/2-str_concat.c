#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: passed string to concatenate
 * @s2: passed string to concatenate
 * Return: a pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *copy, len1 = '0', len2 = '0';
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
	{
		s1 = "";
		i = 1;
	}
	else
	{
		for (i = 0; len1 != '\0'; i++)
			len1 = *(s1 + i);
	}
	if (s2 == NULL)
	{
		s2 = "";
		j = 0;
	}
	else
	{
		for (j = 0; len2 != '\0'; j++)
			len2 = *(s2 + j);
	}
	copy = malloc((i + j) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (k < (i - 1))
	{
		copy[k] = s1[k];
		k++;
	}
	while (k < ((i - 1) + j)
	{
		copy[k] = s2[l];
		k++;
		l++;
	}
	return (copy);
}
