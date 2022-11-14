#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - stores and holds dog info
 * @name: dog name
 * @age: dog's age in float
 * @owner: name of dog owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - function typedef struct for dog
 */

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* _DOG_H  */
