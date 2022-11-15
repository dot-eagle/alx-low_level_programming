#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * new_dog - creates a new dog
 * @name: dog
 * @age: float
 * @owner: paw claw
 *
 * Return: NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int z, new_name, new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL || !name || !owner)
	{
		free(new_dog);
		return (NULL);
	}

	for (new_name = 0 ; name[new_name] ; new_name++)
	{
	}
	for (new_owner = 0 ; owner[new_owner] ; new_owner++)
	{
	}

	new_dog->name = malloc(new_name + 1);
	new_dog->owner = malloc(new_owner + 1);

	if (!new_dog->name || !new_dog->owner)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (z = 0; z < new_name; z++)
		new_dog->name[z] = name[z];
	new_dog->name[z] = '\0';
	new_dog->age = age;

	for (z = 0; z < new_owner; z++)
		new_dog->owner[z] = owner[z];
	new_dog->owner[z] = '\0';

	return (new_dog);
}
