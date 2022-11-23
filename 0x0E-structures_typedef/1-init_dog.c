#include "dog.h"

/**
 * init_dog - initializes a struct of type dog
 * @d: pointer to structure
 * @name: name pointer of dog
 * @age: dog age
 * @owner: pointer to owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
