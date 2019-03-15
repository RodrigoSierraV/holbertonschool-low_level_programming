#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  sum of all its parameters.
 * @n: number of aguments.
 * Return: an int result of the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	while (i < n)
	{
		sum += va_arg(arguments, unsigned int);
		i++;
	}
	va_end(arguments);
	return (sum);
}
