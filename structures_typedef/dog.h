#ifndef _dog_h_
#define _dog_h_
#include <stdio.h>

/**
 * struct dog - function containing a structure
 * @name: name the dog
 * @age: how old is the dog
 * @owner: owner the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* dog.h */
