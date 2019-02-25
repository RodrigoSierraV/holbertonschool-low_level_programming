#include "holberton.h"
/**
 * print_times_table - prints n times tables
 * @n: given number to print tables
 */
void print_times_table(int n)
{
int i = 0;
int c = 1;
int res, res2;
if (n == 0)
{
_putchar('0');
}
if (n <= 15 && n > 0)
{
while (i <= n)
{
_putchar('0');
_putchar(44);
_putchar(' ');
res = (((i * c) % 100) - ((i * c) % 10)) / 10;
res2 = ((i * c) - ((i * c) % 100)) / 100;
if ((i * c) < 10)
{
_putchar(' ');
_putchar(' ');
}
else if ((i * c) >= 10 && (i * c) < 100)
{
_putchar(' ');
_putchar(res + '0');
}
else
{
_putchar(res2 + '0');
_putchar(res + '0');
}
_putchar((i * c) % 10 + '0');
if (c < n)
{
_putchar(44);
}
 i++;
 c++;
}
 _putchar('\n');
}
}
