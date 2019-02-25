#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 */
void main(void)
{
	int x = 1;
	int sum3 = 0;
	int sum5 = 0;
	int result = 0;

	while (x < 1024)
	{
		x *= 3;
		sum3 = sum3 + x;
	}
	x = 1;
	while (x < 1024)
	{
		x *= 5;
		sum5 = sum5 + x;
	}
	result = sum3 + sum5;
	printf("%d", result);
}
