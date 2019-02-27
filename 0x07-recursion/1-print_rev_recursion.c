#include "holberton.h"
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointed string to print
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
