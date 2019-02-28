#include "holberton.h"
/**
 * endpointer - finds length of s
 * @s: pointed string to measure
 * @len: counter of characters in s
 * Return: number of characters in s
 */
int endpointer(char *s, int len)
{
	if (*s == '\0')
	{
		return (len);
	}
	s++;
	len++;
	return (endpointer(s, len));
}
/**
 * printchar - prints string s in reverse
 * @s: pointed string to print
 * @len: counter of characters in s
 *
 */
void printchar(char *s, int len)
{
	if (len < 0)
		return;
	_putchar(*(s + len));
	len--;
	printchar(s, len);
}
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointed string to print
 */
void _print_rev_recursion(char *s)
{
	int len = 0;
	int length = 0;

	length = endpointer(s, len);
	printchar(s, length);
}
