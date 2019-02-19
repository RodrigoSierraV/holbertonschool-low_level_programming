#include <stdio.h>
/**
 *main - prints the numbers from 1 to 100, followed by a new line.
 *But for multiples of three print Fizz instead of the number
 *and for the multiples of five
 *print Buzz. For numbers which are multiples of both three
 *and five print FizzBuzz.
 *Return: 0
 */
int main(void)
{
int i = 1;
int mod3;
int mod5;
while (i <= 100)
{
if (i <= 99)
{
mod3 = i % 3;
mod5 = i % 5;
if (mod3 == 0 && mod5 == 0)
{
printf("FizzBuzz ");
}
else if (mod3 == 0)
{
printf("Fizz ");
}
else if (mod5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
else
{
printf("Buzz\n");
}
i++;
}
return (0);
}
