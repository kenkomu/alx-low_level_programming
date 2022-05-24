#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function prints struct dog
 * @d: pointer to be passed
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == 0)
		printf("Name: (nil)\n");

	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == 0)
		printf("Owner: (nil)\n");

	else
		printf("Owner: %s\n", d->owner);
}

