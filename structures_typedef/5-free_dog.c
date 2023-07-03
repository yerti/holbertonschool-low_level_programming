#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * fre_dog - function that frees dogs
 * @d: first parameter
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
