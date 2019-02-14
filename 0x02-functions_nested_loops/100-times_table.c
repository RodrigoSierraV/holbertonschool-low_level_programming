#include "holberton.h"
/**
 * print_times_table - prints n times tables
 * @n: given number to print tables
 */
void print_times_table(int n)
{
int i, c;
int mult;
int res, res2;
if (n < 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
_putchar(44);
for (c = 1; c <= n; c++)
{
_putchar(' ');
mult = i * c;
res = ((mult % 100) - (mult % 10)) / 10;
res2 = (mult - (mult % 100)) / 100;
if (res2 == 0)
{
_putchar(' ');
}
else
_putchar(res2 + '0');
if (res == 0 && res2 == 0)
{
_putchar(' ');
}
else
{
_putchar(res + '0');
}
_putchar(mult % 10 + '0');
if (c < n)
{
_putchar(44);
}
}
_putchar('\n');
}
}
}
