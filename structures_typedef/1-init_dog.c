#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

