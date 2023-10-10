#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_dog - function that prints a struct dog
 * @d:pointer element
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
