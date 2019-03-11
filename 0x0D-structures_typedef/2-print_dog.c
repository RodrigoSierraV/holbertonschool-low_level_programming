#include <stdio.h>
#include "dog.h"

/**
 * print_dog - initialize a variable of type struct dog
 * @d: pointer to struct
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	if ((*d).age == 0)
	{
		printf("Name: %s\nAge: (nil)\nOwner: %s\n", (*d).name, (*d).owner);
		return;
	}
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
