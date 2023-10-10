#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - function that frees dogs.
  *
  * @d:pointer
  *
  * Return:void
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->owner)
			free(d->owner);
		if (d->name)
			free(d->name);
		free(d);
	}
}
