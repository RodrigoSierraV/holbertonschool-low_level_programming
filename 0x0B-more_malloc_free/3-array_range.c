#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *numbers, i = 0, count = 0;

	if (min > max)
		return (NULL);
	count = max - min + 1;
	numbers = malloc(count * sizeof(int));
	if (numbers == NULL)
	{
		free(numbers);
		return (NULL);
	}
	while (i < count)
	{
		numbers[i] = min;
		min++;
		i++;
	}
	return (numbers);
}
