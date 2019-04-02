#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: buffer to print.
 * @size: number of bytes to print
 * Return: Nothing.
 */
void print_buffer(char *b, int size)
{
	int a = 0, c = 0, byte = 0, d = 0;

	if (size <= 0 || b == NULL)
	{
		printf("\n");
		return;
	}
	while (c < 10 && a < size)
	{
		if (c == 0)
		{
			printf("%08x: ", a);
			d = 0;
			for (byte = a; d < 10; byte++)
			{
				if (d > 0 && d % 2 == 0)
					printf(" ");
				if (byte >= size)
					printf("  ");
				else
					printf("%02x", *(b + byte));
				d++;
			}
			printf(" ");
		}
		if (*(b + a) < 32 || *(b + a) > 126)
			printf(".");
		else
			printf("%c", *(b + a));
		c++;
		if (c == 10)
		{
			c = 0;
			printf("\n");
		}
		a++;
	}
	if (c != 0)
		printf("\n");
}
