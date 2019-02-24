#include "holberton.h"
/**
* print_number - prints an integer with _putchar.
* @n: given integer to print
*
*/

void print_number(int n)
{
int digitcount = n;
int digitprint = n;
int k = 1;
int i = 0;
int residuo, z;
int div;
int digit;

	while (digitcount != 0)
	{
		digitcount = (digitcount - (digitcount % 10)) / 10;
		k = k * 10;
		i++;
	}
	div = k;
	z = i;
	if (i == 0)
		_putchar('0');
	if (n < 0)
		digitprint = -n;
	while (z > 0)
	{
		div /= 10;
		residuo = digitprint % div;
		digit = (digitprint - residuo) / div;
		digitprint = residuo;
		if (n < 0 && z == i)
			_putchar('-');
		_putchar(digit + '0');
		z--;
	}
}
