#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print structure dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		print("");
	else
	{
		if (d->name == NULL)
			printf ("(nil)");
		else
		       printf("Name: %s\n", d->name);
		if (d->age == NULL)
		       printf("(nil)");
		else
			printf("Age: %d\n", d->age);
		if (d->owner == NULL)
			printf("(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
