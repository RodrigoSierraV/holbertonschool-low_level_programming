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
	for (c = 0; c < 10; c = c + 1)
	{
	for (x = 1; x < 10; x = x + 1)
	{
	for (y = 2; y < 10; y = y + 1)
	{
	if (y > x && x > c)
	{
	putchar(c % 10 + '0');
	putchar(x % 10 + '0');
	putchar(y % 10 + '0');
	if (c != 7 || x != 8 || y != 9)
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
	putchar('\n');
	return (0);
}
