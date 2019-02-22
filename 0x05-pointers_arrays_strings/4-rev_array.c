#include "holberton.h"

/**
 * reverse_array - reverses an array of integer.
 * @a: given array to be reversed
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	char x;

	n -= 1;
	while (i < n / 2)
	{
		x = *(a + i);
		*(a + i) = *(a + (n - i));
		*(a + (n - i)) = x;
		i++;
	}
}
