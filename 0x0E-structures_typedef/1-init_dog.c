#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function initializes a variable of type struct dog
 * @d: array
 * @name: character input
 * @age: float input
 * @owner: charcter input
 * Description: struct named dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

