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
	if (!d);
	if (!(d->name))
		printf("Name: nil");
	if (!(d->age))
		printf("Age: nil");
	if (!(d->owner))
		printf("Owner: nil");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
