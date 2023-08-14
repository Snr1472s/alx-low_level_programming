#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 *
 * Desc: how to initialize a variable for struct
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
