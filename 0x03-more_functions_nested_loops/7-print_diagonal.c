#include "holberton.h"
/**
 *print_diagonal - draws a straight line in the terminal.
 *@n: given number to print character '\'
 */
void print_diagonal(int n)
{
int i = 0;
int s = 0;
if (n > 0)
{
while (i < n)
{
while (s < i)
{
_putchar(' ');
s++;
}
s = 0;
_putchar('\\');
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}
