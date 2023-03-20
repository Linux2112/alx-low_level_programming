#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new struct dog
 * @name: 1st member of struct dog
 * @age: 2nd member of struct dog
 * @owner: 3rd member of struct dog
 *
 * Return: the new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		max_dog = malloc(sizeof(dog_t));

		if (max_dog == NULL)
			return (NULL);

		max_dog->name = malloc(sizeof(char) * name_l);

