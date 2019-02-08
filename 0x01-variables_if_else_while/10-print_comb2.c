#include <stdio.h>
/**
 *main - prints numbers from 00 to 99
 * Return: 0
 */
int main(void)
{
int c;
int x;
	for (c = 0; c < 10; c++)
	{
	for (x = 0; x < 10; x++)
	{
	putchar(c % 10 + '0');
	putchar(x % 10 + '0');
	if (c != 9 || x != 9)
	{
	putchar(44);
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
