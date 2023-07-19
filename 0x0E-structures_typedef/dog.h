#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains info about dog object
 *
 * @name: The name of the dog
 * @age: The dog's name
 * @owner: Owner's name.
 *
 * Description - A dog struct conatianing info about the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H*/
