#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog. 
 * @name: Name of the dog.
 * @age: age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the the new dog, NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner) {
	dog_t *new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!new_dog->name) {
		free(new_dog);
		return (NULL);
	}
	for (int i = 0; name[i]; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!new_dog->owner) {
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (int i = 0; owner[i]; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
