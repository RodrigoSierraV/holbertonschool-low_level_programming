#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
/**
 *main - prints a random number and says
 * if it is positive, negative or zero
 * Return: 0
 */
int main(void)
{
int n;
int resultado;
srand(time(0));
n = rand() - RAND_MAX / 2;
resultado = n % 10;
/* your code goes there */
	if (resultado == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, resultado);
	}
	else if (resultado > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, resultado);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, resultado);
	}
	return (0);
}
