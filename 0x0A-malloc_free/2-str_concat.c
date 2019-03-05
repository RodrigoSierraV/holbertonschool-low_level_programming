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
	char *copy;
	char len1 = '0';
	char len2 = '0';
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int l = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (len1 != '\0')
	{
		len1 = *(s1 + i);
		i++;
	}
	while (len2 != '\0')
	{
		len2 = *(s2 + j);
		j++;
	}
	copy = malloc((i + j) * sizeof(char));
	while (k < (i - 1))
	{
		copy[k] = s1[k];
		k++;
	}
	while (k < (i + j))
	{
		copy[k] = s2[l];
		k++;
		l++;
	}
	return (copy);
}
