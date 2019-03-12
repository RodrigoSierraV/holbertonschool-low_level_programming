#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name; 
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
