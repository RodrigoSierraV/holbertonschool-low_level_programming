#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: given string tp print between numbers.
 * @n: number of aguments.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0;

	va_start(arguments, n);
	while (i < n)
	{
		printf("%d", va_arg(arguments, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	putchar('\n');
	va_end(arguments);
}
