#include <stdio.h>
/**
 *main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
int c;
int x;
	for (c = 0; c < 10; c = c + 1)
	{
	for (x = 1; x < 10; x = x + 1)
	{
	if (x > c)
	{
	putchar(c % 10 + '0');
	putchar(x % 10 + '0');
	if (c != 8 || x != 9)
	{
	{
	putchar(44);
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
