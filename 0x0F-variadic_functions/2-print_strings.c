#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: given string to print between strings.
 * @n: number of aguments.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0;
	char *string;

	if (n == 0)
		return;
	va_start(arguments, n);
	while (i < n)
	{
		string = va_arg(arguments, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	putchar('\n');
	va_end(arguments);
}
