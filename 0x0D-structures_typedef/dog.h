#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - characteristics of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: name of the owner
 *
 * Description: this structure put together some characteristics of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
