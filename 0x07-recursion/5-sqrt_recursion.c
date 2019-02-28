#include "holberton.h"
/**
 * findroot - returns the natural square root of a number.
 * @n: given number
 * @base: initial value to find the root
 * @times: Multiplication of base times base
 * Return: integer
 */
int findroot(int n, int base, int times)
{
	times = base * base;
	if (times == n)
		return (base);
	if (times > n)
		return (-1);
	base++;
	return (findroot(n, base, times));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: given number
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int base = 0;
	int times = 0;
	int root = 0;

	if (n < 0)
		return (-1);
	root = findroot(n, base, times);
	return (root);
}
