#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow -  splits a string into words.
 * @str: given string
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **aux;
	int i = 0, j = 0, len = 0, letters = 0, words = 0, k = 0;

	while (str[len])
	{
		if (str[len] != 32 && str[len + 1] == 32)
		words++;
		len++;
	}
	aux = (char **)malloc((words + 1) * sizeof(char *));
	len = 0;
	while (str[len])
	{
		if (str[len] != 32)
			letters++;
		if (str[len] != 32 && str[len + 1] == 32)
		{
			aux[i] = (char *)malloc((letters + 1) * sizeof(char));
			letters = 0;
			i++;
		}
		len++;
	}
	i = 0;
	while (str[k])
	{
		if (str[k] != 32)
		{
			*(*(aux + i) + j) = str[k];
			j++;
		}
		if (str[k] != 32 && str[k + 1] == 32)
		{
			*(*(aux + i) + (j + 1)) = '\0';
			i++;
			j = 0;
		}
		k++;
	}
	return (aux);
}
