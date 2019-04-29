#include "holberton.h"
#include <stdio.h>
/**
 * lenght - finds length of s
 * @s: pointed string to measure
 * @len: counter of characters in s
 * Return: number of characters in s
 */
int lenght(char *s, int len)
{
	if (!*s)
		return (len);
	len++;
	s++;
	return (lenght(s, len));
}
/**
 * compare - compares characters in s
 * @s1: first pointed string to compare
 * @s2: second pointed string to compare
 * @len1: number of characters in s1
 * @comp: number of comparisons
 * @count: counter for coincidences
 * Return: number of coincidences
 */
int compare(char *s1, char *s2, int len1, int count, int comp)
{
	if (comp == len1)
		return (count);
	if (*(s1 + comp) == *(s2 + comp))
		count = 0;
	else
		count += 1;
	comp++;
	return (compare(s1, s2, len1, count, comp));
}
/**
 * wildcmp - compares two strings
 * @s1: first pointed string
 * @s2: second pointed string
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, comp = 0, count = 0;

	len1 = lenght(s1, len1);
	len2 = lenght(s2, len2);
	comp = compare(s1, s2, len1, count, comp);
	if (comp  == 0)
		return (1);
	else
		return (0);
}
