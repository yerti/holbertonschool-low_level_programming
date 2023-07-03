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
	else if (d->name == NULL && d->owner == NULL)
	{
		d->name = "(nil)";
		d->owner = "(nil)";

		printf("Name: %d\n", d->name);
		printf("Owner: %d\n", d->owner);
	}
}
