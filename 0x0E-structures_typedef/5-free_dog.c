#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees memory allocated to dogs
* @d: struct dog
*
* Return: void
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
