#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for dog
 *
 * @name: Name of the Dog
 * @age: Age of the Dog
 * @owner: Data od the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* dog */
