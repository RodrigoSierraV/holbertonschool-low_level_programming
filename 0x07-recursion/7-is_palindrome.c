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
 * @s: pointed string to compare
 * @leng: number of characters in s
 * @head: first characters in s
 * @count: counter of no coincidences
 * @numb: number of comparisons
 * Return: number of no coincidences
 */
int compare(char *s, int leng, int head, int count, int numb)
{
	if (head == numb)
		return (count);
	if (*(s + head) == *(s + (leng - 1)))
		count = 0;
	else
		count += 1;
	head++;
	leng--;
	return (compare(s, leng, head, count, numb));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointed string to compare
 * Return: integer
 */
int is_palindrome(char *s)
{
	int len = 0, leng = 0, head = 0, count = 0, comp = 0, numb = 0;

	leng = lenght(s, len);
	numb = leng / 2;
	comp = compare(s, leng, head, count, numb);
	if (comp == 0)
		return (1);
	else
		return (0);
}
