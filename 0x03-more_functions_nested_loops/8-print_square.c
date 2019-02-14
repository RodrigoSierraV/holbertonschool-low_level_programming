#include "holberton.h"
/**
 *print_square - prints a square in terminal with #.
 *@size: size of the square
 */
void print_square(int size)
{
int i = 0;
int s = 0;
if (size > 0)
{
while (i < size)
{
while (s < size)
{
_putchar('#');
s++;
}
s = 0;
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
