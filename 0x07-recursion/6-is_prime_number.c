#include "holberton.h"
/**
 * findprime - returns 1 if prime, otherwise 0.
 * @n: given number
 * @i: initial prime number 2
 * @mod: modulo i of n
 * @div: division of n and i
 * Return: integer
 */
int findprime(int n, int i, int mod, int div)
{
	if (i > n)
		return (0);
	mod = n % i;
	div = n / i;
	if (mod == 0 && i < n)
		return (0);
	if (mod == 0 && div == 1)
		return (1);
	i++;
	return (findprime(n, i, mod, div));
}
/**
 * is_prime_number - returns the natural square root of a number.
 * @n: given number
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	int i = 2;
	int mod = 0;
	int div = 0;
	int prime = 0;

	if (n <= 1)
		return (0);
	prime = findprime(n, i, mod, div);
	return (prime);
}
