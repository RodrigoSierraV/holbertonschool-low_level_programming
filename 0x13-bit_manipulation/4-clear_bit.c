#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: given number in decimal
 * @index: number of the bit to evaluate.
 * Return: 1 or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit, count = 0;

	for (bit = 0; bit <= 31; bit++)
	{
		if (count == index)
		{
			*n &= ~(1 << count);
			return (1);
		}
		count++;
	}
	return (-1);
}
