#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name of the dog
 *
 * Return: Pointer to the newly created dog_t structure or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0, i;

	/* Calculate the length of the name and owner */
	while (name[name_len] != '\0')
		name_len++;
	while (owner[owner_len] != '\0')
		owner_len++;

	/* Allocate memory for the new dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner copies */
	name_copy = malloc(sizeof(char) * (name_len + 1));
	owner_copy = malloc(sizeof(char) * (owner_len + 1));

	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	/* Copy the name and owner to the new memory locations */
	for (i = 0; i <= name_len; i++)
		name_copy[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		owner_copy[i] = owner[i];

	/* Assign values to the new dog structure */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
