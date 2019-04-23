#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the allocated memory to expand
 * @old_size: the size of the memory pointed by ptr
 * @new_size: the new size to allocate in memory
 * Return: a pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *real, *copy = (char *)ptr;
	int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	real = malloc(new_size);
	if (!ptr)
		return (real);
	while (copy[i])
	{
		real[i] = copy[i];
		i++;
	}
	real[i] = '\0';
	free(ptr);
	return (real);
}
