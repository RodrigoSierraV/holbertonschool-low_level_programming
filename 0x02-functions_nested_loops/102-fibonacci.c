#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
long int a = 0;
long int b = 1;
int c;
long int add;
for (c = 0; c < 50; c++)
{
add = a + b;
printf("%li", add);
a = b;
b = add;
if (c < 49)
{
printf(", ");
}
}
putchar('\n');
return (0);
}
