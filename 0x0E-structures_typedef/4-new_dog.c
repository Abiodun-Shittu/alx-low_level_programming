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
	int nameLen = 0, ownerLen = 0, index;

while (name[nameLen] != '\0')
{
nameLen++;
}
while (owner[ownerLen] != '\0')
{
ownerLen++;
}
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
free(newDog);
return (NULL);
}
newDog->name = malloc(sizeof(newDog->name) * nameLen);
if (newDog->name == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
for (index = 0; index <= nameLen; index++)
{
newDog->name[index] = name[index];
}
newDog->age = age;
newDog->owner = malloc(sizeof(newDog->owner) * ownerLen);
if (newDog->owner == NULL)
{
free(newDog->owner);
free(newDog->name);
free(newDog);
return (NULL);
}
for (index = 0; index <= ownerLen; index++)
newDog->owner[index] = owner[index];
return (newDog);
}
