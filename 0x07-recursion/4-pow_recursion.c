#include "holberton.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y.
 * @x: base number
 * @y: power number
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
