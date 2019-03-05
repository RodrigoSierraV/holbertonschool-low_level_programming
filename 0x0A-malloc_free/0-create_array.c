#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array
 * @c: passed char to initialize the array
 * Return: ponter to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
