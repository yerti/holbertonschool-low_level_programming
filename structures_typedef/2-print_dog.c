#include <stdio.h>
#include "dog.h"

/**
 *
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else if (NULL)
	{
		printf("Name: (nil)\n");
		printf("Owner: (nil)\n");
	}
}
