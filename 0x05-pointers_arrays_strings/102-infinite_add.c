#include "holberton.h"
#include <stdio.h>
char *reverse_array2(char *r);
/**
 * infinite_add - check the code for Holberton School students.
 * @n1: array with first number
 * @n2: array with second number
 * @r: buffer to store the result
 * @size_r: size of the buffer
 * Return: a pointer to r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, add = 0, div = 0, i = 0, great = 0;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	len1--;
	len2--;
	if ((len1 - len2) > 0)
		great = len1;
	else
	great = len2;
	if (size_r - 1 < great + 2)
		return (0);
	while (great >= 0)
	{
		if (len1 >= 0 && len2 >= 0)
		add = (n1[len1] - '0') + (n2[len2] - '0') + div;
		if (len1 < 0 && len2 >= 0)
		add = (n2[len2] - '0') + div;
		if (len2 < 0 && len1 >= 0)
		add = (n1[len1] - '0') + div;
		r[i] = (add % 10) + '0';
		div = add / 10;
		len1--;
		len2--;
		i++;
		great--;
	}
	if (div > 0)
	{
		r[i] = div + '0';
		r[i + 1] = '\0';
	}
	else
		r[i] = '\0';
	return (reverse_array2(r));
}
/**
 * reverse_array2 - reverses an array of char.
 * @r: given array to be reversed
 * Return: pointer to r
 */
char *reverse_array2(char *r)
{
	int i = 0, len = 0;
	char x;

	while (r[len])
	len++;
	len--;
	while (i < len / 2)
	{
		x = *(r + i);
		*(r + i) = *(r + (len - i));
		*(r + (len - i)) = x;
		i++;
	}
	return (r);
}
