#include "holberton.h"
/**
 * times_table - prints 9 times tables
 *
 */
void times_table(void)
{
int i;
int c;
int mult;
int res;
for (i = 0; i < 10; i++)
{
_putchar('0');
_putchar(44);
for (c = 1; c < 10; c++)
{
mult = i * c;
if (mult < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(mult % 10 + '0');
}
else
{
res = (mult - (mult % 10)) / 10;
_putchar(' ');
_putchar(res + '0');
_putchar(mult % 10 + '0');
}
if (c < 9)
{
_putchar(44);
}
}
_putchar('\n');
}
}
