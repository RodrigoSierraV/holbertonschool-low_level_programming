#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	array = (int **)malloc(height * sizeof(int));
	while (i < height)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		i++;
	}
	i = 0;
	if (array == NULL)
		return (NULL);
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			*(*(array + i) + j) = 0;
			j++;
		}
		i++;
	}
	return (array);
}
