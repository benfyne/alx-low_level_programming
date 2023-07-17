#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = copy_string(name);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = copy_string(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
/**
 * copy_string - copies string
 *
 * @s: string
 *
 * Return: 0
 */
char *copy_string(char *s)
{
	char *copy;

	copy = malloc(sizeof(char) * (strlen(S) + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, s);
	return (copy);
}
