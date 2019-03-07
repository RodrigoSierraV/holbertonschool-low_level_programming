#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: amount of bytes to be allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *create;

	create = malloc(b);
	if (create == NULL)
		exit(98);
	return (create);
}
