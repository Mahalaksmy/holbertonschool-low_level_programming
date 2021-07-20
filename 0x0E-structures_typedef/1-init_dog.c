#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a structure for dog
 * @d: Variable
 * @name: Name of the Dog
 * @age: Age of the Dog
 * @owner: Data od the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
