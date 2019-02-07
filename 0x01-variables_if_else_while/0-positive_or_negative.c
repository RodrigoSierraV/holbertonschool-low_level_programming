#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - prints a random number and says
 * if it is positive, negative or zero
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
