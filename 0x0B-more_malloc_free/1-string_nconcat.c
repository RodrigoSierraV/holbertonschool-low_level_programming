#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: passed string to concatenate
 * @s2: passed string to concatenate
 * @n: first bytes of s2 to concatenate
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *copy, len1 = '0', len2 = '0';
	unsigned int i = 0, j = 0, k = 0, l = 0;

	if (s1 == NULL)
	s1 = "";
	for (i = 0; len1 != '\0'; i++)
		len1 = *(s1 + i);
	if (s2 == NULL)
		s2 = "";
	for (j = 0; len2 != '\0'; j++)
		len2 = *(s2 + j);
	copy = malloc((i + n + 1) * sizeof(char));
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	while (k < i)
	{
		copy[k] = s1[k];
		k++;
	}
	while (k < (i + n))
	{
		copy[k] = s2[l];
		k++;
		l++;
	}
	copy[k] = '\0';
	return (copy);
}
