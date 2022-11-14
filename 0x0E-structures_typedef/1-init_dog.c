#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: struct dog pointer
 * @name: dog name
 * @age: dog age in float
 * @owner: dog owner's name
 *
 * Return: some pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
