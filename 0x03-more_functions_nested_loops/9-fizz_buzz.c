#include <stdio.h>
/**
 *main - prints the numbers from 1 to 100, followed by a new line. 
 *But for multiples of three print Fizz instead of the number 
 *and for the multiples of five 
 *print Buzz. For numbers which are multiples of both three 
 *and five print FizzBuzz.
 *
 */
int main(void)
{
int i = 1;
while (i <= 100)
{
if (i <= 99)
{

printf("%d ",i);
}
else
{
printf("Fizz Buzz");
}
i++;
}
putchar('\n');
 return (0);
}
