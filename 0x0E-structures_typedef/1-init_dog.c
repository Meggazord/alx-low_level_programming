#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
