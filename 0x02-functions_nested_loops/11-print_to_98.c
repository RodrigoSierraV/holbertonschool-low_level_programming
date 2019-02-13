#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: given number
 */
#include "holberton.h"
void print_to_98(int n)
{
int c;
if (n > 98)
{
for (c = n; c >= 98; c--)
{
printf("%d", c);
if (c > 98)
{
printf(", ");
}
}
}
else
{
for (c = n; c <= 98; c++)
{
printf("%d", c);
if (c < 98)
{
printf(", ");
}
}
}
putchar('\n');
}
