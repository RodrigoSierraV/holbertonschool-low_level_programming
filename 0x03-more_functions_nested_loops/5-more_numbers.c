#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
int i = 0;
int b = 0;
while (i < 10)
{
while (b < 15)
{
if (b > 9)
{
_putchar(1 + '0');
}
_putchar(b % 10 + '0');
b++;
}
b = 0;
_putchar('\n');
i++;
}
}
