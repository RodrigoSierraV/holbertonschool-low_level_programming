#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: pointer to newdog, type dog_t
 */
void free_dog(dog_t *d)
{
	free(d);
}
