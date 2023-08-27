#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - adds new dog
 * @name:name of dog
 * @age:age of dog
 * @owner:owner of dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, c;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->age = age;
	c = 0;
	while (name[c] != '\0')
	{
		c++;
	}
	newDog->name = malloc(sizeof(char) * (c + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i <= c; i++)
	{
		newDog->name[i] = name[i];
	}
	c = 0;
	while (owner[c] != '\0')
	{
		c++;
	}
	newDog->owner = malloc(sizeof(char) * (c + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}
	for (i = 0; i <= c; i++)
	{
		newDog->owner[i] = owner[i];
	}
	return (newDog);
}
