#include <stdio.h>
/**
 *main - prints the largest prime factor of the number 612852475143
 *
 */
int main(void)
{
long int pro = 612852475143;
long int base = 612852475143;
long int mod;
long int div;
long int i = 2;
while (i <= base)
{
mod = pro % i;
if (mod == 0)
{
div = pro / i;
if (div == 1)
{
printf("%li", i);
putchar('\n');
i = base;
}
else
{
pro = div;
}
}
else
{
i++;
}
}
return (0);
}
