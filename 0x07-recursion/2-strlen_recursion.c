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
 * _strlen_recursion - returns the length of a string.
 * @s: pointed string to print
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	int length = 0;

	length = endpointer(s, len);
	return (length);
}
