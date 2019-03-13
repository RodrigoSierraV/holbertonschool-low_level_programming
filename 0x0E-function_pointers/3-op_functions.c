#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the addition.
 */
int op_add(int a, int b)
{
	int add = 0;

	add = a + b;
	return (add);
}
/**
 * op_sub - difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the difference.
 */
int op_sub(int a, int b)
{
	int diff = 0;

	diff = a - b;
	return (diff);
}
/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the multiplication.
 */
int op_mul(int a, int b)
{
	int mult = 0;

	mult = a * b;
	return (mult);
}
/**
 * op_div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the division.
 */
int op_div(int a, int b)
{
	int div = 0;

	div = a / b;
	return (div);
}
/**
 * op_mod - remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: result of the modulo.
 */
int op_mod(int a, int b)
{
	int mod = 0;

	mod = a % b;
	return (mod);
}
