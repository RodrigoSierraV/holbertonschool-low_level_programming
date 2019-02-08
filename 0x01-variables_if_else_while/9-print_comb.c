#include <stdio.h>
/**
 *main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
int c;
	for (c = 0; c < 10; c++)
	{
	putchar(c % 10 + '0');
	if (c != 9)
	{
	putchar(44);
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
