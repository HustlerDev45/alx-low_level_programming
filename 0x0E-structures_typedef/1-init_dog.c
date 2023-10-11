#include <stdlib>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: pointer to a struct dog variable to be initialized.
 * @name: char* variable, the dog's name.
 * @age: float variable, dog's age.
 * @owner: char* variable, dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
