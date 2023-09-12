#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Entry point
 * @d: first
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description:  a function that initialize a variable of type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
