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
	dog_t *new_dog;
	int nameLength = 0, ownerLength = 0, index;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	for (index = 0; name[index] != '\0'; index++)
		nameLength++;
	for (index = 0; owner[index] != '\0'; index++)
		ownerLength++;

	new_dog->name = malloc(sizeof(char) * nameLength);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	for (index = 0; index < nameLength; index++)
		nameLength[index] = name[index];

	newDog->age = age;

	new_dog->owner = malloc(sizeof(char) * ownerLength);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}
	for (index = 0; index < ownerLength; index++)
		ownerLength[index] = owner[index];

	return (new_dog);
}
