#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: given array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
		if (i < n)
		printf(", ");
	}
	putchar('\n');
}
