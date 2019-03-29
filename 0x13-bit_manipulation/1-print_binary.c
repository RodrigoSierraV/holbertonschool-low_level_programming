#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: given number in decimal to convert
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int bit, bin = 0;

	for (bit = 63; bit >= 0; bit--)
	{
		bin = n >> bit & 1;
		if (bin == 1)
			break;
		if (bit == 0 && bin == 0)
		{
			_putchar('0');
			return;
		}
	}
	for (; bit >= 0; bit--)
	{
		bin = n >> bit & 1;
		_putchar(bin + '0');
	}
}
