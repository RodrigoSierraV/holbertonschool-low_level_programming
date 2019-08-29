#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: unsorted array of integers
 * @size: unisigned int with the size of array
 * @value: integer to search in array
 * Return: index of value, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int middle = (size - 1) / 2, low = 0, high = size - 1, i;

	if (!array)
		return (-1);

	while (middle >= 1)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[middle] == value)
			return (middle);
		if (value < array[middle])
			high = middle - 1;
		else
			low = middle + 1;
		if (high >= low)
			middle = ((low + high) / 2);
		else
			return (-1);
	}
	return (-1);
}
