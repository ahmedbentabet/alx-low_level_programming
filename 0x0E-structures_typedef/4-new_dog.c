#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog structure with given values
 * @name: Pointer to the name of the new dog
 * @age: Age of the new dog
 * @owner: Pointer to the owner's name of the new dog
 *
 * Return: Pointer to the new dog structure (dog_t)
 * or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	int name_len = 0;
	int owner_len = 0;

	while (name[name_len] != '\0')
		name_len++;

	while (owner[owner_len] != '\0')
		owner_len++;

	new_dog->name = malloc(name_len + 1);
	new_dog->owner = malloc(owner_len + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (int i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];

	for (int i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;

	return (new_dog);
}
