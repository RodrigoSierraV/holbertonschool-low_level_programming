#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
char **malloc_ed(char *str, int words);
/**
 * strtow -  splits a string into words.
 * @str: given string
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **aux;
	int i = 0, j = 0, l = 0, words = 0, k = 0;

	if (str == NULL)
		return (NULL);
	while (str[l])
	{
		if (str[l] != 32 && str[l + 1] == 32)
		words++;
		l++;
	}
	if (words == 0)
		return (NULL);
	aux = malloc_ed(str, words);
	if (aux == NULL)
		return (NULL);
	while (str[k])
	{
		if (str[k] != 32)
		{
			*(*(aux + i) + j) = str[k];
			j++;
		}
		if (str[k] != 32 && (str[k + 1] == 32 || str[k + 1] == '\0'))
		{
			*(*(aux + i) + (j + 1)) = '\0';
			i++;
			j = 0;
		}
		k++;
	}
	*(aux + i) = NULL;
	return (aux);
}
/**
 * malloc_ed - allocates space in memory.
 * @str: given string
 * @words: amount of words in str
 * Return: pointer to an array of arrays
 */
char **malloc_ed(char *str, int words)
{
	char **aux = NULL;
	int l = 0, letters = 0, i = 0;

	aux = (char **)malloc((words + 1) * sizeof(char *));
	if (aux == NULL)
		return (NULL);
	while (str[l])
	{
		if (str[l] != 32)
			letters++;
		if (str[l] != 32 && (str[l + 1] == 32 || str[l + 1] == '\0'))
		{
			aux[i] = (char *)malloc((letters + 1) * sizeof(char));
			if (aux[i] == NULL)
			{
				while (aux[i])
				{
					free(aux[i]);
					i--;
				}
				free(aux);
				return (NULL);
			}
			letters = 0;
			i++;
		}
		l++;
	}
	return (aux);
}
