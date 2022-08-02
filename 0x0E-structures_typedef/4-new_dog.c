#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: pointer to the dog's name
 * @age: dog's age
 * @owner: pointer to the dog's owner
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int nameLength, ownerLength, index;

	nameLength = 0;
	ownerLength = 0;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	for (index = 0; name[index] != '\0'; index++)
		nameLength++;
	for (index = 0; owner[index] != '\0'; index++)
		ownerLength++;

	newDog->name = malloc(sizeof(char) * (nameLength + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (index = 0; index < nameLength; index++)
		newDog->name[index] = name[index];

	newDog->age = age;

	newDog->owner = malloc(sizeof(char) * (ownerLength + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (index = 0; index < ownerLength; index++)
		newDog->owner[index] = owner[index];

	return (newDog);
}
