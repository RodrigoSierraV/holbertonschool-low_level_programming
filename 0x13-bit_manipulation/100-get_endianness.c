#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int endianness = 1;

	if (*(char *)&endianness == 1)
		return (1);
	else
		return (0);
}
