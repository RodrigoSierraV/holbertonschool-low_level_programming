#include <stdio.h>
/**
 *main - prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
int c;
int x;
int y;
int z;
	for (z = 0; z < 10; z = z + 1)
	{
	for (c = 0; c < 10; c = c + 1)
	{
	for (x = 0; x < 10; x = x + 1)
	{
	for (y = 0; y < 10; y = y + 1)
	{
	if (((x * 10) + y) > ((z * 10) + c))
	{
	putchar(z % 10 + '0');
	putchar(c % 10 + '0');
	putchar(' ');
	putchar(x % 10 + '0');
	putchar(y % 10 + '0');
	if (z != 9 || c != 8 || x != 9 || y != 9)
	{
	{
	putchar(44);
	putchar(' ');
	}
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
