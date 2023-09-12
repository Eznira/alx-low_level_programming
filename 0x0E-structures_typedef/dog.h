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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H*/
