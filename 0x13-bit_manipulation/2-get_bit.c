#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: given number in decimal
 * @index: number of the bit to evaluate.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bin = 0;
	unsigned int count = 0;

	for (bit = 0; bit <= 31; bit++)
	{
		bin = n >> bit & 1;
		if (count == index)
			return (bin);
		count++;
	}
	return (-1);
}
