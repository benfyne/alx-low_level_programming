#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Write the function that creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	int name_len, owner_len;

	name_len = strlen(name);
	owner_len = strlen(owner);
	new_dog = malloc(sizeof(dog_t) + sizeof(char) * (name_len + 1)
			+ sizeof(char) * (owner_len + 1));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = (char *)(new_dog + 1);
	strcpy(new_dog->name, name);
	new_dog->owner = new_dog->name + name_len + 1;
	strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
