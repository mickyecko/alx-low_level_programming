#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog to free
 * Author: Michael Owoicho Onah
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
Footer
© 2022 GitHub, Inc.
Footer navigation

    Terms
    Privacy

