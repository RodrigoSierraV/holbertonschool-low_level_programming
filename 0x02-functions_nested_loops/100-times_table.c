#include "holberton.h"
/**
 * print_times_table - prints n times tables
 * @n: given number to print tables
 */
void print_times_table(int n)
{
int i;
int c;
int mult;
int res;
int res2;
if (n < 15 && n > 0)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
_putchar(44);
for (c = 1; c <= n; c++)
{
mult = i * c;
if (mult < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(mult % 10 + '0');
}
else if (mult > 10 && mult < 100)
{
res = (mult - (mult % 10)) / 10;
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
_putchar(mult % 10 + '0');
}
else
{
res = ((mult % 100) - (mult % 10)) / 10;
res2 =(mult - (mult % 100)) / 100;
_putchar(' ');
_putchar(res2 + '0');
_putchar(res + '0');
_putchar(mult % 10 + '0');
}
if (c < n)
{
_putchar(44);
}
}
_putchar('\n');
}
}
else
{
}
}
