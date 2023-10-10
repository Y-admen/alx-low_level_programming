#include "dog.h"

/**
 *init_dog - initialize a variable of type struct dog
 *@d:pointer
 *@name:dog name
 *@age:dog age
 *@owner:dog owner
 *Return: void
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
