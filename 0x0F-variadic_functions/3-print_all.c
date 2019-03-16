#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all -  prints anything.
 * @format: character to format the output.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int i = 0, len = 0, ifno = 0;
	char *string;

	while (format[len])
		len++;
	va_start(arguments, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				break;
			case 'i':
				printf("%d", va_arg(arguments, int));
				break;
			case 's':
				string = va_arg(arguments, char*);
				if (string == NULL)
				printf("(nil)");
				else
				printf("%s", string);
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				break;
			default:
				ifno = 1;
		}
		if (i < len - 1 && ifno == 0)
			printf(", ");
		ifno = 0;
		i++;
	}
	putchar('\n');
	va_end(arguments);
}
