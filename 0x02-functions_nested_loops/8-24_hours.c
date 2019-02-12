#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: last digit
 */
void jack_bauer(void)
{
int c;
int x;
int y;
int z;
for (z = 0; z < 3; z = z + 1)
{
for (c = 0; c < 10; c = c + 1)
{
for (x = 0; x < 6; x = x + 1)
{
for (y = 0; y < 10; y = y + 1)
{
if (((z * 10) + c) < 24)
{
_putchar(z % 10 + '0');
_putchar(c % 10 + '0');
_putchar(58);
_putchar(x % 10 + '0');
_putchar(y % 10 + '0');
_putchar('\n');
}
}
}
}
}
}
