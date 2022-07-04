#include "dog.h"

/**
* init_dog - initializes a struct variable of type dog
* @d: struct dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
