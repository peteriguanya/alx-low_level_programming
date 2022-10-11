#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int ab, cd, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (ab = 0; name[ab]; ab++)
		;
	ab++;
	dog->name = malloc(ab * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ab; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (cd = 0; owner[cd]; cd++)
		;
	cd++;
	dog->owner = malloc(cd * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < cd; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
