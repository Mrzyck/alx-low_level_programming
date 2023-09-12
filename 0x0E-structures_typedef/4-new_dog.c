#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Entry point
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogPtr;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new_dogPtr = malloc(sizeof(dog_t));

	if (new_dogPtr == NULL)
		return (NULL);
	new_dogPtr->name = malloc(sizeof(char) * (strlen(name) + 1));
	new_dogPtr->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_dogPtr->name == NULL || new_dogPtr->owner == NULL)
	{
		free(new_dogPtr->name);
		free(new_dogPtr->owner);
		free(new_dogPtr);
		return (NULL);
	}
	strcpy(new_dogPtr->name, name);
	new_dogPtr->age = age;
	strcpy(new_dogPtr->owner, owner);
	return (new_dogPtr);
}
