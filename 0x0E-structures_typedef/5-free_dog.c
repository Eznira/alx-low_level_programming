#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t structure
 * @d: Pointer to the dog_t structure to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	/* Free the memory allocated for the name and owner */
	free(d->name);
	free(d->owner);

	/* Free the memory allocated for the dog structure */
	free(d);
}
