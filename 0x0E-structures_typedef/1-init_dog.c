#include "dog.h"
/**
 * init_dog - initialize a variable of type: struct dog
 *
 * @d: The pointer that holds the address of the struct dog to be intialized
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: stores the owner's name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d.name = name;
	d.age = age;
	d.owner = owner;
}
