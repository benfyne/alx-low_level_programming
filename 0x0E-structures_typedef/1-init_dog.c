#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer
 * @name: name of dog
 * @age: age
 * @owner: personnel
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}
	if (name != NULL)
		d->name = name;
	d->age = age;
	if (owner != NULL)
		d->owner = owner;
}
