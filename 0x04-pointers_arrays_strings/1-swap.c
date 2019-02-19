#include "holberton.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: given value to swap
 * @b: given value to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
