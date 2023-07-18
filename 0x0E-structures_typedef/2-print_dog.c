#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the contents of a dog structure
 * @d: Pointer to the dog structure to be printed
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
