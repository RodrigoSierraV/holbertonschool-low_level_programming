#include "holberton.h"
/**
 *print_number - prints an integer
 *
 */
void print_number(int n)
{
int i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
