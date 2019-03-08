#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: the size of bytes of each element
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	while (i < nmemb)
	{
		array[i] = 0;
		i++;
	}
	return ((void *)array);
}
