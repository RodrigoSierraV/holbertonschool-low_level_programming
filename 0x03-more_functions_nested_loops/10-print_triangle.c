#include "holberton.h"
/**
 *print_triangle - prints a triangle in the terminal.
 *@size: size of the triangle
 */
void print_triangle(int size)
{
int i = 0;
int s = 1;
int p = 0;
if (size > 0)
{
while (i < size)
{
while (s < (size - i))
{
_putchar(' ');
s++;
}
s = 1;
while (p < (i + 1))
{
_putchar('#');
p++;
}
p = 0;
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
