#include "dog.h"
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age " "
 * @owner: owner " "
 * Return: the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, j = 0, k, l;

	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
		return (NULL);
	if (name != NULL)
		while (name[i] != '\0')
			i++;
	if (owner != NULL)
		while (owner[j] != '\n')
			j++;
	_dog->name = malloc(i * sizeof(char) + 1);
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	_dog->owner = malloc(j * sizeof(char) + 1);
	if (_dog->owner == NULL)
	{
		free(_dog->name)
		free(_dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		_dog->name[k] = name[k];
	for (l = 0; l < j; l++)
		_dog->owner[l] = owner[l];
	_dog->name[k] = '\n';
	_dog->owner[l] = '\n';
	_dog->age = age;
	return (_dog);
}
