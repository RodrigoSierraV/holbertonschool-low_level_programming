#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - makes a copy of the string given as a parameter.
 *
 *
 * @str: passed string to copy
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *copy;
	char len = '0';
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (len != '\0')
	{
		len = *(str + i);
		i++;
	}
	copy = malloc(i * sizeof(char));
	while (j < i)
	{
		copy[j] = str[j];
		j++;
	}
	return (copy);
}
