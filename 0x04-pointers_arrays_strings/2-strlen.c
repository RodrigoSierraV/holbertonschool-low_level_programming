#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: given string to be counted
 * Return: length of the string s
 */
int _strlen(char *s)
{
	int i = 1;
	char b = *s;
	int count = 0;

	while (b != '\0')
	{
		b = *(s + i);
		count += 1;
		i++;
	}
	return (count);
}
