#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: pointer to the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int rows = 0;
	int columns = 0;
	int sumdiag1 = 0;
	int sumdiag2 = 0;

	while (rows < size)
	{
		columns = 0;
		while (columns < size)
		{
			if (rows == columns)
				sumdiag1 += (*(a + rows) + columns);
			columns++;
		}
		rows++;
	}
	printf("%d, \n", sumdiag1);
}
