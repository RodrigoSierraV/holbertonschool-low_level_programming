#include <stdio.h>
/**
 *main - prints single digit numbers of base 10 with putchar
 * Return: 0
 */
int main(void)
{
int c;
	for (c = 0; c < 10; c++)
	{
	putchar(c % 10 + '0');
	}
	putchar('\n');
	return (0);
}
