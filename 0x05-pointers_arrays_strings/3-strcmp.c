#include "holberton.h"
#include <stdio.h>
/**
 * *_strcmp - copies the string pointed to by src,
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: integer value that represents the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	i = *s1 - *s2;
	return (i);
}
