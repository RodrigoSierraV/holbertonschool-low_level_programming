#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: given number in decimal to analize
 * @m: given number in decimal to analize
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit, bit_n = 0, bit_m = 0;
	unsigned int change = 0;

	for (bit = 31; bit >= 0; bit--)
	{
		bit_n = n >> bit & 1;
		bit_m = m >> bit & 1;
		if (bit_n != bit_m)
			change++;
	}
	return (change);
}
