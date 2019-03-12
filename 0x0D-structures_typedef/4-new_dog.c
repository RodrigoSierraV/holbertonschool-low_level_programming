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
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *storename, *storeowner;
	int len1 = 0, len2 = 0, i = 0;

	for (len1 = 0; *(name + len1); len1++)
	{
	}
	for (len2 = 0; *(owner + len2); len2++)
	{
	}
	storename = malloc(len1 + 1);
	if (storename == NULL)
	{
		free(storename);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		storename[i] = name[i];
	storename[i++] = '\0';
	storeowner = malloc(len2 + 1);
	if (storeowner == NULL)
	{
		free(storeowner);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		storeowner[i] = owner[i];
	storeowner[i++] = '\0';
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
