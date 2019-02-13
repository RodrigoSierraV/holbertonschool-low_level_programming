#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 * @a: first number of the serire
 * @b: second second number of the serie
 * Return: 0
 */
int main(void)
{
unsigned long int  a = 0;
unsigned long int  b = 1;
int c;
for (c = 0; c < 50; c++)
{
unsigned long int add = a + b;
printf("%lu, ", add);
a = b;
b = add;
}
putchar('\n');
return (0);
}
