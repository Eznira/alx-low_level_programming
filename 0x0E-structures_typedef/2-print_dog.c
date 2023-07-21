#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints out the elements of the struct (d)
 *
 * @d: The pointer that holds the address of the struct dog to be printed
 *
 *
 */
void print_dog(struct dog *d)
{
	if (!d)
		printf("");
	if (!(d->name))
		printf("Name: nil");
	if (!(d->age))
		printf("Age: nil");
	if(!(d->owner))
		printf("Owner: nil");
	printf("Name: %s", d->name);
	printf("Age: %d", d->age);
	printf("Owner %s", d->owner);
}
